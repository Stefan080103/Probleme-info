#include <iostream>

using namespace std;

void sute(int n){
        n=n/100;
        if(n==0) cout<<"";
        if(n==1) cout<<"osuta";
        if(n==2) cout<<"douasute";
        if(n==3) cout<<"treisute";
        if(n==4) cout<<"patrusute";
        if(n==5) cout<<"cincisute";
        if(n==6) cout<<"sasesute";
        if(n==7) cout<<"saptesute";
        if(n==8) cout<<"optsute";
        if(n==9) cout<<"nouasute";
}
void unit(int n){
    n=n%10;
    if(n==1) cout<<"unu";
    if(n==2) cout<<"doi";
    if(n==3) cout<<"trei";
    if(n==4) cout<<"patru";
    if(n==5) cout<<"cinci";
    if(n==6) cout<<"sase";
    if(n==7) cout<<"sapte";
    if(n==8) cout<<"opt";
    if(n==9) cout<<"noua";
}

void zeci(int n){
    n=n/10%10;
    if(n==1) cout<<"unu";
    if(n==2) cout<<"douazeci";
    if(n==3) cout<<"treizeci";
    if(n==4) cout<<"patruzeci";
    if(n==5) cout<<"cincizeci";
    if(n==6) cout<<"saizeci";
    if(n==7) cout<<"saptezeci";
    if(n==8) cout<<"optzeci";
    if(n==9) cout<<"nouazeci";
}
void numar(int n){
    if(n==14) cout<<"paisprezece";
    else if(n==11) cout<<"unsprezece";
        else if(n>0 && n<10) unit(n);
        else if(n<20 && n>0) {unit(n); cout<<"sprezece";}
            else if(n<100) {zeci(n); if(n%10) cout<<"si"; unit(n);}
                else {sute(n); zeci(n); if(n%10) cout<<"si"; unit(n);}
}
int main()
{
    int n,x,y,z;
    cin>>n;
    if(n>999999999) cout<<"unmiliard";
    else{
    x=n%1000;
    n=n/1000;
    y=n%1000;
    n=n/1000;
    z=n;

    if(z>0){
        if(z==1) cout<<"unmilion";
        else if(z==2) cout<<"douamilioane";
            else {numar(z); cout<<"milioane";}
        if(y>0){
            if(y==1) cout<<"omie";
            else if(y==2) cout<<"douamii";
                else {numar(y); if(y>19) cout<<"de"; cout<<"mii";}
        numar(x);
        }
    }else{
        if(y>0){
            if(y==1) cout<<"omie";
            else if(y==2) cout<<"douamii";
                else {numar(y); if(y>19) cout<<"de"; cout<<"mii";}
        numar(x);
        }
    }
    if(x==0 && y==0 && z==0) cout<<"zero";
    else if(x!=0 && y==0 && z==0) numar(x);
    }
    return 0;
}
