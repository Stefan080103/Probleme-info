#include <iostream>

using namespace std;

int main()
{
   int x, nr, s;
   cin>>x;
   nr=0; s=0;
   while(x%2==0){
    nr=nr+1;
    s=s+x;
   cin>>x;
   }
   cout<<nr;
   if(nr==0)
   cout<<"nu exista";
   else
   cout<<s;
    return 0;
}
