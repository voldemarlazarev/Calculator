#ifndef CALCULATOR_H
#define CALCULATOR_H


namespace CalculatorNamespace
{
enum class OperationType
{
    Add,
    Sub,
    Mul,
    Div
};

enum class CalculationResultType
{
    Error,
    Double
};

class CalculationResult
{
public:
    CalculationResult(CalculationResultType type);
    CalculationResultType type;
    virtual double getDoubleResult();
};

class CalculationDoubleResult : public CalculationResult
{
public:
    CalculationDoubleResult(double result);
private:
    double doubleResult;
};

class CalculationErrorResult : public CalculationResult
{
public:
    CalculationErrorResult();
};

class Calculator
{
public:
    Calculator();
    CalculationResult calculate(OperationType opType, double a, double b);
};
}

#endif // CALCULATOR_H
