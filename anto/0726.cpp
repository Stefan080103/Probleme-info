#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a,b,u,c,p;
    bool v;
    float Max;
    ifstream f;
    f.open("numere3.txt");
    f>>a>>b;
    f.close();
    Max=-1;
    do{
        u=b%10;
        if(u>Max)
            Max=u;
    }while(b!=0);
    p=1;
    v=0;
    do{
        c=a%10;
        if(c==Max){
            p=p*c;
            v=1;}
        a=a/10;
    }while(a!=0);
    if(v==1)
        cout<<"nu avem solutie";
    else
        cout<<p;
    return 0;
}
