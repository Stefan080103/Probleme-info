#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,u,Max,Min;
    ifstream f;
    ofstream g;
    f.open("numar.txt");
    f>>n;
    f.close();
    Min=Max=n%10;
    n=n/10;
    do{
        u=n%10;
        if(u>Max)
            Max=u;
        if(u<Min)
            Min=u;
        n=n/10;
    }while(n!=0);
    g.open("max_min.txt");
    g<<Max<<endl<<Min;
    g.close();
    return 0;
}
