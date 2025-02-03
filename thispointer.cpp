#include<bits/stdc++.h>
using namespace std;

class test
{
    int a,b;

    public:

    void show()
    {
        a = 10;
        b = 20;

        cout<<"Object address ="<<this<<endl; //current object address ko print krega
        cout<<" a ="<<this->a<<endl; //value a ki using this
        cout<<" b ="<<this->b<<endl;  //value b ki using this

    }
};
int main()
{
    test t; //object created so memory allocates
    t.show();
    return 0;
}