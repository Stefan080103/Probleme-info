#include <iostream>
#include <fstream>
using namespace std;
void p1(int n){
    int f=2;
    while(n>1){
        if(n%f==0) cout<<f<<" ";
        while(n%f==0) n=n/f;
        f++;
    }
}
int main()
{
    int n;
    ifstream f("f1.txt");
    while(f>>n){
        p1(n);
        cout<<endl;
    }
    f.close();
    return 0;
}
