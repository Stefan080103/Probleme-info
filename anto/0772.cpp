#include <iostream>
using namespace std;
int main()
{
    int x,z,y;
    cin>>z>>x;
    while(x>0){
        cin>>y;
        if(z<y-x)
            cout<<"x%10";
        else
            cout<<"y%10";
        x=y;}
    return 0;
}
