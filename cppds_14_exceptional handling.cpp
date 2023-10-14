#include<iostream>
using namespace std;

int main()
{
    int n,d;
    cout<<"Enter numerator:"<<endl;
    cin>>n;
    cout<<"Enter denominator:"<<endl;
    cin>>d;

    try
    {
        if(d==0)
        throw("Division by 0 is not possible");
        cout<<(n/d);
    }
    catch(const char *msg)
    {
        cout<<msg;
    }

    return 0;
}
