#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;
int main(){
    int n,i;
    long long x=1;
    ifstream f("2.txt");
    f>>n;
    f.close();
    clock_t timpInitial, timpFinal;
    timpInitial=clock();
    for(i=1;i<=n;i++)
        x=x*i;
    cout<<x<<endl;
    timpFinal=clock();
    cout<<(double)(timpFinal - timpInitial)/CLOCKS_PER_SEC;
    return 0;
}

