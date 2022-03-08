#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"numar natural cu minim 2 cifre="; cin>>n;
    while(n>=100)
        n=n/10;
    cout<<n;
    return 0;
}
