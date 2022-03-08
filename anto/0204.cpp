#include <iostream>

using namespace std;

int main()
{
    int z, x, y;
    cin>>z;
    if(z%2==0){
        x=z-2;
        y=z+2;
    }
    else{
        x=z-1;
        y=z+1;
    }
    cout<<x<<endl<<y;
    return 0;
}
