#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    int *link;

   /* Node(int data) //using constructor
    {
        this->data = data;
        this->link = NULL;
    }*/

};

int main()
{
    //newly created node ka address head ya root me store krenge
    Node  *head = new Node(); //memory is allocated to newly created Dynamic node whose address is stored in pointer variable
    
    cout<<head<<endl; //new  Node() se address milega jisse hm node1 me store kr rhe h
    
    cout<< head -> data<<endl;
    cout<< head -> link<<endl;

    return 0;


}
