#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a,x;
    ifstream f("bac.in");
    while(f>>x){
        a=x;
        while(a>9)
            a=a/10;
        if(a%2==0){
            cout<<x;break;
        }
    }
    f.close();
    if(a%2!=0) cout<<"nu exista";
    return 0;
}
