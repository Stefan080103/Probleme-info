#include <iostream>
#include <fstream>
using namespace std;
int eliminare(int x){
    int y=0,p=1,aux;
    while(x>9){
        aux=x%10;
        y=y+p*aux;
        p=p*10;
        x=x/10;
    }
    return y;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    ofstream g("f5.out");
    g<<eliminare(a)<<" "<<eliminare(b)<<" "<<eliminare(c)<<" "<<eliminare(d);
    g.close();
    return 0;
}
