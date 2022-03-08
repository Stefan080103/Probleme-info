#include <iostream>
#include <fstream>
using namespace std;
int a[30000];
int main()
{
    int m ,n ,p ,x ,d ,i ,ok=1;
    ifstream f("seminte.in");
    f>>m>>n;
    for(i=1;i<=n;i++){
        f>>x;
        //descompun x in factori
        d=2;
        while(x>1){
            p=0;
            while(x%d==0){
                p++;
                x=x/d;
            }
            if(p>0)
                a[d]=a[d]+p;
            d++;
        }
    }
    f.close();
    for(i=2;i<=29999;i++)
        if(a[i]%m!=0){
            ok=0;
            break;
        }
    ofstream g("seminte.out");
    g<<ok;
    if(ok==1){
        g<<endl;
        for(i=2;i<=29999;i++)
            if(a[i]>0)
                g<<i<<' '<<a[i]<<endl;
    }
    g.close();
    return 0;
}
