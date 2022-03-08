#include <iostream>
using namespace std;
int main()
{
   int n,x,y,p,z,u;
   cin>>n>>x>>y;
   z=0;
   p=1;
   do{
        u=n%10;
        if(x==u)
            u=y;
        z=z+u*p;
        p=p*10;
        n=n/10;
   }while(n!=0);
   cout<<z;
    return 0;
}
