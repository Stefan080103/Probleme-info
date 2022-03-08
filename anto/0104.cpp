#include <iostream>

using namespace std;

int main()
{
   float a, b, c, Max, A;
   cout<<"a este egal cu"; cin>>a;
   cout<<"b este egal cu"; cin>>b;
   cout<<"c este egal cu "; cin>>c;
   a>0;
   b>0;
   c>0;
   Max=a;
   if(b>Max)
    Max=b;
   else
    Max=c;
    if(Max==a)
         a*a==b*b+c*c;
    else
        if(Max==b)
           b*b==a*a+c*c;
        else
           c*c==b*b+a*a;
    if (a*a==b*b+c*c){
        cout<<"a,b,c laturile unui triunghi dreptunghic";
        A=b*c/2;
        }
    else
        if(b*b==a*a+c*c){
        cout<<"a,b,c sunt laturile unui triunghi dreptunghic";
        A=a*c/2;
       }
        else
            if(c*c==b*b+a*a){
            cout<<"a,b,c laturile unui triunghi dreptunghic";
            A=b*a/2;
            }
            else
            cout<<"a,b,c nu sunt laturile unui triunghi dreptunghic";
    cout<<"A este egal cu"<<A;

    return 0;
}
