#include <iostream>
using namespace std;
int main()
{
    int x,u,nr=0;
    cout<<"sir incheiat cu -1"<<endl;
    cin>>x;
    while(x!=-1){
        u=x%10;
        while(x>9) x=x/10;
        if(x==u) nr++;
        cin>>x;
    }
    cout<<nr;
    return 0;
}
