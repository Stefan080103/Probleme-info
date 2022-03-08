#include <iostream>
using namespace std;
int main()
{
    int b,s,y,k ;
    cout<<"numar natural= ";
    cin>>b;
    s=1;
    k=0;
    y=0;
    do{
       if(b%10==s)
            k++;
       else
            k--;
        s++;
       b=b/10;
       y++;
    }while(b!=0);
    if(k==y)
        cout<<"da";
    else
        cout<<"nu";
    return 0;
}
