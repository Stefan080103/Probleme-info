#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a, u, n, Max;
    ofstream g;
    cin>>a;
    Max=-1;
    do{
        u=a%10;
        if(u>Max){
            Max=u;
            n=1;
        }
        else
            if(u==Max)
                n++;
        a=a/10;
    }while(a!=0);
    g.open("maxim.txt");
    g<<Max<<"  "<<n;
    g.close();
    return 0;
}

