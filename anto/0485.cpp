#include <iostream>
#include <fstream>
using namespace std;
void maxim(int b,int &a){
    int f=2;
    while(b>1){
        while(b%f==0) b=b/f;
        f++;
    }
    a=f-1;
}
int main()
{
    int n,x,i,Max=0,F;
    ifstream f("f4.txt");
    f>>n;
    for(i=1;i<=n;i++){
        f>>x;
        maxim(x,F);
        if(F>Max) Max=F;
    }
    f.close();
    if(Max==1) cout<<"nu exista numere cu factori primi";
    else cout<<Max;
    return 0;
}
