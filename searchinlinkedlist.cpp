#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
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
    void insert(Node* n)
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
    }
    void print(Node*n)
    {
        Node*ptr;
        ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
    Node*searchelement(Node*n,int val)
    {
        Node*temp=NULL;
        Node*ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->data==val)
            {
                temp=ptr;
            }
            ptr=ptr->next;
        }
        return temp;
    }
};
int main()
{
    singlylinkedlist obj;
    int opt;
    do
    {
        cout<<endl;
        cout<<"inserting and searching an element in linkedlist"<<endl;
        cout<<"1.inserting the element in linked list"<<endl;
        cout<<"2.printing the list"<<endl;
        cout<<"3.searching element in list"<<endl;
        cout<<"enter the option to perform"<<endl;
        cin>>opt;
        Node* n=new Node();
        switch(opt)
        {
            
                case 1:
                   cout<<"enter the number you want to insert"<<endl;
                   int num;
                   cin>>num;
                   n->data=num;
                   n->next=NULL;
                   obj.insert(n);
                   break;
                case 2:
                     cout<<"printing the list"<<endl;
                     obj.print(n);
                     break;
                case 3:
                   cout<<"searching an element"<<endl;
                   int val;
                   cin>>val;
                   cout<<"enter the value you want to search"<<endl;
                   Node*search=NULL;
                   search=obj.searchelement(n,val);
                   if(search!=NULL)
                   {
                    cout<<"element"<<num<<"at"<<search<<endl;
                   }
                   else{
                    cout<<"element not found"<<endl;
            
                   }



        }

            

        

    } 
    while (opt!=4);
    

}