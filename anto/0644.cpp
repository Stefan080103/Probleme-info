#include <iostream>
#include <fstream>
using namespace std;
int n, T[101];
void reprezentare(){
    ifstream f("arb1.txt");
    f>>n;
    for(int i=1;i<=n;i++)
        f>>T[i];
    f.close();
}
void fii(int x){
    int ok=0;
    for(int i=1;i<=n;i++)
        if(T[i]==x){
                cout<<i<<" ";
                ok=1;
        }
    if(ok==0) cout<<"frunza";
    cout<<endl;
}
int viz[101];
void frunze(){
    int i;
    for(i=1;i<=n;i++) viz[T[i]]=1;
    ofstream g("frunxe.out");
    for(i=1;i<=n;i++)
        if(!viz[i]) g<<i<<" ";
    g.close();
}

int main()
{
    reprezentare();
    int x;
    cin>>x;
    fii(x);
    frunze();
    return 0;
}
