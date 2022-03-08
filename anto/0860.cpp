#include <iostream>

using namespace std;
int n, x[50];
int valid(int k){
    int i;
    for(i=1;i<k;i++)
        if(x[k]==x[i])
            return 0;
    return 1;
}
void solutie(int k){
    int i;
    for(i=1;i<=k;i++)
        cout<<x[i]<<" ";
    cout<<endl;
}
void backt(){
    int k=1;
    x[k]=0;
    while(k>=0)
        if(x[k]<n){
            x[k]=x[k]+1;
            if(valid(x[k]))
                if(k==n)
                    solutie(k);
                else {k++; x[k]=0;}
        }else k--;
}
int main()
{
    cin>>n;
    backt();
    return 0;
}
