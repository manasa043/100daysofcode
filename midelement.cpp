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
        Node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void middle()
    {
        int count=0;
        Node*temp=head;
        Node*preptr=NULL;
        while(temp!=NULL)
        {
            temp=temp->next;
            count=count+1;

        }
        cout<<"number of nodes"<<count<<endl;
        if(count%2==0)
        {
            int node=(count)/2+1;
            int c=1;
            Node*ptr=head;
            while(ptr!=NULL)
            {
                if(c==node)
                {
                    preptr=ptr;
                }
                c=c+1;
                ptr=ptr->next;
            }


        }
        else{
            int node=(count/2)+1;
            cout<<node<<endl;
            int c=1;
            Node*ptr=head;
            while(ptr!=NULL)
            {
                if(c==node)
                {
                    preptr=ptr;
                }
                c=c+1;
                ptr=ptr->next;
            }
        }
        cout<<"the middle element of node is"<<preptr->data;

    }
};
int main()
{
    singlylinkedlist s;
    int opt;
    do{
        cout<<endl;
        cout<<"1.append node"<<endl<<"2.print"<<endl<<"3.middle element"<<endl;
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
                s.middle();
                break;
        }
    }
    while(opt!=4);
}