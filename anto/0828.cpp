#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,x,m1,m2;
    m1=m2=0;
    ifstream f("bac.in");
    f>>n;
    for(int i=1;i<=n;i++){
        f>>x;
        if(x%10==5)
            if(x>m1) m2=m1,m1=x;
            else
                if (x>m2) m2=x;
    }
    f.close();
    cout<<m2<<" "<<m1;
    return 0;
}
