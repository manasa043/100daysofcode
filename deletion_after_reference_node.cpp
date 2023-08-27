//not dumped
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
    Node*appendnode()
    {
        cout<<"enter the number of nodes you want to insert"<<endl;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<"enter the data you want to insert"<<endl;
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
    void print()
    {
        Node*node=head;
        while(node!=NULL)
        {
            cout<<node->data<<" ";
            node=node->next;
        }
    }
    Node*del_ref_node()
    {
        int key;
        cout<<"enter the referenece key"<<endl;
        cin>>key;
        Node*preptr=NULL;
        Node*ptr=head;
        while(ptr!=NULL)
        {
             if(ptr->data==key)
             {
                preptr=ptr;
                break;
             }
             ptr=ptr->next;
        }
        if(preptr!=NULL)
        {
            cout<<"element is linked"<<endl;
            Node*temp=preptr;
            Node*ad=preptr->next;
            temp->next=ad->next;
            //ad->next=NULL;
            free(ad);
        }
        else{
            cout<<"element is not linked"<<endl;
        }
        return head;

    }

};
int main()
{
    singlylinkedlist obj;
    int opt;
    do{
        cout<<"deletion of after reference node"<<endl;
        cout<<"1.appending the node"<<endl;
        cout<<"2.printing the linked list"<<endl;
        cout<<"3.deletion at referenece node"<<endl;
        cin>>opt;
        switch(opt)
        {
            case 1:
                obj.appendnode();
                break;
            case 2:
                obj.print();
                break;
            case 3:
               obj.del_ref_node();
                break;
        }
    }
    while(opt!=4);
}