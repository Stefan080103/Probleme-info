#include <iostream>
using namespace std;
int x[15],n;
int valid (int k){
    int i;
    for (i=1;i<k;i++)
        if (x[i]==x[k])
            return 0;
    return 1;
}
void solutie (int k){
    int i;
    for (i=1;i<=k;i++)
        cout<<x[i]<<' ';
    cout<<endl;
}
void backtracking (){
    int k=1;
    x[k]=n+1;
    while (k>0)
        if (x[k]>1){
            x[k]--;
            if (valid (k))
                if (k==n)
                    solutie(k);
                else x[++k]=n+1;
        }
        else { k--;solutie(k);}
}
int main()
{
    cin>>n;
    backtracking();
    return 0;
}
