#include <iostream>

using namespace std;

int main()
{
    int S ,P , n, r;
    cout<<"banii primiti="; cin>>S;
    cout<<"pretul inghetatei="; cin>>P;
    n=S/(P+1);
    r=S-P*(n+1);
    cout<<"numarul de invitati="<<n;
    cout<<"restul primit="<<r;
    return 0;
}
