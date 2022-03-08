#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int b,y,p,u;
    ifstream f;
    f.open("natural.txt");
    f>>b;
    f.close();
    y=0;
    p=1;
    do{
        u=b%10;
        if(u%2!=0){
            y=y+u*p;
            p=p*10;}
        b=b/10;
    }while(b!=0);
    if(p==1)
        cout<<"toate cifrele au fost pare";
    else
        cout<<y;
    return 0;
}
