#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,i,nr1=0,nr2=0,nr4=0;
    float x[35],s1=0,s2=0,m,Max;
    ifstream f("note.in");
    f>>n;
    for(i=1;i<=n;i++)
        f>>x[i];
    f.close();
    // numarul notelor mai mici decat 5
    for(i=1;i<=n;i++)
        if(x[i]<5)
            nr1++;
    // medie note peste 5
    for(i=1;i<=n;i++)
        if(x[i]>5){
            s1=s1+x[i];
            nr2++;
        }
    // maxim pe vector
    Max=x[1];
    for(i=2;i<=n;i++)
        if(x[i]>Max)
            Max=x[i];
    //numar note cel putin egale cu media pe clasa
    for(i=1;i<=n;i++)
        s2=s2+x[i];
    m=s2*1.0/n;
    for(i=1;i<=n;i++)
        if(x[i]>=m)
            nr4++;
    ofstream g("calcule.out");
    g<<nr1<<endl;
    if(nr2>0)
        g<<s1*1.0/nr2<<endl;
    g<<Max<<endl<<nr4;
    g.close();
    return 0;
}
