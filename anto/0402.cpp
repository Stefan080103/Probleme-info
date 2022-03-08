#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,nr,i,x;
    cin>>n;
    ifstream f("date.in");
    for(i=1;i<=n;i++){
        f>>nr;
        x=nr;
    }
     cout<<x<<" ";
    while(f>>nr)
        cout<<nr<<" ";
    f.close();
    return 0;
}
