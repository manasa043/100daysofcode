#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node*prev;
    int data;
    Node*next;
    Node()
    {
        data=0;
        next=NULL;
        prev=NULL;
    }
    Node(int d)
    {
       data=d;
    }
};
class doublylinkedlist{
    public:
    Node*head=NULL;
    Node*append_node()
    {
        cout<<"enter the numeber of elements you want to insert"<<endl;
        int val;
        cin>>val;
        for(int i=0;i<val;i++)
        {
            cout<<"enter the data"<<endl;
            int num;
            cin>>num;
            Node*n=new Node();
            n->data=num;
            n->next=NULL;
            n->prev=NULL;
            if(head==NULL)
            {
                head=n;
                n->prev=head;
            }
            else{
                Node*ptr=head;
                while(ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=n;
                n->prev=ptr;

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
    Node*rotate()
    {
        cout<<"enter the number of nodes you want to roatate"<<endl;
        int key;
        cin>>key;
        
        for(int j=0;j<key;j++)
        {
            Node*temp=head;
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            Node*add=head;
            Node*ptr=temp->next;
            ptr->next=add;
            ptr->prev=NULL;
            temp->next=NULL;
            head=ptr;
            
            
        }
        return head;
    }

};
int main()
{
    doublylinkedlist s;
    int opt;
    do{
        cout<<"doubly linked list roatations"<<endl;
        cout<<"1.append node"<<endl<<"2.print"<<endl<<"3.rotate"<<endl<<"4.exit"<<endl;
        cin>>opt;
        switch(opt)
        {
            case 1:
                s.append_node();
                break;
            case 2:
                s.print();
                break;
            case 3:
                s.rotate();
                break;
            
        }
    }while(opt!=4);
}