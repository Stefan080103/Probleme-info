#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main()
{
    char N[100];
    int i,n,l,y;
    cin>>N; cin.get();
    n=atoi(N);
    char cuv[102],suf[102];
    for(i=1;i<=n;i++){
        cin.getline(cuv,102);
        l=strlen(cuv);
        if(l==1) cout<<"DRAGUT"<<endl;
        else{
            strcpy(suf,cuv+l/2+l%2);
            cuv[l/2]=0;
            while(cuv[0]!=0)
                if(strcmp(cuv,suf)==0) {cout<<"DRAGUT"<<endl; break;}
                else strcpy(suf,suf+1),y=strlen(cuv),cuv[y-1]=0;
            if(cuv[0]==0) cout<<"NU"<<endl;
        }
    }
    return 0;
}
