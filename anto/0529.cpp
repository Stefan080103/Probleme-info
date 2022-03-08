#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,m1=-1,m2=-1,m3=-1;
    ifstream f("bac.in");
    while(f>>x){
        if(x%100==20)
            if(x>m1) m3=m2,m2=m1,m1=x;
            else
                if(x>m2) m3=m2,m2=x;
                else if(x>m3) m3=x;
    }
    f.close();
    cout<<m3<<" "<<m2<<" "<<m1;
    return 0;

}
