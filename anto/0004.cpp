#include <iostream>
#include <fstream>
using namespace std;

int v[10001];


int main(){ int l=0,x, nr,i,ok;
  ifstream f("bac.in");

  while(f>>x){
    l++;
    v[x]++;
  }

  if(l%2==0)
    nr=0;
  else nr=1;

  ok=1;
  for(i=1; i<=1000; i++)
        if(v[i]%2==1){
            nr--;
            if(nr<0){
                ok=0;
                break;
            }

        }

  if(ok)
    cout<<"Da";
  else cout<<"Nu";

    return 0;
}
