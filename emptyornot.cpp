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
            cout<<"stack is overflow"<<endl;
        }
        else{
            top++;
            int num;
            cout<<"enter the number to insert"<<endl;
            cin>>num;
            arr[top]=num;
            
        }
    }
    void print()
    {
        cout<<"all elements of stack are"<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<"  ";
        }
    }
    bool isEmpty()
    {
        if(top!=-1)
        {
            return true;
        }
        else
           return false;
    }


};
int main()
{
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    Stack s(n);
    int k;
    do{
        cout<<endl;
        cout<<"strack operations"<<endl;
        cout<<"1.append"<<endl<<"2.push"<<endl<<"3.check is empty or  not"<<endl<<"4.exit"<<endl;
        cin>>k;
        switch(k)
        {
            case 1:
                s.push();
                break;
            case 2:
                s.print();
                break;
            case 3:
                if(s.isEmpty())
                {
                        cout<<"list is not empty"<<endl;
                }
                else{
                    cout<<"list is Empty"<<endl;
                }
                break;
        }
        


    }while(k!=4);

}
