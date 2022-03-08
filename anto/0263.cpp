#include <iostream>
using namespace std;
int main()
{
   int n,i,x,nr=0;
   cin>>n;
   for(i=2;i<=n;i++){
        cin>>x;
        while(x>9)
            x=x/10;
        if(x%2==0)
            nr++;
   }
   cout<<nr;
    return 0;
}
