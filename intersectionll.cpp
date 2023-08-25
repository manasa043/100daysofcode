#include<bits/stdc++.h>
using namespace std;
class Node
{
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
    Node*head2=NULL;
    Node*second()
    {
        cout<<"enter the number of nodes you want you create"<<endl;
        int ni;
        cin>>ni;
        for(int i=0;i<ni;i++){
            cout<<"enter the number you want insert"<<endl;
            int num;
            cin>>num;
            Node*n2=new Node();
            n2->data=num;
            n2->next=NULL;

            if(head2==NULL)
             {
                  head2=n2;
             }
            else
            {
             Node*ptr;
             ptr=head2;
             while(ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
             ptr->next=n2;
             }
        }
        return head2;
    }
    void print2()
    {
        Node*ptr=head2;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
    
    Node*first()
    {
        cout<<"enter the number of nodes you want insert"<<endl;
        int no;
        cin>>no;
     for(int i=0;i<no;i++){
        cout<<"enter the data"<<endl;
        int num;
        cin>>num;
        Node*n=new Node();
        n->data=num;
        n->next=NULL;
        if(head==NULL)
        {
            head=n;
        }
        else
        {
            Node*ptr;
            ptr=head;
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
        Node*ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
    Node*intersection()
    {
        Node*temp=head;
        while(temp->next!=NULL)
        {
            
            temp=temp->next;
        }
        temp->next=head2;
        return head;

    }
};
int main()
{
    singlylinkedlist s;
     int opt;
    cout<<"linked list "<<endl;
    cout<<endl;
    do{
        cout<<"linked list 1 creation"<<endl<<"1.appening node"<<endl<<"2.printing"<<endl<<"3.intersection"<<endl;
       
        cin>>opt;
        switch(opt)
        {
            case 1:
                s.first();
                cout<<endl;
                s.second();
                break;
            case 2:
                cout<<"linked list 1"<<endl;
                s.print();
                cout<<endl;
                cout<<"linked list 2"<<endl;
                cout<<endl;
                s.print2();
                break;
            case 3:
                s.intersection();
                cout<<"aftr intersection of linked list"<<endl;
                s.print();
                break;
        }
       

    }
     while(opt!=4);
}