#include <iostream>
#include <fstream>
using namespace std;
void div2(int a,int &nr){
    int i;
    nr=0;
    for(i=1;i<=a;i++)
        if(a%i==0)
            nr++;
    if(nr!=2)
        cout<<a<<" ";
}
int main()
{
    int n,x,i,nr;
    ifstream f("sir2.txt");
    f>>n;
    for(i=1;i<=n;i++){
        f>>x;
        div2(x,nr);
    }
    return 0;
}
