#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
        int size;
        int top;
        int*arr;
        int*span;
    public:
        Stack(int n)
        {
            size=n;
            top=-1;
            arr=new int[n];
            span=new int[n];
        }
    void push()
    {
        int k=1;
        while(k!=0){
            cout<<"enter k value to exit"<<endl;
            cin>>k;
            if(top==size-1)
            {
                cout<<"stack is over flow"<<endl;
            }
            else{
                int num;
                cout<<"enter data"<<endl;
                cin>>num;
                top++;
                arr[top]=num;
            }
        }
    }
    void stock()
    {
        int sp=1;
        int i;
        int v=1;
        for(i=0;i<=size-1;i++)
        {
            span[i]=1;
        }
        for(i=1;i<size-1;i++)
        {
             for (int j = i - 1;
             (j >= 0) && (arr[i]>=arr[j]); j--)
               span[i]++;
            //else{
                //span[i++]==1;
           // }
            
        }
        for(i=0;i<=size-1;i++)
        {
            cout<<span[i]<<" ";
        }
    }
    void print()
    {
        if(top==-1)
        {
            cout<<"stack is under flow"<<endl;
        }
        else{
            for(int i=0;i<=size-1;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
    }
};
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    Stack s(n);
    s.push();
    s.print();
    cout<<endl;
    s.stock();

}