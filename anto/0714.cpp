 #include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,a,b,k,p,z;
    ifstream f;
    f.open("date.txt");
    f>>x>>a>>b;
    f.close();
    p=a*10+b;
    k=0;
    while(x>9){
        z=x%100;
        if(z==p){
            k=1; break;
        }
        x=x/100;
    }
    cout<<k;
    return 0;
}
