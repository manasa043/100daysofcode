#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int key;
    int data;
    Node* next;
    Node()
    {
        key=0;
        data=0;
        next=NULL;
    }
    Node(int k,int d)
    {
        key=k;
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
    int key1,data1;
    do{
        cout<<endl;
        cout<<"enter the option"<<endl;
        cout<<"1.to appendnode"<<endl;
        cout<<"2.print the list"<<endl;
        cout<<"3.exit"<<endl;
        cin>>opt;
        Node* n1=new Node();
        switch(opt)
        {
            case 1:
                cout<<"appending node value"<<endl;
                cout<<"enter the key value and data"<<endl;
                cin>>key1;
                cin>>data1;
                n1->key=key1;
                n1->data=data1;
                s.appendnode(n1);
                break;
            case 2:
               s.printlist();
               break;
            default:
                cout<<"enter the valid option"<<endl;                 


        }

    }
    while(opt!=3);


}