#include <iostream>
using namespace std;
int main()
{
   int x,y;
   cout<<"numar natural= "; cin>>x;
   while(x>0){
        cin>>y;
        if(x>y)
            cout<<"x%10";
        else
            cout<<"y%10";
        x=y;}
    return 0;
}
