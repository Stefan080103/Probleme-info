#include <iostream>
#include <fstream>
using namespace std;
//declaratii subprograme utile
int oglindit(int);
int PalindromInterval(int,int);
//functia principala
int main()
{
    int a,b,nr,Max=0;
    ifstream f("fis3.txt");
    while(f>>a>>b){
        nr=PalindromInterval(a,b);
        if(nr>Max)
            Max=nr;
    }
    f.close();
    cout<<Max;
    return 0;
}
//subprogramele utile
int oglindit(int x){
    int o=0;
    while(x!=0){
        o=o*10+x%10;
        x=x/10;
    }
    return o;
}
int PalindromInterval(int a,int b){
    int nr=0;
    for(int i=a;i<=b;i++)
        if(i==oglindit(i))
            nr++;
    return nr;
}
