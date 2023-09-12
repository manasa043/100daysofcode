#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
        int top;
        int* arr;
        int size;
        
    public:
        Stack(int n)
        {
            size=n;
            top=-1;
            arr=new int[n];
            /*for(int i=0;i<=size-1;i++)
            {
                arr[i]=0;
            }*/
        }
    void push()
    {
        if(top==size-1)
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
        for(int i=0;i<=size-1;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"stack is underflow"<<endl;
            return 0;
        }
        else
        {
         int val=arr[top];
         arr[top]=0;
         top--;
         return val;
        }

    }
};
int main()
{
    
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    Stack s1(n);
    int opt;
    do{
        cout<<"stack operations in array"<<endl<<"1.Appending"<<endl<<"2.print"<<endl<<"3.deleting the element"<<endl<<"4.exit"<<endl;
        cin>>opt;
        switch(opt)
        {
            case 1:
                s1.push();
                break;
            case 2:
                s1.display();
                break;
            case 3:
                s1.pop();
                break;
            
            

        }

    }
    while(opt!=4);
}