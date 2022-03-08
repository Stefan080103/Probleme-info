#include <iostream>
#include <fstream>
#include <climits>
using namespace std;



int main(){
    int a,b,c,varf=-1,diferenta,dif_Min=INT_MAX;

    ifstream f("bac.in");

    f>>a>>b;
    while(f>>c){
        diferenta=a-c;
        if(diferenta<0)
            diferenta=diferenta*(-1);
        if(b>c && b>a)
            if(diferenta<dif_Min){
                dif_Min=diferenta;
                varf=b;
            }
            else if(diferenta==dif_Min)
                    if(b>varf)
                        varf=b;

        a=b;
        b=c;

    }

    f.close();

    if(varf==-1)
        cout<<"nu exista";
    else cout<<varf;



return 0;
}
