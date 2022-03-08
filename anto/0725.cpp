#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int z,m1,m2,u;
    ofstream g;
    cout<<"dati un numar natural mai mare decat 9=";
    cin>>z;
    m1=m2=10;
    do{
        u=z%10;
        if(u<m1){
            m2=m1; m1=u;
        }else if(u<m2) m2=u;
        z=z/10;
    }while(z!=0);
    g.open("minime.txt");
    g<<m1<<"  "<<m2;
    g.close();
    return 0;
}
