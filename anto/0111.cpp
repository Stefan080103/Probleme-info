#include <iostream>

using namespace std;

int main()
{
    float f, x;
    cout<<"x este egal cu "; cin>>x;
    if(x<0) {
        f=x;
        cout<<"f este egal cu "<<f;}
    else
        if(x<5){
        f=x*x;
        cout<<"f este egal cu "<<f;}
        else
            if(x<=10){
                f=x+1;
                cout<<"f este egal cu "<<f;}
            else
                cout<<"imposibil " ;
    return 0;
}
