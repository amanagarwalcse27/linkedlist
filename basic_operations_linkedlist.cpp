//already some nodes already present

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


void addafter(int x)
{
    Node *temp = new Node(x);
    Node *temp2 =head;
    int loc;
    int len = length();
    cout<<"ENTER VALID LOCATION"<<endl;
    cin>>loc;
    if( loc > len+1)
    {
        cout<<"location invalid"<<endl;
    }
    else if(loc == 1)
    {
        insertatbegin(x);
    }
    else
    {
        int i = 1;
        while(i < loc-1)
        {
            temp2 = temp2->next;
            i++;
        }
        temp ->next = temp2 ->next; //right connection first
        temp2 ->next = temp; //left connection first
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
  append(1);
  append(2);
  append(3);
  append(4);
  append(5);

  // Print the linked list
  cout << "Linked List: ";
  printlist();

  // Find and print the length of the linked list
  cout << "Length of Linked List: " <<length() << endl;

  // Insert at the beginning
  insertatbegin(10);
  cout << "Linked List after inserting at the beginning: ";
  printlist();

  // Add after a specific location
  addafter(20);
  cout << "Linked List after adding after a specific location: ";
  printlist();

  return 0;
}



