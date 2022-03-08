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
    char c[102],d[102],e[102];
    cin.getline(c,102);
    cin.getline(d,102);
    elimins(d);
    e[0]='\0';
    if(c[0]==' ') strcpy(c,c+1);
    strcat(c," ");
    char *p;
    p=strchr(c,' ');
    while(p!=NULL){
        *p=0;
        if(strcmp(c,d)!=0){
            strcat(e,c);
            strcat(e," ");
        }
        strcpy(c,p+1);
        p=strchr(c,' ');

    }
    cout<<e;
    return 0;
}
