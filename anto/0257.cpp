#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,x,s1=0,nr1=0,nr2=0,i;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        s1=s1+x%10;
        if(x%2==0)
            nr1++;
        else
            nr2++;
    }
    ofstream g("bac.txt");
    g<<s1<<endl<<nr1<<endl<<nr2;
    g.close();
    return 0;
}
