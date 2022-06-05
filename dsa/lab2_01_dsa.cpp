#include <iostream>
#include <cstring>
using namespace std;
template <class t>
class stack
{
    t *arr;
    int top;
    int size;

public:
    stack(int n)
    {
        size = n;
        arr = new t[size];
        top = -1;
    }
    void push(t a)
    {
        if (top == size - 1)
        {
            cout << "stack overflow!!" << endl;
        }
        else
        {
            arr[++top] = a;
        }
    }
    t pop()
    {
        if (top == -1)
        {
            cout << "stack underflow" << endl;
            return -1;
        }
        return arr[top--];
    }
    int is_empty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    t top_of_stack()
    {
        return arr[top];
    }
};

int check_operator(char ch)
{
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9')
    {
        return 0;
    }

    return 1;
}
int f(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/')
    {
        return 5;
    }
    else
    {
        return 6;
    }
}
int g(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else if (ch == '*' || ch == '/')
    {
        return 4;
    }
    else
    {
        return 7;
    }
}

string infixToPostfix()
{
    string in;
    cout << "enter infix string!! " << endl;
    getline(cin, in);
    stack<char> s(in.length());
    string post;

    for (int i = 0; i < in.length(); i++)
    {
        char c = in[i];

        if (!check_operator(c))
        {
            post += c;
        }
        else if (c == '(')
        {
            s.push('(');
        }

        else if (c == ')')
        {
            while (s.top_of_stack() != '(')
            {
                post += s.pop();
            }
            s.pop();
        }

        else
        {
            while ((!s.is_empty()) && (f(s.top_of_stack()) > g(c)) && (s.top_of_stack() != '('))
            {
                post += s.pop();
            }
            s.push(c);
        }
    }

    while (!s.is_empty())
    {
        post += s.pop();
    }
    return post;
}

int main()
{
    string g;
    g = infixToPostfix();
    cout << "postfix string is (" << g << ")" << endl;
    return 0;
}