#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,s,p,k;
    ofstream g;
    cin>>x;
   s=0;
   p=1;
   k=0;
   do{
        s=s+x%10;
        p=p*(x%10);
        x=x/10;
        k++;
    }while(x!=0);
    g.open("f15.out");
    g<<s<<endl<<p<<endl<<k;
    g.close();
    return 0;
}
