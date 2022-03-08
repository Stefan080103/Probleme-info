#include <iostream>

using namespace std;
int n,i,a[11],sol[11],use[11],m;
void afis(){
    int i;
    for(i=1;i<=n;i++)
            cout<<a[sol[i]]<<" ";
    cout<<endl;
}
//permutari

void back(int k){
    int i;
    if(k>n) afis();
    else {
        for(i=1;i<=n;i++)
            if(!use[i]){
                sol[k]=i;
                use[i]=1;
                back[k+1];
                use[i]=0;
            }
    }
}
//aranj
/*
void back(int k){
    int i;
    if(k>m) afis();
    else {
        for(i=1;i<=n;i++)
        if(!use[i]){
            sol[k]=i;
            use[i]=1;
            back(k+1);
            use[i]=0;
        }
    }
}*/
int main()
{
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    back(1);
    return 0;
}
