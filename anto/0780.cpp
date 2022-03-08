#include <iostream>
using namespace std;
int main()
{
    int y ,s, u;
    cin>>y;
    s=0;
    do{
        u=y%10;
        if(u%2!=0)
            s=s+u;
        y=y/10;
    }while(y!=0);
    cout<<s;
    return 0;
}
