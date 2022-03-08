#include <iostream>
using namespace std;



int factori(int n, int m){

    int nr=0,d=2,p1=0,p2;

    while(d*d<=n){

        p1=0,p2=0;
        while(n%d==0)
            n=n/d,p1++;
        while(m%d==0)
            m=m/d,p2++;
        if(p1==p2)
            if(p1!=0)
                nr++;
        d++;

    }
    p2=0;
    if(n>1)
    {
        p1=1;
        while(m%n==0)
            m=m/n,p2++;
        if(p1==p2)
            nr++;
    }
    return nr;
}

int main()
{
    cout<<factori(1,1);



    return 0;

}
