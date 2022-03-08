 #include <iostream>
using namespace std;
int main()
{
    int m,a,z;
    cin>>a;
    m=0;
    while(a>0){
        z=a%10;
        if(z%2!=0)
           m=z;
        a=a/10;
    }
    if(m!=0)
        cout<<m;
    else cout<<"nu exista";
    return 0;
}
