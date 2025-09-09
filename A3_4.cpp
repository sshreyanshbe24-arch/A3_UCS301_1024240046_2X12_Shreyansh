#include <iostream>
using namespace std;
int main()
{
    #define MAX 100
    char infix[]="a+b*(c^d-e)^(f+g*h)-i";
    char postfix[MAX]="";
    char stack[MAX];
    int top=-1;
    int j=0;
    for(int i=0;infix[i]!=0;i++)
    {
        char c=infix[i];
        if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9'))
        {
            postfix[j++]=c;
        }
        else if(c=='(')
        {
            stack[++top]=c;
        }
        else if(c==')')
        {
            while(top>=0 && stack[top]!='(')
            {
                postfix[j++]=stack[top--];
            }
            if(top>=0 && stack[top]=='(')
            {
                top--;
            }
        }
        else
        {
            while(top>=0 && stack[top]!='(')
            {
                char stackTop=stack[top];
                int currentPrec;
                if(c=='^')
                {
                    currentPrec=3;
                }
                else if(c=='*' || c=='/')
                {
                    currentPrec=2;
                }
                else if(c=='+' || c=='-')
                {
                    currentPrec=1;
                }
                else
                {
                    currentPrec=0;
                }
                int stackPrec;
                if(stackTop=='^' || stackTop=='/')
                {
                    stackPrec=2;
                }
                else if(stackTop=='+' || stackTop=='-')
                {
                    stackPrec=1;
                }
                else
                {
                    stackPrec=0;
                }
                if(currentPrec<=stackPrec)
                {
                    postfix[j++]=stack[top--];
                }
                else
                {
                    break;
                }
            }
            stack[++top]=c;
        }
    }
    while(top>=0)
    {
        postfix[j++]=stack[top--];
    }
    postfix[j]='\0';
    cout<<"Postfix expression: "<<postfix;
    return 0;
}