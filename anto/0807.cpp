#include <iostream>
#include <cstring>
using namespace std;
void schimbare(char s[],char &nr){
    char *p;
    p=strstr(s,"  ");
    while(p){
        strcpy(p,p+1);
        p=strstr(s,"  ");
    }
    int l=strlen(s);
    if(s[0]==' ') strcpy(s,s+1);
    if(s[l-1]!=' ') strcat(s," ");
    int i;
    nr=0;
    for(i=0;i<l;i++)
        if(s[i]==' ') nr++;
}
int main()
{
    char x[200],nr;
    cin.getline(x,200);
    schimbare(x,nr);
    cout<<nr;
    return 0;
}
