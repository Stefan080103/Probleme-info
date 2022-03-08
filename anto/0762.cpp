#include <iostream>
using namespace std;
int main()
{
   int x, c, u, s, n;
   float m;
   cin>>x>>c;
   s=0;
   n=0;
   do{
        u=x%10;
        if(u!=c && u!=c-1 && u!=c+1){
            n++;
            s=s+u;}
        x=x/10;
   }while(x!=0);
   if(n>0){
        m=s*1.0/n;
        cout<<m;}
    else
        cout<<"numerele apartin intervalului";
    return 0;
}
