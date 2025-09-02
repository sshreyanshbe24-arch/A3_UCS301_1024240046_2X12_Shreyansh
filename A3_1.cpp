#include <iostream>
using namespace std;
int main()
{
    int stack[100];
    int top=-1;
    int max_size=100;
    int ch, value;
    while(true)
    {
        cout<<"1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. Check if empty\n";
        cout<<"4. Check if full\n";
        cout<<"5. Display\n";
        cout<<"6. Peek top element\n";
        cout<<"7. Exit\n";
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                if(top==max_size-1)
                {
                    cout<<"Stack is full\n";
                }
                else
                {
                    cout<<"Enter value to push\n";
                    cin>>value;
                    top++;
                    stack[top]=value;
                }
                break;
            }
            case 2:
            {
                if(top==-1)
                {
                    cout<<"STack is empty\n";
                }
                else
                {
                    cout<<"Stack is not empty\n";
                }
                break;
            }
            case 3:
            {
                if(top==-1)
                {
                    cout<<"Stack is empty\n";
                }
                else
                {
                    cout<<"Stack is not empty\n";
                }
                break;
            }
            case 4:
            {
                if(top==max_size-1)
                {
                    cout<<"Stack is full\n";
                }
                else
                {
                    cout<<"Stack is not full\n";
                }
                break;
            }
            case 5:
            {
                if(top==-1)
                {
                    cout<<"Stakc is empty\n";
                }
                else
                {
                    cout<<"Stack elemnets are: ";
                    for(int i=top;i>=0;i--)
                    {
                        cout<<stack[i]<<" ";
                    }
                    cout<<"\n";
                }
                break;
            }
            case 6:
            {
                if (top==-1)
                {
                    cout<<"Stack is empty\n";
                }
                else
                {
                    cout<<"Top element: "<<stack[top]<<"\n";
                }
                break;
            }
            case 7:
            {
                cout<<"Program exited\n";
                return 0;
            }
            default:
            {
                cout<<"Invalid choice\n";
            }
        }
    }
}