#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int m1, m2, u,n;
    ifstream f;
    f.open("numar.txt");
    f>>n;
    f.close();
    m1=m2=-1;
    do{
        u=n%10;
        if(u>m1){
            m2=m1; m1=u;
        }else  if(u>m2) m2=u;
        n=n/10;
    }while(n!=0);
    cout<<m1<<endl<<m2;
    return 0;
}
