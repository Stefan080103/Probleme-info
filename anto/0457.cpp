#include <iostream>
#include <fstream>
using namespace std;
void permutare(int &x){
    int c=x,p=1;
    while(c>9) c/=10,p*=10;
    x=x%p*10+c;
}
int main()
{
    int n,x,i,ok,aux,y;
    ifstream f("sort.in");
    f>>n;
    f>>x;
    ofstream g("sort.out");
    g<<"DA"<<endl<<x<<" ";
    for(i=2;i<=n;i++){
        ok=0;
        f>>y;
        aux=y;
        if(y>=x) g<<y<<" ",ok=1;
        else {
            permutare(aux);
            if(aux>=x) g<<aux<<" ",ok=1;
            else while(aux!=y) {
                permutare(aux);
                if(aux>=x){ g<<aux<<" "; ok=1; break;}
            }
        }
        if(ok==0) break;
        x=aux;
    }
    f.close();
    g.close();
    if(ok==0){
        g.open("sort.out");
        g<<"NU";
        g.close();
    }
    return 0;
}
