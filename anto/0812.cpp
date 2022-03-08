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
    elimins(c);
    strcpy(d,c);
    int l,i,nr=0;
    if(c[0]==' ') strcpy(c,c+1);
    strcat(c," ");
    l=strlen(c);
    for(i=0;i<l;i++)
        if(c[i]==' ') nr++;
    cout<<nr;
    cout<<endl;
    i=0;
    for(;i<l;i++){
        if(c[i]==' '){
            c[i]=0;
            cout<<c<<endl;
            strcpy(c,c+i+1);
            i=0;
            l=strlen(c);
        }
    }
    cout<<d;
    return 0;
}
