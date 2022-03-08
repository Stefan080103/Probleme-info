#include <iostream>

using namespace std;

int main()
{
    int a,b,x, sol;
    cout<<"x apartine numerelor naturale nenule";
   cin>>x;
   b=1;
   do{
    b=b*2;
   } while(b<=x);
   a=b/2;
   if(x-a<=b-x)
    sol=a;
   else
    sol=b;
   cout<<sol;

}
