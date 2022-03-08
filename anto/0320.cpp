#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,a,b,nr,i;
    float x;
    cout<<"dati trei numere intregi :";
    cin>>n>>a>>b;
    cout<<"dati un sir de "<<n<<" numere reale :";
    ofstream g("alfa.txt");
    for(i=1;i<=n;i++){
        cin>>x;
        g<<x<<" ";
    }
    g.close();
    ifstream f("alfa.txt");
    nr=0;
    for(i=1;i<=n;i++){
        f>>x;
        if(x<a)
            nr++;
        else if(x>b)
                nr++;
    }
    f.close();
    cout<<nr;
    return 0;
}
