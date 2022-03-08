#include <iostream>

using namespace std;
int n,m,x[15];
void afisare (){
    int i;
    for (i=1;i<=m;i++)
        cout<<x[i]<<' ';
    cout<<endl;
}
int valid (int k){
    int i;
    for (i=1;i<k;i++)
        if (x[i]==x[k])
            return 0;
    return 1;
}
void aranjamente (){
    int k=1;
    x[k]=n+1;
    while (k>0)
        if (x[k]>1){
            x[k]--;
            if (valid (k))
                if (k==m)
                    afisare ();
            else {
                k++; x[k]=n+1;
            }
    }
        else k--;
}
int main()
{
    cin>>n>>m;
    aranjamente();
    return 0;
}
