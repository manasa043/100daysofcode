#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
        int size;
        int top;
        int*arr;
    public:
        Stack(int n)
        {
            size=n;
            top=-1;
            arr=new int[n];
        }
    void push()
    {
        if(top==size-1)
        {
            cout<<"stack is full"<<endl;
        }
        else{
            int num;
            cout<<"enter the data"<<endl;
            cin>>num;
            top++;
            arr[top]=num;
        }
    }
    void print()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
        }
        else{
            for(int i=0;i<=size-1;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
    }
    void peek()
    {
        if(top==-1)
        {
            cout<<"no elements in stack"<<endl;
        }
        else{
            int j=arr[top];
            cout<<"the peek element is"<<endl;
            cout<<j<<endl;

        }
    }
};
int main()
{
    int n;
    cout<<"enter the size of stack"<<endl;
    cin>>n;
    Stack s(n);
    int opt;
    do{
        cout<<"enter the option to perform"<<endl;
        cout<<"1.append"<<endl<<"2.print"<<endl<<"3.peek"<<endl;
        cin>>opt;
        switch(opt)
        {
            case 1:
                s.push();
                break;
            case 2:
                s.print();
                break;
            case 3:
    
                s.peek();
                break;
        }
    }while(opt!=4);
}