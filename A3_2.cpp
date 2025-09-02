#include <iostream>
using namespace std;
int main()
{
    char stack[100];
    int top=-1;
    string input;
    cout<<"Enter a string: ";
    cin>>input;
    for(int i=0;i<input.length();i++)
    {
        top++;
        stack[top]=input[i];
    }
    cout<<"Reversed String is: ";
    while(top!=-1)
    {
        cout<<stack[top];
        top--;
    }
    return 0;
}