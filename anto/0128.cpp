#include <iostream>
using namespace std;

int sumacifre(int x){
    int s=0;
    while(x>0) s=s+x%10,x=x/10;
    return s;
}
int main()
{
   int a,b;
   cin>>a>>b;
   cout<<sumacifre(a)<<" "<<sumacifre(b);
    return 0;
}
