#include <iostream>
using namespace std;

long long int n,i,i1,n1,i2;
int bad, sol;

int main(){

n=123;
/*for(i=1; i<=n; i++){
    n1=n;

    i1=i;
    i2=i;
    bad=0;
    while(i1>0 && bad==0){
        while(n1>0 && (n1-i1)%10!=0)
            n1=n1/10;
        if(n1==0)
            bad=1;
        else {
            n1=n1/10;
            i1=i1/10;
        }
    }

    if(bad==0){
                cout<<i2<<' ';
        sol++;
    }
}

cout<<endl<<sol;*/
cout<<8191%107;
return 0;
}
