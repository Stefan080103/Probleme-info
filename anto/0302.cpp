#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int d,s,nr,x;
    //citire date de intrare
    ifstream f;
    ofstream g;
    f.open("bilet12.txt");
    f>>x;
    f.close();
    d=2; s=0; nr=0;
    while(x>1){
        if(x%d==0){
            s=s+d;
            nr++;
        }
        while(x%d==0)
            x=x/d;
        d++;
    }
    if(nr==0)
        cout<<"nu exista";
    else{
        g.open("bilet12.out");
        g<<s*1.0/nr;
        g.close();
        }
    return 0;
}
