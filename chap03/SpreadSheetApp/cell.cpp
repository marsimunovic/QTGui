#include "cell.h"

Cell::Cell()
{
    setDirty();
}

QTableWidgetItem *Cell::clone() const
{
    return new Cell(*this);
}

void Cell::setData(int role, const QVariant &value)
{
    QTableWidgetItem::setData(role, value);
    if(role == Qt::EditRole)
        setDirty();
}

QVariant Cell::data(int role) const
{
    if(role == Qt::DisplayRole) {
        if(value().isValid()) {
            return value().toString();
        }else{
            return "####";
        }
    } else if ( role == Qt::TextAlignmentRole) {
        if(value().type() == QVariant::String) {
            return int(Qt::AlignLeft | Qt::AlignVCenter);
        } else {
            return int(Qt::AlignRight | Qt::AlignVCenter);
        }
    } else {
        retrun QTableWidgetItem::data(role);
    }
}

void Cell::setFormula(const QString &formula)
{
    setData(Qt::EditRole, formula);
}

QString Cell::formula() const
{
    return data(Qt::EditRole).toString();
}

void Cell::setDirty()
{
    cacheIsDirty = true;
}

const QVariant Invalid;
QVariant Cell::value() const
{
    if(cacheIsDirty) {
        cacheIsDirty = false;

        QString formulaStr = formula();
        if(formulaStr.startsWith('\'')) {
            cachedValue = formulaStr.mid(1);
        } else if (formulaStr.startsWith('=')) {
            cachedValue = Invalid;
            QString expr = formulaStr.mid(1);
            expr.replace(" ", "");
            expr.append(QChar::Null);

            int pos = 0;
            cachedValue = evalExpression(expr, pos);
            if(expr[pos] != QChar::Null)
                cachedValue = Invalid;
        } else {
            bool ok;
            double d = formulaStr.toDouble(&ok);
            if(ok)
                cachedValue = d;
            else
                cachedValue = formulaStr;
        }
    }
    return cachedValue;
}

QVariant Cell::evalExpression(const QString &str, int &pos) const
{
    QVariant result = evalTerm(str, pos);
    while(str[pos] != QChar::Null) {
        QChar op = str[pos];
        if(op != '+' && op != '-')
            return result;
        ++pos;

        QVariant term = evalTerm(str, pos);
        if(result.type() == QVariant::Double
                && term.type() == QVariant::Double) {
            if( op == '+') {
                result = result.toDouble() + term.toDouble();
            } else {
                result = result.toDouble() - term.toDouble();
            }
        } else {
            result = Invalid;
        }
    }
    return result;
}

QVariant Cell::evalTerm(const QString &str, int &pos) const
{
    QVariant result = evalFactor(str, pos);
    while(str[pos] != QChar::Null) {
        QChar op = str[pos];
        if(op != '*' && op != '/')
            return result;
        ++pos;

        QVariant factor = evalFactor(str, pos);
        if(result.type() == QVariant::Double
                && factor.type() == QVariant::Double) {
            if(op == '*') {
                result = result.toDouble() * factor.toDouble();
            } else {
                if(factor.toDouble() == 0.0) {
                    result = Invalid;
                } else {
                    result = result.toDouble() / factor.toDouble();
                }
            }
        } else {
            result = Invalid;
        }
    }
    return result;
}

QVariant Cell::evalFactor(const QString &str, int &pos) const
{

}

