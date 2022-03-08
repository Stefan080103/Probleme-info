#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,x,i,M1=0,M2=0,M3=0;
    ifstream f("bac.in");
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        if(x%10==5)
            if(x>M1) M3=M2,M2=M1,M1=x;
            else
                if(x>M2) M3=M2,M2=x;
                else if(x>M3) M3=x;
    }
    f.close();
    cout<<M3<<" "<<M2<<" "<<M1;
    return 0;
}
