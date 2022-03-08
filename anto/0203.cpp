#include <iostream>

using namespace std;

int main()
{
    float x, y;
    int k;
    cin>>x;
    y=0;
    k=0;
    if(x>0)
        y=y+x;
    else{
        k=k+1;
        y=y-k;
    }
    return 0;
}
