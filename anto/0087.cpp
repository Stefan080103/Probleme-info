#include <iostream>
using namespace std;
int main()
{
    char c;
    int n,x,m;
    x=1;
    cin>>n;
    m=(x+n)/2;
    while(x<n){
        cout<<"?"<<" "<<m<<endl;
        cout.flush();
        cin>>c;
        if(c=='<'){
            cin>>c;n=m;
        }
        else if(c=='>')
                x=m+1;
            else;
        m=(x+n)/2;
    }
    cout<<"!"<<" "<<x;
    return 0;
}
