#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,a,i;
    cin>>n;
    ofstream g("bac.out");
    if(n%2) {a=n/2;
        g<<a+1<<" ";
         for(i=a;i>=1;i--)
                g<<-i<<" "<<i<<" ";
    }

    else {
            a=n/2;
            for(i=a;i>=1;i--)
                g<<-i<<" "<<i<<" ";
        }
    g.close();
    return 0;
}
