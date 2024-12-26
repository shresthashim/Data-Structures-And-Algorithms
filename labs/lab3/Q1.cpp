// Infix to Postfix Conversion using Stack

// Time Complexity: O(n)

#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to determine the precedence of operators
int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

// Function to check if a character is an operator
bool isOperator(char ch)
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

// Function to check if a character is an operand
bool isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
}

// Function to convert infix expression to postfix expression
string infixToPostfix(const string &infix)
{
    stack<char> s;
    string postfix;

    for (int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i]; // Get the current character

        if (isOperand(ch))
        {
            postfix += ch; // Append operand to postfix expression
        }
        else if (ch == '(')
        {
            s.push(ch); // Push '(' onto the stack
        }
        else if (ch == ')')
        {
            // Pop from the stack until '(' is found
            while (!s.empty() && s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }
            if (!s.empty() && s.top() == '(')
                s.pop(); // Remove '('
        }
        else if (isOperator(ch))
        {
            // Pop operators from the stack with higher or equal precedence
            while (!s.empty() && precedence(s.top()) >= precedence(ch))
            {
                postfix += s.top();
                s.pop();
            }
            s.push(ch); // Push the current operator onto the stack
        }
    }

    // Pop remaining operators from the stack
    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main()
{
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
