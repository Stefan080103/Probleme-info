#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.txt");

int main (){
    int x=-1, l=-1, lmax=-1,nr=-1;

   while(f>>x){
            if(x%10==0)
                l++;
            else l=0;

            if(l>lmax)
               lmax=l,nr=1;
            else if(l==lmax)
                nr++;

    }

    cout<<lmax<<' '<<nr;




return 0;
}
