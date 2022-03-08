
#include <iostream>
#include <iostream>
using namespace std;

int x[25001],y[200001],r[200001],n,m;
int CautareBinara(int c, int s, int d){
  int m=(s+d)/2;
 if(x[m]==c)
            return 1;
  if(s<d)
  	{

       if(x[m]<c)
                return CautareBinara(c, m+1, d);
        else return CautareBinara(c,s,m);
    }
    return 0;

}



int main(){
cin>>n;
int i;
for(i=1; i<=n; i++)
    cin>>x[i];
cin>>m;
for(i=1; i<=m; i++)
    cin>>y[i];

for(i=1; i<=m; i++)
    r[i]=CautareBinara(y[i],1,n);
for(i=1; i<=m; i++)
    cout<<r[i]<<' ';

return 0;
}



