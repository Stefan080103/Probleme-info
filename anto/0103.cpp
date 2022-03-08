#include <iostream>

using namespace std;

int main()
{
int x;
cout<<"x este egal cu "; cin>>x;
x<1000;
if(x/100<x/10%10 && x/100<x%10)
    x=x%100;
else
    if(x/10%10<x/100 && x/10%10<x%10)
        x=(x-x%100)/10+x%10;
    else
        x=x/10;
cout<<"valoarea maxima este "<<x;
    return 0;
}
