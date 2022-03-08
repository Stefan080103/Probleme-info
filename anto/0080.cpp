#include <iostream>
#include <cstring>
using namespace std;
void perm(char a[]){
    char aux=a[0];
    int l=strlen(a);
    int i;
    for(i=0;i<l-1;i++)
        a[i]=a[i+1];
    a[l-1]=aux;
}
char x[101];
int main()
{
    char s[101];
    int l,ok=0;
    cin.getline(s,101);
    char *p=strtok(s," ");
    while(p){
        l=strlen(p);
        if(l>2) ok=1,perm(p);
        strcat(x,p);
        strcat(x," ");
        p=strtok(NULL," ");
    }
    l=strlen(x);
    strcpy(x+l-1,x+l);
    cout<<x;
    cout<<1;
    return 0;
}
