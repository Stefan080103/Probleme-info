#include <iostream>
#include <fstream>
using namespace std;
int a[100];

int main()
{
    int x,i,Max;
    ifstream f("bac.txt");
    while(f>>x)
            while(x>9){
                a[x%100]++;
                x=x/10;
            }
    f.close();
    Max=a[10];
    for(i=11;i<=99;i++)
        if(a[i]>Max) Max=a[i];
    for(i=10;i<=99;i++)
        if(a[i]==Max)
            cout<<i<<" ";
    return 0;
}
