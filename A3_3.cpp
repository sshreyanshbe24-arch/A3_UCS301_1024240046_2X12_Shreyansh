#include <iostream>
using namespace std;
int main()
{
    char stack[100];
    int top=-1;
    char a[100];
    cout<<"Enter an expression: ";
    cin>>a;
    for (int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='(' || a[i]=='{' || a[i]=='[')
        {
            top++;
            stack[top]=a[i];
        }
        else if(a[i]==')' || a[i]=='}' || a[i]==']')
        {
            if(top==-1)
            {
                cout<<"Unbalanced paranthesis\n";
                return 0;
            }
            if((a[i]==')' && stack[top]=='(') ||
               (a[i]=='}' && stack[top]=='{') ||
               (a[i]==']' && stack[top]=='['))
            {
                top--;
            }
            else
            {
                cout<<"Unbalanced paranthesis\n";
                return 0;
            }
        }
    }
    if(top==-1)
    {
        cout<<"Balanced paranthesis\n";
    }
    else
    {
        cout<<"Unbalanced paranthesis\n";
    }
    return 0;
}