#include <iostream>
#include <fstream>
using namespace std;
int a[100];
//construire vector aparitii
void citire(int &Max){
    int x,y;
    Max=0;
    ifstream f("bac.txt");
    while(f>>x)
        while(x>9)
        {
            y=x%100;
            a[y]++;
            if(a[y]>Max) Max=a[y];
            x=x/10;
        }
    f.close();
}
int main()
{
    int Max;
    citire(Max);
    for(int i=10;i<=99;i++)
        if(a[i]==Max) cout<<i<<" ";
    return 0;
}
