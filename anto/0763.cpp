#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int u, m , n, p, s,t;
    ifstream f;
    f.open("f28.txt");
    f>>n>>m;
    f.close();
    s=0;
    p=1;
    do{
        u=n%10;
        if(u%2!=0)
            s=s+u;
        n=n/10;
    }while(n!=0);
    do{
        t=m%10;
        if(t%2==0)
            p=p*t;
        m=m/10;
    }while(m!=0);
    cout<<s<<endl<<p;
    return 0;
}
