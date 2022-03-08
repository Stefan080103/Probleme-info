#include <iostream>
using namespace std;
int p13(long long a,int c){
    int nr=0;
    while(a>0){
        if(a%10>=c-1 && a%10<=c+1) nr++;
        a=a/10;
    }
    return nr;
}
int main()
{
    long long a,c;
    cin>>a>>c;
    cout<<p13(a,c);
    return 0;
}
