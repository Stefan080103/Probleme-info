#include <iostream>
using namespace std;


int sdiv(int a){
  int s=0,d;
  for(d=2;d<=a/2;d++)
      if(a%d==0)
          s=s+d;
  return s;
}

int main()
{
    int n,v[101],S[101],i,smax=0;
    cout<<"n="; cin>>n; cout<<"Dati "<<n<<" numere naturale :";
    for(i=1;i<=n;i++){
        cin>>v[i];
        S[i]=sdiv(v[i]);
        if (S[i]>smax) smax=S[i];
    }
    if(smax==0) cout<<endl<<" Nici un numar nu are divizori proprii"<<endl;
    else    for(i=1;i<=n;i++)
                if(S[i]==smax) cout<<v[i]<<" ";
    return 0;
}
