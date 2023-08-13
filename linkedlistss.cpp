#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
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
    Node*head;
    singlylinkedlist()
    {
        head=NULL;
    }
    void appendnode(Node *n)
    {
        if(head==NULL)
        {
            head=n;
            cout<<"nodeappened"<<endl;
        }
        else{
            Node *ptr;
            ptr=head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=n;
            cout<<"node appened"<<endl;
        }
    }
    Node* preppend(Node* n)
    {
        
        n->next=head;
        head=n;
        return n;

    }
    Node* endnode(Node* n)
    {
        Node* ptr;
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=n;
        return n;
        
    }
    void printlist()
    {
        if(head==NULL)
        {
            cout<<"the linked list is empty"<<endl;
        }
        else{
            cout<<"linked list is"<<endl;
            Node* temp;
            temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
    }

};
int main()
{
    singlylinkedlist s;
    int opt;
    int num;
    do{
        cout<<endl;
        cout<<"enter the option"<<endl;
        cout<<"1.to appendnode"<<endl;
        cout<<"2.print the list"<<endl;
        cout<<"3.to prepend"<<endl;
        cout<<"4.to endnode"<<endl;
        cout<<"5.exit"<<endl;
        cin>>opt;
        Node* n1=new Node();
        switch(opt)
        {
            case 1:
                cout<<"appending node value"<<endl;
                cout<<"enter the key value and data"<<endl;
            
                cin>>num;
        
                n1->data=num;
                s.appendnode(n1);
                break;
            case 2:
               s.printlist();
               break;
            case 3:
               cout<<"enter the data to insert before node"<<endl;
               cin>>num;
               n1->data=num;
               s.preppend(n1);
               break;
            case 4:
               cout<<"enter the data to append after node"<<endl;
               cin>>num;
               n1->data=num;
               s.endnode(n1);
               break;

            
            default:
                cout<<"enter the valid option"<<endl;                 


        }

    }
    while(opt!=5);


}