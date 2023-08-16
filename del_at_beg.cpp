#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node*next;
    Node()
    {
        next=NULL;
        data=0;
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
    Node*appendnode()
    {
         int num;
        cout<<"enter value to insert"<<endl;
        cin>>num;
        Node*n1=new Node();
        n1->data=num;
        n1->next=NULL;

        
        if(head==NULL)
        {
            head=n1;
        }
        else{
            Node*ptr=head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=n1;
            n1->next=NULL;
        }
        return n1;
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
    Node*del_at_beg()
    {
        Node*ptr=head;
        head=ptr->next;
        free(ptr);
        return head;
    }
};
int main()
{
    singlylinkedlist s;
    int opt;
    do
    {
        cout<<"linkedlist list deletion operation performation"<<endl;
        cout<<"1.append node"<<endl;
        cout<<"2.print"<<endl;
        cout<<"3.deletion at head node"<<endl;
        cout<<"enter your option"<<endl;
        cin>>opt;
        switch(opt)
        {
            case 1:
               
                s.appendnode();
                break;
            case 2:
                s.print();
                break;
            case 3:
                s.del_at_beg();
                break;
        }
        
    } while (opt!=4);
    
}