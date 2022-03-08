#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,nr,m1=-1,m2=-1;
    ifstream f("bac.txt");
    while(f>>x){
        if(x%2) nr++;
        if(nr==3){
            if(x%2==0)
                if(x>m1) m2=m1,m1=x;
                else if(x>m2 && x!=m1) m2=x;
        }
    }
    f.close();
    if(m1==-1) cout<<"nu exista";
    else  cout<<m2<<" "<<m1;
    return 0;
}
