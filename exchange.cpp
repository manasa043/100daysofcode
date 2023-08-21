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
class circularlinkedlist
{
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
                n->next=head;
            }
            else{
                Node*ptr=head;
                while(ptr->next!=head)
                {
                    ptr=ptr->next;
                }
                ptr->next=n;
                n->next=head;
                
            
            }
            
       
        }
        return head;
    }
    void print()
    {
        Node*temp=head;
        if(head!=NULL)
        {
            do{
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            while(temp!=head);
        }
    }
   /* Node*reprint()
    {
        Node*temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next->next=head->next;
        head->next=temp->next;
        temp->next=head;
        head=head->next;
        return head;*/
    struct Node* exchangeNodes()
  {
    // If list is of length 2
    if (head->next->next == head) {
        head = head->next;
        return head;
    }
 
    // Find pointer to previous of last node
    struct Node* p = head;
    while (p->next->next != head)
        p = p->next;
 
    /* Exchange first and last nodes using
       head and p */
    p->next->next = head->next;
    head->next = p->next;
    p->next = head;
    head = head->next;
 
    return head;
 // }
    }
};
int main()
{
    circularlinkedlist s;
    int opt;
    do
    {
        cout<<"linkedlist list deletion operation performation"<<endl;
        cout<<"1.append node"<<endl;
        cout<<"2.print"<<endl;
        cout<<"enter your option"<<endl;
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
                s.exchangeNodes();
                s.print();
                break;
        }
        
    } while (opt!=4);
}