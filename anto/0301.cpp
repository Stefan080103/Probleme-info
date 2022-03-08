#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a,u,y,p;
    ifstream f;
    f.open("numar.txt");
    f>>a;
    f.close();
    y=0; p=1;
    do{
        u=a%10;
        if(u!=7){
            y=y+u*p;
            p=p*10;}
        a=a/10;
    }while(a!=0);
    cout<<y;
    return 0;
}
