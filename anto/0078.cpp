#include <iostream>

using namespace std;
int g(int x,int y){
    if(x>0){
        if(y==0) return g(x-1,1);
        if(y>0) return g(x-1,g(x,y-1));
    }
    return y+1;
}
int main()
{
    cout<<g(2,1);
    return 0;
}
