#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;
long long fi(int n){
    if(n<3) return 1;
    else return fi(n-1)+fi(n-2);
}
int main()
{
    long long n;
    ifstream f("1.txt");
    f>>n;
    f.close();
    clock_t timpInitial, timpFinal;
    timpInitial=clock();
    cout<<fi(n)<<endl;
    timpFinal=clock();
    cout<<(double)(timpFinal - timpInitial)/CLOCKS_PER_SEC;

    return 0;
}
