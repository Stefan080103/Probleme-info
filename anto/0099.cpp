#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout<<"primul numar este "; cin>>a;
    cout<<"al doilea numar este "; cin>>b;
    if(b==a+1){
        cout<<"a,b consecutive"<<endl;}
    else
        cout<<"a,b nu sunt consecutive"<<endl;
    return 0;
}
