#include <cstdio>
#include <string>

enum class Operation
{
    Add,
    Subtract,
    Multiply,
    Divide
};

// helper array to print the enum class
std::string Operation_string[] = {"Add", "Subtract", "Multiply", "Divide"};

struct Calculator
{

    // default constructor to be add
    Calculator()
    {
        oper = Operation::Add;
    };

    Calculator(Operation op)
    {
        oper = op;
    }

    int calculate(int a, int b)
    {
        switch (oper)
        {
        case Operation::Add:
        {
            return a + b;
        }
        break;

        case Operation::Subtract:
        {
            return a - b;
        }
        break;

        case Operation::Multiply:
        {
            return a * b;
        }
        break;

        case Operation::Divide:
        {
            return a / b;
        }
        break;
        }
    }

private:
    Operation oper;
};

// helper function to print out the calculations
void print_calculation(Operation op_in, int a, int b)
{
    Calculator c = {op_in};
    printf("Operation: %s | Integers: %d, %d | Result: %d\n",
           Operation_string[static_cast<int>(op_in)].c_str(),
           a,
           b,
           c.calculate(a, b));
}

int main()
{
    print_calculation(Operation::Add, 16, 4);
    print_calculation(Operation::Subtract, 16, 4);
    print_calculation(Operation::Multiply, 5, 4);
    print_calculation(Operation::Divide, 21, 3);
};