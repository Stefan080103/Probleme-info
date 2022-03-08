#include <iostream>
using namespace std;


int a[101][101];

int main(){
int n;
cin>>n;
int i,j,ok=1;
///citire
for(i=1; i<=n; i++)
    for(j=1; j<=n; j++)
        cin>>a[i][j];
///verificare DP
for(i=1; i<=n && ok==1; i++)
    if(a[i][i]!=0)
        ok=0;

///verificare  simetrie si domeniu de valori
for(i=1; i<=n && ok==1; i++)
    for(j=1; j<=n; j++)
        if(a[i][j]==0 || a[i][j]==1)
            if(a[i][j]!=a[j][i]){
                 ok=0;
                 break;
            }

            else;
        else{
            ok=0;
            break;
        }


cout<<ok;

return 0;
}
