#include<bits/stdc++.h>
using namespace std;
//method 1 using count of nodes
int getMiddle(Node* head)
    {
        int count =0;
        
        Node *temp2 = head;
        while(temp2!=NULL) //first find total nodes
        {
            count++;
             temp2 = temp2->next;
        } 
        temp2 = head;
        int i = 1;
        while( i < (count/2) + 1) //loop chalna h jb tk hm usko point n kre
        {
            temp2 = temp2->next;
            i++;
        }
         return temp2->data;

    }

    //method2 using slow and fast pointer
 ListNode* middleNode(ListNode* head)
     {
       //using fast and slow pointer
        
        ListNode *fast = head; 
        ListNode *slow = head;
        while(fast!=NULL && fast ->next!=NULL )
        {
            
             slow = slow->next;
             fast =  fast->next->next;
        }
        return slow;
     } 