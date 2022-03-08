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
    char c[102],d;
    cin>>d; cin.get();
    cin.getline(c,102);
    elimins(c);
    int nr=0;
    if(c[0]==' ') strcpy(c,c+1);
    strcat(c," ");
    char *p;
    p=strchr(c,' ');
    while(p!=NULL){
        *p=0;
        if(strchr(c,d)!=NULL) {cout<<c<<endl;nr++;}
        strcpy(c,p+1);
        p=strchr(c,' ');
    }
    cout<<nr;
    return 0;
}
