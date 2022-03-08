#include <iostream>
using namespace std;


int numarare(int a){
    int nr=0;
    if(a==0) {nr=1;return nr;}
    while(a>0) nr++,a=a/10;
    return nr;
}



int main()
{
    int n;
    cin>>n;
    cout<<numarare(n);
    return 0;
}
