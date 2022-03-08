#include <iostream>

using namespace std;
void nr_11(int x,int &y){
    if(y!=x){
        if(y%2==0) nr_11(x,1+y);
        else nr_11(x,1+2*y);
        cout<<y;
    }
}
int main()
{
    int x;
    cin>>x;
    nr_11(x,1);
    return 0;
}
