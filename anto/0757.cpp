#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int b,p,Min,u,Max;
    ifstream f;
    ofstream g;
    f.open("numar.txt");
    f>>b;
    f.close();
   p=1;
   Min=b%10;
   Max=b%10;
   do{
        u=b/10%10;
        p=p*(b%10);
        if(Min>u && u!=0 )
            Min=u;
        b=b/10;
        if(Max<u)
            Max=u;
    }while(b!=0);
    g.open("f16.out");
    g<<p<<endl<<Min<<endl<<Max;
    g.close();
    return 0;
}
