#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char x[2003],y[2003];
    cin.getline(x,2003);
    strcpy(y,x);
    int l=strlen(x),nr=0,i;
    for(i=0;i<l;i++)
        if(x[i]=='.' || x[i]=='?' || x[i]=='!')
            nr++;
    cout<<nr<<endl;
    int n2,n1=0;
    char *p,s[]=".!?",d[2003],e[2003];
    l=strlen(y);
    p=strtok(y,s);
    while(p){
        n2=strlen(p);
        if(l>n2){
            strcpy(d,p);
            l=n2;
        }
        if(l>n1){
            strcpy(e,p);
            l=n2;
        }
        p=strtok(NULL,s);
    }
    cout<<d<<endl<<e;
    return 0;
}
