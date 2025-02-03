#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;

  // Constructor to initialize a new node with given data
  Node(int x)
  {
    data = x;
    next = NULL;
  }
};

// Global variable to store the head of the linked list
Node *head = NULL;

void insertatbegin(int x)
{
    Node *temp = new Node(x);
        
        //checking head value
        if(head == NULL) //if head is null no node present intially
        {
            head = temp;
        }

        else //linked list exit krti h
        {
            temp -> next = head;
            head = temp;
            
        }
}

// Function to append a new node to the end of the linked list
void append(int x)
{
  // Create a new node with given data
  Node *temp = new Node(x);
  
  // If the linked list is empty, set the new node as the head
  if (head == NULL)
  {
    head = temp;
  }

  else
  {
    // Traverse the linked list to find the last node using temporary pointer
    Node *temp2 = head;
    while(temp2 -> next != NULL)
    {
       temp2 = temp2 -> next;
    }
    // Set the next pointer of the last node to the new node
    temp2 -> next = temp;
  }
}

int length()
{

  int count= 0;
  Node *temp = head;
  while(temp != NULL)
  {
    count++;
    temp = temp->next;
  }
  return count;
}

void deletion(int x )
{

if(x == 1) //first node to be deleted
        {
          Node *temp1 = head;
          head = temp1 -> next;//removing left connection
          temp1->next = NULL;//removing right connection of delted node
          delete temp1; //deleallocates the memory to that node
          
        }
        
        else //other than first node 
        { 
            int i =1; //requied to travel to previous node of deleted
            Node *temp2 = head; //temp2 delewted ke previous ko point krna chahiye
            while(i < x-1)
            {
                temp2 = temp2->next; //deleted node ke phle tk jaana h 
                i++;
                
            }
            Node*temp3 = temp2->next; //temp3 jisko delete kr rhe h usko point krna chahaiye
            temp2->next = temp3->next;//removing left connection
            temp3->next = NULL; //removing right connection of deleted
            delete temp3; //deallocates the memory 
        }
        
}
void printlist()
{
    Node *temp = head;
      if(temp == NULL)
      {
        cout<<"No node in list"<<endl;
      }
    else
    {
       while(temp)
       {
        cout<<temp->data<<" ";
        temp = temp->next;
       }
       cout<<endl;
    }
}
    
  int main()
  {
    // Append nodes to the linked list
  append(10);
  append(5);
  append(12);
  append(20);
  append(8);

  // Print the linked list
  cout << "Linked List: ";
  printlist();

  // Find and print the length of the linked list
  cout << "Length of Linked List: " <<length() << endl;

//Delete a node at specific position"
cout<<"enter deleting position"<<endl;
int x;
cin>>x;
deletion(x);

 cout << "Linked List after deleting at a specific position: ";
  printlist();

  return 0;
}