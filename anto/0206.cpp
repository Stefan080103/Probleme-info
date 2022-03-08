#include <iostream>

using namespace std;

int main()
{
    float a, b, x;
    int k;
    cout<<"numarul a este egal cu "; cin>>a;
    cout<<"numarul b este egal cu "; cin>>b;
    x=0;
    if(a>b){
        x=a;
        k=1;
    }
    else
        if (a==b){
            x=a;
            k=2;
        }
        else{
            x=b;
            k=1;
        }
    cout<<"x este egal cu  "<<x;

    cout<<"k este egal cu  "<<k;
    return 0;
}
