#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,m1,m2,u;
    ifstream f;
    f.open("numar.txt");
    f>>n;
    f.close();
    m1=m2=10;
    do{
        u=n%10;
        if(u<m1){
            m2=m1; m1=u;
        }else if(u<m2) m2=u;
        n=n/10;
    }while(n!=0);
    cout<<m1<<"  "<<m2;
    return 0;
}
