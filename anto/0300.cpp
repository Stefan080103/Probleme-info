#include <fstream>
using namespace std;
int main()
{
    int x,c1,c2,u,p,y;
    //citim datele de intrare
    ifstream f;
    ofstream g;
    f.open("bilet1.txt");
    f>>x>>c1>>c2;
    f.close();
    y=0;
    p=1;
    do{
        u=x%10;
        if(u==c1)
            u=c2;
        y=y+u*p;
        p=p*10;
        x=x/10;
    }while(x!=0);
    g.open("bilet1.out");
    g<<y;
    g.close();
    return 0;
}
