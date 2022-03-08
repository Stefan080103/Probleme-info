#include <iostream>
#include <fstream>
using namespace std;
int main()
{   int b,s,k;
    ifstream f;
    f.open("numar.txt");
    f>>b;
    f.close();
    do{
        if(b%2==0) {
            s=s+b%10;
            k++;
        }
        b=b/10;
    }while(b!=0);
    if (k!=0) cout<<s*1.0/k;
    else cout<<"imposibil";
    return 0;
}
