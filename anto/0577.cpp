#include <iostream>

using namespace std;
int a[10];
void cifre(int n){
    int i;
    while(n){
        a[n%10]=1;
        n=n/10;
    }
    for(i=0;i<=9;i++)
        if(a[i]==1) cout<<i<<" ";
}
int main()
{
    int n;
    cin>>n;
    cifre(n);
    return 0;
}
