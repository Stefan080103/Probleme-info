#include <iostream>

using namespace std;

int main()
{
    int a, b, c, Min;
    cout<<"a este egal cu "; cin>>a;
    cout<<"b este egal cu "; cin>>b;
    cout<<"c este egal cu "; cin>>c;
    a<1000;
    b<1000;
    c<1000;
    Min=a;
    if(b<Min)
        Min=b;
    else
        Min=c;
    if(Min==a)
        if(b<c)
        cout<<"ABC traseul scurt";
        else
        cout<<"BAC traseul scurt";
    else
        if(Min==b)
           if(a<c)
           cout<<"CBA traseul scurt";
           else
            cout<<"BCA traseul scurt";
        else
            if(a<b)
            cout<<"CAB traseul scurt";
            else
             cout<<"ACB traseul scurt";
    return 0;
}
