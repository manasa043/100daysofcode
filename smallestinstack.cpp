#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
        int size;
        int top;
        int *arr;
    public:
     Stack(int n)
     {
        size=n;
        top=-1;
        arr=new int[n];
     }
void append()
{
    if(top==size-1)
    {
        cout<<"stcak is overflow"<<endl;
    }
    else{
        int num;
        cout<<"enter the number you want insert"<<endl;
        cin>>num;
        top++;
        arr[top]=num;
    }
}
void print()
{
    if(top==-1)
    {
        cout<<"no elements in stack"<<endl;
    }
    else{
        for(int i=0;i<=top;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}
/*void getMin()
{
    int y=0;
    for(int i=0;i<=top;i++)
    {
            if(arr[y]>arr[i])
            {
                y=top;
            }
    }
    cout<<"the smallest element is"<<arr[y]<<endl;
}*/
  void getMin()
    {
        int y=0;
        for(int i=0;i<=top;i++)
        {
            if(arr[y]>arr[top])
            {
                y=top;
            }
            
        }
        cout<<"the smallest element is "<<arr[y]<<endl;
    }
};
int main()
{
    cout<<"enter the size of the stack"<<endl;
    int n;
    cin>>n;
    Stack s(n);
    int opt;
    do{
        cout<<"enter the options below to perform"<<endl<<"1.append"<<endl<<"2.print"<<"3.print minimum"<<endl<<"4.exit"<<endl;
        cin>>opt;
        switch(opt)
        {
            case 1:
                s.append();
                break;
            case 2:
                s.print();
                break;
            case 3:
                s.getMin();
                break;
        }
    }while(opt!=4);
}