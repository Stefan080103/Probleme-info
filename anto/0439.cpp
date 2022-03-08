#include <iostream>
#include <cstring>
using namespace std;
char a[256],L;
char *stergere(char *cuv)
{

    for (int i = strlen(cuv) / 2; i < strlen(cuv) - 1; i ++)
        cuv[i] = cuv[i + 1];
    cuv[strlen(cuv) - 1] = '\0';
    return cuv;
}
int main()
{
    char sir[256]; int l,i;
    cin.getline(sir,256);
    char *p=strtok(sir," ");
    while(p){
        l=strlen(p);
        if(l%2==0) strcat(a,p);
        else strcat(a,stergere(p));
        strcat(a," ");
        p=strtok(NULL," ");
    }
    strcpy(sir,a);
    cout<<sir;
    return 0;
}
