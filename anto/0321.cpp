#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,i,p,j;
    cout<<"dati un numar natural: ";
    cin>>n;
    ofstream g("prime.txt");
    for(i=2;i<=n;i++){
        p=0;
        for(j=2;j*j<=i;j++)
            if(i%j==0){
             p=j;break;
            }
        if(i>1 && p==0)
            g<<i<<endl;
    }
    g.close();
    return 0;
}
