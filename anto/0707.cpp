#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a,y,p,u;
    ifstream f;
    f.open("natural.txt");
    f>>a;
    f.close();
    y=0;
    p=1;
    do{
        u=a%10;
        if(u%2==0){
            y=y+u*p;
            p=p*10;}
        a=a/10;
    }while(a!=0);
    if(p==1)
        cout<<"toate cifrele au fost impare";
    else
        cout<<y;
    return 0;
}
