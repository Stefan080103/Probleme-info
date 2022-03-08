#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
int main()
{
    long long n,i,a,b,c;
    ifstream f("1.txt");
    f>>n;
    f.close();
    clock_t timpInitial, timpFinal;
    timpInitial=clock();
    if(n==1) cout<<1;
    else if(n==2) cout<<1;
        else {a=b=1;
            for(i=3;i<=n;i++){
                c=a+b;
                a=b;b=c;
            }
        }
    timpFinal=clock();
    cout<<(double)(timpFinal - timpInitial)/CLOCKS_PER_SEC<<endl;
    cout<<c;
    return 0;
}
