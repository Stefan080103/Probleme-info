#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x,y,p;
    cin>>x;
    while(x!=0){
        y=0;p=1;
        while(x>9){
            y=y+x%10*p;
            p=p*10;
            x=x/10;
        }
        cout<<y<<"  ";
        cin>>x;
    }
    return 0;
}
