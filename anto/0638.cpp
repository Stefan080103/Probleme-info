#include <iostream>

using namespace std;
int numarare(int a,int b){
    int i,j,nr=0,n=0;
    for(i=a;i<=b;i++){
        for(j=1;j<=i;j++)
            if(i%j==0)
                nr++;
        if(nr==3) n++;
    }
    return n;
}
int main()
{
    int a, b;
    cin>>a>>b;
    cout << numarare(a,b);
    return 0;
}
