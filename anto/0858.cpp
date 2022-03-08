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
    while(k>0)
        if(x[k]<n){
            x[k]++;
            if(valid(k))
                if(k==m)
                    solutie(k);
                else x[++k]=0;
        }else k--;
}
void invers (){
    int k=1;
    x[k]=n+1;
    while (k>0)
        if (x[k]>1){
            x[k]--;
            if (valid (k))
                if (k==m)
                   solutie(k);
                else {
                    k++; x[k]=n+1;
                }
    }
        else
            k--;

}
int main()
{
    cin>>n;
    /*for(m=1;m<=n;m++)
        backt();
    */
    for(m=n;m>=1;m--)
        backt();
    return 0;
}
