#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N, s1, s2, nr, y, x;
    cout<<"numar natural= ";
    cin>>N;
    //suma cifrelor lui N
    s1=0;
    while(N>0){
        s1=s1+N%10;
        N=N/10;
    }
    //citire sir incheiat cu patrat perfect
    nr=0;
    do{
        cin>>x;
        //suma cifrelor lui x
        s2=0; y=x;
        while(x>0) {
            s2=s2+x%10;
            x=x/10;
        }
        //decizie de numarare
        if(s1==s2) nr++;
    }while( sqrt(y)!=(int)sqrt(y));
    cout<<nr;
    return 0;
}
