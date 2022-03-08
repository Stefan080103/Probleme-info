#include <iostream>

using namespace std;
struct nod{
    nod * urm;
    int info;
};
nod *cap;
void f2( int x)
{
  nod * q = new nod;
  q -> info = x;
  q -> urm = NULL;
  if(cap== NULL)
  {
    cap = q;
  }
  else
  {
    nod * t = cap;
    while(t -> urm != NULL)
      t = t -> urm;
    t -> urm = q;
  }
}
void f3(nod *p,int x){
    nod *t=cap;
    while(t->urm!=p) t=t->urm;
    t->info=x;
}
int dublu(int n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return 2*s;
}
void f4(nod *p){
    nod *t=new nod;
    t->info=dublu(p->info);
    t->urm=p->urm;
    p->urm=t;
}
void f9(){
    int s=0;
    nod *p,*q,*t;
    p=q=t=cap;
    while(p){
        if(p->info%2==0) {t=p;break;}
        p=p->urm;
    }
    while(p){
        if(p->info%2==0) q=p;
        p=p->urm;
    }
    while(t->urm!=q){
        if(t->info%2) s=s+t->info;
        t=t->urm;
    }
    cout<<s;
}
void f14(int val){
    nod*p,*t;
    p=cap;
    while(p){
        if(p->urm->info==val)
        {
            t=p->urm;
            p->urm=t->urm;
            delete t;
        }
        if(p->info==val && p==cap){
                t=cap;
                cap=cap->urm;
                delete t;
            }
    }
}
int main()
{
    int n,x;
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        f2(x);
    }
    nod *p=cap;
    while(p){
        if(p->info%2==0) f4(p),p=p->urm;
        p=p->urm;
    }
    return 0;
}
