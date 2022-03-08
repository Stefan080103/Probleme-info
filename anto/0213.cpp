#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, x1, d, x, x2;
    cin>>a>>b>>c;
    if(a==0){
        cout<<"ecuatie de gradul I ";
    if(b==0)
        if(c==0)
        cout<<"ecuatie nederminata(cu o infinitate de solutii)";
    else
        cout<<"ecuatie imposibila(fara solutii)";
    else
    {
        x=-c/b;
        cout<<"solutia este: "<<x;} }

    else {
        d=b*b-4*a*c;
    if(d<0)
     cout<<"nu are solutii reale";
     else{
    if (d==0){
           cout<<"solutii egale";
    x1=-b/(2*a);
    x2=-b/(2*a);
    cout<<x1<<endl<<x2;}
    else{
    x1=(-b-sqrt(d))/(2*a);
        x2=(-b+sqrt(d))/(2*a);
        cout<<x1<<endl<<x2;}}}

   return 0;
}
