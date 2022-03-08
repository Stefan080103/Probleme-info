#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,i,nr1=0,nr2=0,nr3=0,nr4=0,a[101];
    ifstream f("note.txt");
    f>>n;
    for(i=1;i<=n;i++)
        f>>a[i];
    f.close();
    //numar note mai mici decat 5
    for(i=1;i<=n;i++)
        if(a[i]<5)
            nr1++;
    //numar note intre 5 si 7
    for(i=1;i<=n;i++)
        if(a[i]>=5 && a[i]<=7)
            nr2++;
    //numar note intre 8 si 9
    for(i=1;i<=n;i++)
        if(a[i]>=8 && a[i]<=9)
            nr3++;
    //numar note 10
    for(i=1;i<=n;i++)
        if(a[i]==10)
            nr4++;
    ofstream g("statistica.txt");
    g<<nr1<<endl<<nr2<<endl<<nr3<<endl<<nr4;
    g.close();
    return 0;
}
