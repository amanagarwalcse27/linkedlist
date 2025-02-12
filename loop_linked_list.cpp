//op exist if last node connnect to any previous node instead of null
#include<bits/stdc++.h>
using namespace std;

//method1 using unorder map
//key pointer(address) hoga 
//if key exist krta hoga if(m[key] == 1) hoga for that address 

 bool detectloop( Node *head)
 {
    unordered_map<Node * ,bool> mp;
    Node *temp = head;
    while(temp)
    {
        if(mp[temp] == 1)
        return 1;

        else
        {
            mp[temp] == 1;
            temp = temp->next;

        }
    }
    return 0; //agr loop fail ho jaayega toh
 }

 //method2 using fast and slow pointer
 bool detectloop1( Node *head)
 {
    Node *slow = head;
    Node *fast = head;
    int loop = 0; 

    while(fast && fast->next) //loop break tb hoga jb ya toh mil jaaye loop ya single linked list ho
    {
        slow = slow ->next;  //slow 1 step move krega
        fast = fast->next->next; //fast 2step move krega

        if(slow == fast) //slow and fast milenge agr loop hoga toh
        {
            loop++;
            break;
        }
    }
    return  loop;   //agr loop break ho jaaye
 }
 
//length of loop
int count_loop_nodes(Node *head)
{
        //first detection of loop
        Node *slow = head;
        Node *fast = head;
        int loop = 0;
        
        while(fast && fast-> next)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(fast == slow)
            {
                loop++;
                break;
            }
        }
        
        if(loop == 0)
        {
            return 0;
        }
        else
        {
            slow = slow->next; //slow ko ek kdam bdhao then traverse loop linked list using slow 
            int count = 1;
            while(fast != slow)
            {
               count++;  
                slow = slow->next;    
            }
            return count;
            
        }
}
