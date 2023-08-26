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
        int count=0;
        if(head!=NULL)
        {
            do{
                //cout<<"print"<<endl;
                cout<<temp->data<<" ";
                temp=temp->next;
              //  cout<<"changing node"<<endl;
            }while(temp->next!=head);
        }
    }
    Node*del_at_end()
    {
        Node*temp=head;
        while(temp->next->next!=head)
        {
            temp=temp->next;
        }
        Node*ptr=temp->next;
        ptr->next=NULL;
        temp->next=head;
        free(ptr);
        return head;
    }
     Node*del_at_beg()
    {
        Node*add=head;
        head=add->next;
        add->next=NULL;
        free(add);
         cout<<"element succesfully deleted"<<endl;
    
        return head;
       
    }
    Node*del_aft_ref()
    {
        int val;
        cout<<"enter the value you want to delete after it"<<endl;
        cin>>val;
        Node*temp=NULL;
        Node*ptr=head;
        while(ptr->next!=head)
        {
            if(ptr->data==val)
            {
                temp=ptr;
            }
           ptr=ptr->next;
        }
        if(temp!=NULL)
        {
            cout<<"element is present"<<endl;
            Node*ptr=temp;
            Node*ain=ptr->next;
            Node*preptr=ain->next;
            ptr->next=preptr;

            free(ain);

        }
        else{
            cout<<"no element is present"<<endl;
        }
        return head;

    }


    
};
int main()
{
    circularlinkedlist s;
    int opt;
    do
    {
        cout<<endl;
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
                s.del_at_end();
                break;
            case 4:
                s.del_at_beg();
                break;
            case 5:
                s.del_aft_ref();
                break;
        }
        
    } while (opt!=6);
}