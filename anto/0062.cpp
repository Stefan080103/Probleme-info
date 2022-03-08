#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

ifstream f("bac.in");


int main(){
    int x,l=0,p=0,u=0;

    while(f>>x){
        l++;
        if(x<0)
            if(p==0)
                p=l;
            else u=l;

    }

    if(u>l-p+1)
        cout<<u;
    else cout<<l-p+1;


return 0;
}
