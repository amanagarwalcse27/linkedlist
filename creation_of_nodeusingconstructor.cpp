#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    int *link; //link ya next kuch bhi le skte h 

    Node(int data) //using constructor
    {
        this->data = data;
        this->link = NULL;
    }

};

int main()
{
    //newly created node ka address head  me store krenge
    //head bhi le skte h  ya root bhi
    Node  *head = new Node(10); //memory is allocated to newly created Dynamic node whose address is stored in pointer variable
    
    

    return 0;


}
