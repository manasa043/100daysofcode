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
    void count()
    {
        cout<<"enter the number of node you want print"<<endl;
        int node;
        int val;
        cin>>node;
        Node*temp=NULL;
        int c=1;
        Node*ptr=head;
        while(ptr!=NULL)
        {
            if(c==node)
            {
            
                temp=ptr;
                break;
            }
            c=c+1;
            ptr=ptr->next;
        }
        if(temp!=NULL)
        {
            cout<<"the value at nth node is"<<temp->data;
        }
        else{
            cout<<"node not present"<<endl;
        }

    }
        
};
int main()
{
    singlylinkedlist s;
    cout<<"To find number of nodes in linked list"<<endl;
    int opt;
    do{
        cout<<endl;
        cout<<"1.Append node"<<endl;
        cout<<"2.print"<<endl;
        cin>>opt;
        switch(opt)
        {
            case 1:
                s.append();
                break;
            case 2:
                s.count();
                break;
        }
    }while(opt!=3);
}