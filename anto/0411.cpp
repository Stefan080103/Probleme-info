#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"x,y numere naturale nenule="; cin>>x>>y;
    do{
        if(x>y)
            x=x-y;
        else
            y=y-x;
    }while(x!=y);
    cout<<"cel mai mare divizor esteb egal cu:"<<y;
    return 0;
}
