#include <iostream>
#include <cstring>
using namespace std;
void deplasare(char x[], int i){
    int j;
    for(j=strlen(x);j>=i;j--)
        x[j+1]=x[j];
}
int main()
{
    char x[201];
    cin.getline(x,101);
    int i;
    for(i=0;i<strlen(x);i++)
        if(strchr("aeiou",x[i])){
            deplasare(x,i);
            i++;
        }
    cout<<x;
    return 0;
}
