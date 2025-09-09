#include <iostream>
using namespace std;
int main()
{
    #define MAX 100
    char postfix[]="231*+9-";
    int evalStack[MAX];
    int top=-1;
    for(int i=0;postfix[i]!='\0';i++)
    {
        char c=postfix[i];
        if(c>='0' && c<='9')
        {
            evalStack[++top]=c-'0';
        }
        else
        {
            int operand2=evalStack[top--];
            int operand1=evalStack[top--];
            int result;
            switch(c)
            {
                case '+':
                    result=operand1+operand2;
                    break;
                case '-':
                    result=operand1-operand2;
                    break;
                case '*':
                    result=operand1+operand2;
                    break;
                case '/':
                    result=operand1+operand2;
                    break;
                case '^':
                    result=1;
                    for(int j=0;j<operand2;j++)
                    {
                        result*=operand1;
                    }
                    break;
            }
            evalStack[++top]=result;
        }
    }
    int finalresult=evalStack[top];
    cout<<"Result: "<<finalresult;
    return 0;
}