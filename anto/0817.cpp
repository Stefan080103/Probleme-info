#include <iostream>
#include <cstring>
using namespace std;
void elimins(char v[]){
    char *p;
    p=strstr(v,"  ");
    while(p!=NULL){
        strcpy(p,p+1);
        p=strstr(v,"  ");
    }
}
int main(){
    char a[102],b[102],c[102];
    cin.getline(c,102);
    cin.getline(a,102);
    cin.getline(b,102);
    elimins(c);
    if(c[0]==' ') strcpy(c,c+1);
    strcat(c," ");
    int La=strlen(a);
    char*p=strstr(c,a);
    if(p){
        strcpy(p,p+La);
        *p=0;
        cout<<c<<b<<" "<<p+1;
    }
    else cout<<c;
    return 0;
}
