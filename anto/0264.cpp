#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a,x,o;
    ifstream f("bac.in");
    while(f>>x){
        a=x;o=0;
        while(a>0){
            o=o*10+a%10;
            a=a/10;
        }
        if(o==x){
            cout<<x;break;
        }
    }
    if(o!=x) cout<<"nu exista";
    return 0;
}
