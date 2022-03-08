#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n , p, u;
    ifstream f;
    f.open("f11.txt");
    f>>n;
    f.close();
    p=1;
    do{
        u=n%10;
        if(u%2==0)
            p=p*u;
        n=n/10;
    }while(n!=0);
    cout<<p;
    return 0;
}
