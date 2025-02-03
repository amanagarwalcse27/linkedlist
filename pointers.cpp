#include<bits/stdc++.h>
using namespace std;
// *ptr ko read krna h value at ptr
 

 // dataype of variable which it points * pointer_variable
int main()
{
    int a = 20;
    int *ptr ; //iska mtlb ptr toh pointer variable h which points to intdatatype
    ptr = &a; //iska mtlb ptr is holding address of a

    cout<<a<<endl; // a ki value dega

    cout<<ptr<<endl;//ptr ki value dega

    cout<<&a<<endl; //address of a dega

    cout<<&ptr<<endl; // address of ptr dega

    cout<< *ptr<<endl;  //*ptr gives value

    cout<< *(&a)<<endl; //gives value
    return 0;

}