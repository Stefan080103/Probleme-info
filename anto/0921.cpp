#include <iostream>
#include <fstream>
using namespace std;
int minim(int x){
    int Min;
    Min=x%10;
    x=x/10;
    while(x>0){
        if(Min>x%10)
            Min=x%10;
        x=x/10;
    }
    return Min;
}
int cp(int x){
    int nr=0;
    while(x>0){
        if(x%10%2==0)
            nr++;
        x=x/10;
    }
    return nr;
}
int ci(int x){
    int nr=0;
    while(x>0){
        if(x%10%2!=0)
            nr++;
        x=x/10;
    }
    return nr;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    ofstream g("f4.out");
    g<<minim(a)<<" "<<cp(a)<<" "<<ci(a)<<endl;
    g<<minim(b)<<" "<<cp(b)<<" "<<ci(b)<<endl;
    g<<minim(c)<<" "<<cp(c)<<" "<<ci(c);
    g.close();
    return 0;
}
