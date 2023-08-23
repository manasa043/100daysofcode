//not dumped
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node()
    {
        data=0;
        next=NULL;
    }
    Node(int d)
    {
        data=d;
    }
};
class singlylinkedlist{
    public:
    Node*head=NULL;
    Node*append()
    {
        int n;
        cout<<"enter the no of nodes you want to insert"<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int num;
            cout<<"enter the data"<<endl;
            cin>>num;
            Node*n=new Node();
            n->data=num;
            n->next=NULL;
            if(head==NULL)
            {
                head=n;
            }
            else{
                Node*ptr=head;
                while(ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=n;
            }
       
        }
         return head;
    }
    void print()
    {
        int count=0;
        Node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            count=count+1;
            temp=temp->next;
        }
        cout<<endl;
        cout<<"number of nodes in linked list is"<<count<<endl;
    }
    
};
int main()
{
    singlylinkedlist s;
    cout<<"To find number of nodes in linked list"<<endl;
    int opt;
    do{
        cout<<"1.Append node"<<endl;
        cout<<"2.print"<<endl;
        cin>>opt;
        switch(opt)
        {
            case 1:
                s.append();
                break;
            case 2:
                s.print();
                break;
            default:
                cout<<"enter the valid option"<<endl;
        }
    }while(opt!=3);
}