#include <iostream>
using namespace std;


int Divizeaza(int s, int d)
{

    return (s+d)/2;
}

int Nr_par_cifre(int x){

    int nr=0;

    do{
    nr++;
    x=x/10;
    }while(x!=0);

if(nr%2==0)
    return 1;
return 0;


}

int Dei(int s, int d, int v[101]){
    int m;
    if(s==d){
        if(Nr_par_cifre(v[s]))
            return 1;
        else return 0;
    }
    else {

        m=Divizeaza(s,d);
        return Dei(s,m,v)*Dei(m+1,d,v);

    }

}

int main(){
     int v[100],n;
     cin>>n;
     int i;
     for(i=1; i<=n; i++)
        cin>>v[i];

     if(Dei(1,n,v))
            cout<<"DA";
     else cout<<"NU";


return 0;
}
