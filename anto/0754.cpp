#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,s,p;
    ifstream f;
    ofstream g;
    f.open("numar.txt");
    f>>x;
    f.close();
   s=0;
   p=1;
   do{
        s=s+x%10;
        p=p*(x%10);
        x=x/10;
    }while(x!=0);
    g.open("sp.txt");
    g<<s<<endl<<p;
    g.close();
    return 0;
}
