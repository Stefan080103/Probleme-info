#include <fstream>
#include <cmath>

using namespace std;
int main()
{
    int N,s1,x,s2,nr,aux,u;
    ifstream f;
    f.open("bilet22.txt");
    f>>N;
    //calculez suma cifrelor lui N
    s1=0;
    while(N>0){
        u=N%10;
        s1=s1+u;
        N=N/10;
    }
    //citimsir incheiat cu patrat perfect
    nr=0;
    do{
        f>>x;
        aux=x;
    //calculez suma cifrelor lui aux
        s2=0;
        while(aux>0){
            u=aux%10;
            s2=s2+u;
            aux=aux/10;
        }
        if(s1==s2)
            nr++;
    }while(sqrt(x)!=(int)sqrt(x));
    f.close();
    //afisare rezultat
    ofstream g;
    g.open("bilet22.out");
    g<<nr;
    g.close();
    return 0;
}
