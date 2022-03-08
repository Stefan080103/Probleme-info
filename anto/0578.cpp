#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int mici(char x[]){
    int l=strlen(x),i,nr=0;
    for(i=0;i<l;i++)
        if(x[i]>='a' && x[i]<='z')
            nr++;
    if(nr==l) return 1;
    else return 0;
}
int main()
{
    char s[78],*p;
    int k,nr=0;
    ifstream f("teza2.txt");
    while(f.getline(s,26)){
        p=strtok(s," ");
        k=0;
        while(p!=NULL){
            if(mici(p)==1)
                k++;
            p=strtok(NULL," ");
        }
        if(k<=1) nr++;
    }
    f.close();
    cout<<nr;
    return 0;
}
