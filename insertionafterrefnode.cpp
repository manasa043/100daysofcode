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
    
    Node*appendnode(Node*n)
    {
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
        return n;
    }
    Node*searchelement(Node* n,int key)
    {
        Node*ptr=head;
        Node*temp=NULL;

        while(ptr!=NULL)
        {
            if(ptr->data==key)
            {
                temp=ptr;
            }
            ptr=ptr->next;
        }
        return temp;
    }
    Node*aftnode(Node*n,Node*search)
    {
      Node*ptr=search;
      Node*temp=ptr->next;
      ptr->next=n;
      n->next=temp;
      return n;
      
    }
    void print()
    {
        if(head==NULL)
        {
            cout<<"no element is present"<<endl;
        }
        else{
        Node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        }
    }

};
int main()
{
    singlylinkedlist s;
    int opt;
    do{
        cout<<"linkedlist actions"<<endl;
        cout<<"select option to perform"<<endl;
        cout<<"1.appendnode"<<endl;
        cout<<"2.insert after node"<<endl;
        cout<<"3.print"<<endl;
        cin>>opt;
        Node*search=NULL;
        Node* n1=new Node();
        int num;
        switch(opt)
        {
        case 1:
           cout<<"appending node"<<endl;
           cout<<"enter the number to insert"<<endl;
           cin>>num;
           n1->data=num;
           n1->next=NULL;
           s.appendnode(n1);
           
        
            break;
        case 2:
           cout<<"enter the reference node after you want to insert"<<endl;
           int val;
           cin>>val;
           cout<<"enter th value you want to insert"<<endl;
           cin>>num;
           n1->data=num;
           n1->next=NULL;
           search=s.searchelement(n1,val);
           if(search!=NULL)
           {
                cout<<"element is present"<<endl;
                 s.aftnode(n1,search);

           }
           else
           {
            cout<<"no element present no opertatiojns are performed"<<endl;
           }

          
           break;
         case 3:
           cout<<"printing the list"<<endl;
           s.print();
           break;

             

        
        default:
            break;
        }

    }
    while(opt!=4);

}