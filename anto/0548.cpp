#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

int main()
{
    int n,x,i,M1,M2;
    M1=M2=INT_MAX;
    ifstream f("bac.txt");\
    f>>n;
    for(i=1;i<=n/2;i++){
        f>>x;
        if(x<M1) M2=M1,M1=x;
        else if(x<M2 && x!=M1) M2=x;
    }
    f>>x;
    f.close();
    if(M1>x) cout<<M1;
    else if(M2>x && M2!=INT_MAX) cout<<M2;
        else cout<<"nu exista";
    return 0;
}
