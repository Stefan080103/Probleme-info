#include <iostream>
using namespace std;
int main(){
    int b,n;
    cin >> b >> n;
    int rez = 0,x;
    for(int i =1 ; i <= n ; i ++)
    {
        cin >> x;
        rez = rez * b + x;
    }
    cout << rez;
}
