#include<iostream>
#include <stack>
using namespace std;

bool BracketCheck(string expr)
{ 
    stack<char> s;
    char x;
 
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
        {
            // Pushing the element in the stack
            s.push(expr[i]);
            continue;
        }
            //If the stack is empty, it cannot be balanced.
        if (s.empty())
            return false;
 
        switch (expr[i]) {
        case ')':
             
            x = s.top(); //storing top element in x
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;
 
        case '}':

            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;
 
        case ']':

            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
 //check if stack is empty.
    return (s.empty());
}
 
int main()
{
    string expr;
    cout << "Enter string: ";
    cin >> expr;

    if (BracketCheck(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}