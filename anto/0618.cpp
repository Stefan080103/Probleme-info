#include <iostream>
#include <cstring>
using namespace std;
void adaug_spatiu(char x[]){
    int l=strlen(x);
    if(x[l-1]!=' '){
        x[l]=' ';
        l++;
        x[l+1]=0;
    }
    int i;
    if(x[0]!=' '){
        for(i=l-1;i>=0;i--)
            x[i+1]=x[i];
        x[0]=' ';
    }
}
int main()
{
    char x[303],a[53],*p;
    int l,nr=0;
    cin.getline(x,303);
    cin.getline(a,53);
    //adaugam cate un spatiu la inceputul si la sfarsitul textului
    adaug_spatiu(x);
    adaug_spatiu(a);
    l=strlen(a);
    p=strstr(x,a);
    while(p){
        nr++;
        p=strstr(p+l,a);
    }
    cout<<nr;
    return 0;
}
