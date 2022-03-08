#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    int n,s;
    ifstream f;
    f.open("numar.txt");
    f>>n;
    f.close();
    while(n>=100)
        n=n/10;
    s=n/10+n%10;
    cout<<s;
    return 0;
}
