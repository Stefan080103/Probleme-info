#include <iostream>
#include <cstring>
using namespace std;
float sub2(char a[11]){
    int i,l=strlen(a),s=0;
    for(i=0;i<l;i++)s=s+a[i];
    int sc=0,nr=0;
    while(s>0){
        sc=sc+s%10;
        nr++;
        s=s/10;
    }
    return sc*1.0/nr;
}
int main()
{
    char x[11];
    cin.getline(x,11);
    cout<<sub2(x);
    return 0;
}
