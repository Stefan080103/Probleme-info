#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,u,y,p;
    ifstream f;
    f.open("numar.txt");
    f>>x;
    f.close();
    y=0;
    p=1;
    do{
        u=x%10;
        if(u%3!=0){
            y=y+u*p;
            p=p*10;}
        x=x/10;
    }while(x!=0);
    cout<<y;
    return 0;
}
