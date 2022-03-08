#include <iostream>

using namespace std;

int main()
{
    int a,b;
    a=a%10;
    if(b==0) cout<<1;
    else {
    if(a==0) cout<<0;
    if(a==1) cout<<1;
    if(a==2) if(b%4==1) cout<<2;
                else if(b%4==2) cout<<4;
                else if(b%4==3) cout<<8;
                else cout<<6;
   if(a==3) if(b%4==1) cout<<3;
                else if(b%4==2) cout<<9;
                else if(b%4==3) cout<<1;
                else cout<<1;
    if(a==4) if(b%2==0) cout<<6;
            else cout<<4;
    if(a==5) cout<<5;
    if(a==6) cout<<6;
    if(a==7) if(b%4==0) cout<<1;
            else if(b%4==1) cout<<7;
            else if(b%4==2) cout<<9;
            else if(b%4==3) cout<<3;
    if(a==8) if(b%4==0) cout<<6;
            else if(b%4==1) cout<<8;
            else if(b%4==2) cout<<4;
            else if(b%4==3) cout<<2;
    if(a==9) if(b%2==0) cout<<9;
            else cout<<1;
    }
    return 0;
}
