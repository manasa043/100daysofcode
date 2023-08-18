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
class singlylinkedlist
{
    public:
    Node*head=NULL;
    Node*append()
    {
        int n;
        cout<<"enter the number of nodes to append"<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
            int num;
            cout<<"enter the number to inserrt"<<endl;
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
        Node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    Node*reverselist()
    {
        
        Node*ptr=head;
        Node*preptr=NULL;
        Node*nxtptr=NULL;
        while(ptr!=NULL)
        {
            nxtptr=ptr->next;
            ptr->next=preptr;
            preptr=ptr;
            ptr=nxtptr;
        }
        head=preptr;
        return head;
        
        
    }
};
int main()
{
    singlylinkedlist s;
    cout<<"printing of reverse linked list"<<endl;
    cout<<"appending of the node"<<endl;
    s.append();
    cout<<"printing the list"<<endl;
    s.print();
    s.reverselist();
    cout<<"printing the reversal of list"<<endl;
    s.print();
}