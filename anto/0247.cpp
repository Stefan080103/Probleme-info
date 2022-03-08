#include <iostream>
using namespace std;
int main()
{
    int x, c, y, p, u;
    cin>>x>>c;
    p=1;
    y=0;
    do{
        u=x%10;
        if(u!=c-1 && u!=c && u!=c+1){
            y=y+u*p;
            p=p*10;}
        x=x/10;
    }while(x!=0);
    cout<<y;
    return 0;
}
