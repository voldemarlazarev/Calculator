#include "calculator.h"
#include <stdexcept>

using namespace CalculatorNamespace;

Calculator::Calculator()
{

}

CalculationResult Calculator::calculate(OperationType opType, double a, double b)
{
    switch(opType)
    {
    case OperationType::Add:
        return CalculationDoubleResult{a+b};
        break;
    case OperationType::Sub:
        return CalculationDoubleResult{a-b};
        break;
    case OperationType::Mul:
        return CalculationDoubleResult{a*b};
        break;
    case OperationType::Div:
        return CalculationDoubleResult{a/b};
        break;
    default:
        return CalculationErrorResult{};
    }
}

CalculationDoubleResult::CalculationDoubleResult(double result)
    : CalculationResult{CalculationResultType::Double}
    , doubleResult{result}
{

}

CalculationResult::CalculationResult(CalculationResultType type)
    : type{type}
{

}

double CalculationResult::getDoubleResult()
{
    throw std::runtime_error{"Not a double"};
}

CalculationErrorResult::CalculationErrorResult()
    : CalculationResult{CalculationResultType::Error}
{

}
