#include <iostream>
using namespace std;
int main()
{
   int x,u,o,p,y;
   cout<<"numar natural="; cin>>x;
   p=1;
   o=0;
   y=0;
   do{
        u=u%10;
        if(u%2==0){
            o=o*10+u;
            y=y+p*u;
            p=p*10;}
        x=x/10;
   }while(x!=0);
   if(p==1)
        cout<<"nu exista cifre pare";
   else
        if(o==y)
            cout<<"da";
        else
            cout<<"nu";
    return 0;
}
