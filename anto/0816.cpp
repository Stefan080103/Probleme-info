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
    char c[102],d[102],b[102],aux[102];
    cin.getline(c,102);
    cin.getline(d,102);
    cin.getline(b,102);
    elimins(d);
    aux[0]='\0';
    if(c[0]==' ') strcpy(c,c+1);
    strcat(c," ");
    char*p;
    p=strchr(c,' ');
    while(p!=NULL){
        *p=0;
        if(strcmp(c,d)==0){
            strcat(aux,b); strcat(aux," ");
        }else{
            strcat(aux,c);
            strcat(aux," ");
        }
        strcpy(c,p+1);
        p=strchr(c,' ');
    }
    cout<<aux;
    return 0;
}
