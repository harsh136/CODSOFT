#include <iostream>
using namespace std;
int main()
{
    double n1, n2, res;
    char op;
    cout << "****** SIMPLE CALCULATOR ******" << endl;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "Enter the operation you want to perform: (+, -, *, /): ";
    cin >> op;
    switch (op)
    {
    case '+':
        res = n1 + n2;
        break;
    case '-':
        res = n1 - n2;
        break;
    case '*':
        res = n1 * n2;
        break;
    case '/':
        if (n2 != 0)
        {
            res = n1 / n2;
        }
        else
        {
            cout << "Error: Division by Zero (0) not possible!!";
            return 1;
        }
        break;
    default:
        cout << "Invalid operation!! Try again!!";
        return 1;
        break;
    }
    cout << "Result: " << n1 << " " << op << " " << n2 << " = " << res;
    return 0;
}