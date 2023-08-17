//not dumped
#include<iostream>
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
        cout<<"enter the value "<<endl;
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
    Node*del_at_end()
    {
        Node*ptr=head;
        while(ptr->next->next!=NULL)
        {
            ptr=ptr->next;
        }
        Node*temp=ptr->next;
        ptr->next=NULL;
        free(temp);
        return head;
    }

};
int main()
{
    singlylinkedlist s;
    int opt;
    do{
        cout<<"linkedlist deletion at end operation "<<endl;
        cout<<"1.append node"<<endl;
        cout<<"2.print"<<endl;
        cout<<"3.deletion at end;"<<endl;
        cout<<"enter the option te opertion"<<endl;
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
                s.del_at_end();
                break;
        }


    }
    while(opt!=4);

}