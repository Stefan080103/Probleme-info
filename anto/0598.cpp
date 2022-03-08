#include <iostream>
#include <fstream>
using namespace std;
int a[10];
int main()
{
    int n,k=0,x;
    ifstream f("bac.txt");
    f>>n;
    while(f>>x){
        k=0;
        while(x){
            k++;
            x=x/2;
        }
        a[k-1]++;
    }
    f.close();
    int s=0,j,i;
    x=1;
    for(i=9;i>=0;i--)
    {
        s=s+a[i];
        if(n<=s) {
            for(j=1;j<=i;j++)
                x=x*2;
            cout<<x;
            break;
        }
    }
    if(s<n) cout<<"nu exista";
    return 0;
}
