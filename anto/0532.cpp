#include <iostream>

using namespace std;
void f(int x){
    if(x>3){
        cout<<x;
        f(x-1);
    }
    cout<<x;
}
int main()
{
    f(6);
    return 0;
}
