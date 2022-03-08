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
    char c[102],d[102];
    cin.getline(c,102);
    cin.getline(d,102);
    elimins(d);
    if(c[0]==' ') strcpy(c,c+1);
    strcat(c," ");
    char *p;
    char *q;
    p=strchr(c,' ');
    while(p!=NULL){
        *p=0;
        if(strstr(c,d)!=NULL) {q=strstr(c,d); strcpy(q,p+1); cout<<c;break;}
        else{
            strcpy(c,p+1);
            p=strchr(c,' ');
        }
    }
    return 0;
}
