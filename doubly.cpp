/*#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node*prev;
    int data;
    Node*next;
    Node()
    {
        data=0;
        prev=NULL;
        next=NULL;
    }
    Node(int d)
    {
        data=d;
    }
};
class doublylinkedlist
{
    public:
    Node*head=NULL;
    Node*append()
    {
        cout<<"enter the number of elements you want to append"<<endl;
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
        cout<<"the doubly linked list is"<<" ";
        Node*ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }

    }
    void reverse()
    {
        Node*temp=NULL;
        Node*curr=head;
        while(curr!=NULL)
        {
            temp=curr->prev;
            curr->prev=curr->next;
            curr->next=temp;
            curr=curr->next;
        }
        if(temp!=NULL)
        {
          head=temp->prev;
        }
         Node* temp = NULL;
        Node* current =head;
 
     swap next and prev for all nodes of
    doubly linked list 
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
       }
 
      Before changing the head, check for the cases like
       empty list and list with only one node 
       if (temp != NULL)
        head = temp->prev;
    
    }
};
int main()
{
    doublylinkedlist s;
    cout<<"doubly linked list"<<endl;
    s.append();
    //s.print();
    s.reverse();
    s.print();
    nt opt;
    do{
        cout<<"enter the option you want to perform"<<endl;
        cout<<"1.append node"<<endl<<"2.print"<<endl<<"3.exit"<<endl;
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
                s.reverse();
                s.print();
                break;

            default:
                cout<<"enter valid option"<<endl;
            
            
        }
    }while(opt!=4);
}*/
/* C++ program to reverse a doubly linked list */

#include <bits/stdc++.h>
using namespace std;

/* Node of the doubly linked list */
class Node {
public:
	int data;
	Node* next;
	Node* prev;
};

/* Function to reverse a Doubly Linked List */
void reverse(Node** head_ref)
{
	Node* temp = NULL;
	Node* current = *head_ref;

	/* swap next and prev for all nodes of
	doubly linked list */
	while (current != NULL) {
		temp = current->prev;
		current->prev = current->next;
		current->next = temp;
		current = current->prev;
	}

	/* Before changing the head, check for the cases like
	empty list and list with only one node */
	if (temp != NULL)
		*head_ref = temp->prev;
}

/* UTILITY FUNCTIONS */
/* Function to insert a node at the
beginning of the Doubly Linked List */
void push(Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* since we are adding at the beginning,
	prev is always NULL */
	new_node->prev = NULL;

	/* link the old list of the new node */
	new_node->next = (*head_ref);

	/* change prev of head node to new node */
	if ((*head_ref) != NULL)
		(*head_ref)->prev = new_node;

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Function to print nodes in a given doubly linked list
This function is same as printList() of singly linked list
*/
void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}

// Driver's code
int main()
{
	/* Start with the empty list */
	Node* head = NULL;

	/* Let us create a sorted linked list to test the
	functions Created linked list will be 10->8->4->2 */
	push(&head, 2);
	push(&head, 4);
	push(&head, 8);
	push(&head, 10);

	cout << "Original Linked list" << endl;
	printList(head);

	// Function call
	reverse(&head);

	cout << "\nReversed Linked list" << endl;
	printList(head);

	return 0;
}

// This code is contributed by rathbhupendra

