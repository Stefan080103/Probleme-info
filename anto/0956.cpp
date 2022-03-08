#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int q, u, n, Max;
    ifstream f;
    ofstream g;
    f.open("numar.txt");
    f>>q;
    f.close();
    Max=-1;
    do{
        u=q%10;
        if(u>Max){
            Max=u;
            n=1;
        }
        else
            if(u==Max)
                n++;
        q=q/10;
    }while(q!=0);
    g.open("f29.out");
    g<<Max<<"  "<<n;
    g.close();
    return 0;
}

