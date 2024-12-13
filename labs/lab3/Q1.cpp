// Infix expression into postfix expression

// Time Complexity: O(n)

#include <iostream>
#include <cstring>
using namespace std;

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    if (top >= MAX - 1)
    {
        cout << "Stack Overflow!" << endl;
        return;
    }
    stack[++top] = ch;
}

char pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow!" << endl;
        return '\0';
    }
    return stack[top--];
}

char peek()
{
    if (top < 0)
    {
        return '\0';
    }
    return stack[top];
}

bool isEmpty()
{
    return top == -1;
}

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

bool isOperator(char ch)
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

bool isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
}

void infixToPostfix(const char *infix, char *postfix)
{
    int j = 0;

    for (int i = 0; infix[i] != '\0'; i++)
    {
        char ch = infix[i];

        if (isOperand(ch))
        {
            postfix[j++] = ch;
        }
        else if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            while (!isEmpty() && peek() != '(')
            {
                postfix[j++] = pop();
            }
            if (!isEmpty() && peek() == '(')
            {
                pop();
            }
        }
        else if (isOperator(ch))
        {
            while (!isEmpty() && precedence(peek()) >= precedence(ch))
            {
                postfix[j++] = pop();
            }
            push(ch);
        }
    }

    while (!isEmpty())
    {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';
}

int main()
{
    char infix[MAX], postfix[MAX];

    cout << "Enter an infix expression: ";
    cin >> infix;

    infixToPostfix(infix, postfix);

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}


