#include <iostream>
#include <cstring>
using namespace std;
void beta(char x[], float &m){
    int l=strlen(x),i,s=0;
    for(i=0;i<l;i++) s=s+x[i];
    int sf=0,nr=0;
    while(s>1){
        if(s%i==0){
            sf=sf+i;
            nr++;
        }
        while(s%i==0)
            s=s/i;
        i++;
    }
    m=sf*1.0/nr;
}
int main()
{
    char x[11];
    float m;
    cin.getline(x,11);
    beta(x,m);
    cout<<m;
    return 0;
}
