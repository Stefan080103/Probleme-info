#include <iostream>
using namespace std;
int n,x[21];
void solutie(){
    int i;
    for (i=1;i<=n;i++)
        if(x[i]==1) cout<<".";
        else cout<<"-";
    cout<<endl;
}
void backt(){
    int k=2;
    x[k]=0;
    while(k>=2)
        if(x[k]<2){
            x[k]=x[k]+1;
            if(k==n-1)
                solutie();
            else x[++k]=0;
        }else k--;
}
int main()
{
    cin>>n;
    x[1]=x[n]=1;
    backt();
    return 0;
}
