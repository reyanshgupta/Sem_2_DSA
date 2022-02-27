#include<iostream>
#include <stack>
using namespace std;

int priority (char alpha){
    if(alpha == '+' || alpha == '-'){
        return 1;}
 
    if(alpha == '*' || alpha =='/'){
        return 2;}

    return 0;
}

string convert_postfix_to_infix(string infix)
{
    int i = 0;
    string postfix = "";
    stack <char> s;

    while(infix[i]!='\0') //while infix is not null.
    {
        //if operand then add to the postfix expression
        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z')          
        {
            postfix += infix[i];
            i++;
        }
        // if opening bracket then push to the stack
        else if(infix[i]=='(')
        {
            s.push(infix[i]);
            i++;
        }
        // if closing bracket encountered then keep adding the top element to the postfix expression and
        // keep popping from stack until closing pair of the bracket is found
        else if(infix[i]==')')
        {
            while(s.top()!='('){
                postfix += s.top();
                s.pop();
            }
            s.pop();
            i++;
        }
        //checking priority for operators
        else            
        {
            while (!s.empty() && priority(infix[i]) <= priority(s.top())){
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
            i++;
        }
    }
    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }


    cout << "Postfix is : " << postfix; //it will print postfix conversion  
    return postfix;
}

int main()
{
    string infix;
    cout << "Enter the string: ";
    cin >> infix;
    string postfix;
    postfix = convert_postfix_to_infix(infix);
    
    return 0;
}   