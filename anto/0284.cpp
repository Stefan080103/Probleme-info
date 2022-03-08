#include <iostream>
using namespace std;
int main()
{
    int x, y, p, a;
    cout<<"sir incheiat cu 0"<<endl;
    do{
        cin>>x;
        //construiesc numarul cu cifrele pare
        y=0; p=1; a=x;
        do{
            if(a%2==0){
                y=y+a%10*p;
                p=p*10;
            }
            a=a/10;
        }while(a!=0);
        //afisez nou termen
        if(p>1)  cout<<y<<'  ';
    }while(x!=0);
    return 0;
}
