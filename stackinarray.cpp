#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
        int top;
        int arr[5];
    public:
        Stack()
        {
            top=-1;
            for(int i=0;i<4;i++)
            {
                arr[i]=0;
            }
        }
    void push()
    {
        if(top==4)
        {
            cout<<"stack is full"<<endl;
        }
        else{
            int num;
            cout<<"enter the number you want to insert"<<endl;
            cin>>num;
            top++;
            arr[top]=num;
        }
    }
    void display()
    {
        cout<<"all values are of stack is"<<endl;
        for(int i=0;i<=4;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Stack s1;
    int opt;
    do{
        cout<<"stack operations in array"<<endl<<"1.Appending"<<endl<<"2.print"<<endl<<"3.exit"<<endl;
        cin>>opt;
        switch(opt)
        {
            case 1:
                s1.push();
                break;
            case 2:
                s1.display();
                break;
            

        }

    }
    while(opt!=3);
}