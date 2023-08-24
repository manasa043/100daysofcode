#include<bits/stdc++.h>
using namespace std;
class Node{
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
class singlylinked{
    public:
    Node*head=NULL;
    Node*append()
    {
        cout<<"enter the number of you want insert"<<endl;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
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
    Node*sort()
    {
        Node*i=NULL;
        Node*j=NULL;
        int temp;
        for(i=head;i->next!=NULL;i=i->next)
        {
            for(j=i->next;j!=NULL;j=j->next)
            {
                if(i->data>j->data)
                {
                    temp=i->data;
                    i->data=j->data;
                    j->data=temp;
                }
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
    Node*duplicate()
    {
        Node*i=head;
        while(i->next!=NULL)
        {
            if(i->data==i->next->data)
            {
                Node*curr=i->next->next;
                free(i->next);
                i->next=curr;
            }
            i=i->next;
        }
        return head;
        
    }

};
int main()
{
    singlylinked s;
    int opt;
    cout<<"sorting the linked list"<<endl;
    do{
        cout<<endl;
        cout<<"1.appending node"<<endl<<"2.print"<<endl<<"3.sort"<<endl;
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
               s.sort();
                break;
            case 4:
                s.duplicate();
                break;
        }
    }
    while(opt!=5 );
}