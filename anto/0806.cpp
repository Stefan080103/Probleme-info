#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char x[2003];
    cin.getline(x,2003);
    int l=strlen(x),nr=0,i;
    for(i=0;i<l;i++)
        if(x[i]=='.' || x[i]=='?' || x[i]=='!')
            nr++;
    cout<<nr<<endl;
    int Max,n2;
    char *p,s[]=".!?",d[2003];
    Max=strlen(x);
    p=strtok(x,s);
    while(p){
        n2=strlen(p);
        if(Max<n2){
            strcpy(d,p);
            Max=n2;
        }
        p=strtok(NULL,s);
    }
    cout<<d;
    return 0;
}
