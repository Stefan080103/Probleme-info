#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.in");


int main()
{
    int x,p=-1,u=-1,nr=0,s1,s2;

    while(f>>x){

        nr++;
        if(x>0)
            if(p==-1)
                p=nr,u=nr;
            else u=nr;
    }
    f.close();
    s1=nr-p+1;
    s2=u;
    if(s1>s2)
        cout<<s1;
    else cout<<s2;




    return 0;
}
