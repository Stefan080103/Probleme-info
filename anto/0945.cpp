#include <iostream>
using namespace std;
void p2(int y,int &x){
    x=0;
    do{
      if(y%10==0) x++;
      y=y/10;
    }while(y!=0);
}
int main()
{
    int y,x;
    cin>>y;
    p2(y,x);
    cout<<x;
    return 0;
}
