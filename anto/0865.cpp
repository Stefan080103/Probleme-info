#include <iostream>
using namespace std;
int n, x[50],nr;
void solutie(){
    int i;
    for(i=1;i<=n;i++)
        cout<<x[i];
    cout<<endl;
    nr++;
}
int valid(int k){
    if(k<=2) return 1;
    else if(x[k]%2==0)
                if(x[k-1]%2==1 || x[k-2]%2==1)
                    return 1;
                else return 0;
         else if(x[k-1]%2==0 || x[k-2]%2==0)
                                 return 1;
                else return 0;
}
void backt(){
    int k=1;
    x[k]=0;
    while(k>=1)
        if(x[k]<9){
            x[k]++;
            if(valid(k))
                if(k==n)
                    solutie();
                else x[++k]=-1;
        }else k--;
}
int main()
{
    cin>>n;
    backt();
    cout<<nr;
    return 0;
}
