#include <iostream>
#include <fstream>
using namespace std;
int f(int x){
    if(x<=0) return 0;
    return x+f(x-5);
}
int main(){
    cout<<f(20);
    /*int n;
    ifstream f("bac.txt");
    f>>n;
    int a,i,b;
    cout<<n<<" ";
    a=n;
    while(f>>b){
        for(i=a-1;i>=b+1;i--)
            cout<<i<<' ';
        a=b;
    }
    f.close();
    for(i=a-1;i>=1;i--)
        cout<<i<<" ";*/

    return 0;
}
