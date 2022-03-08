#include <iostream>
#include <fstream>
using namespace std;
int n,s[101],d[101];
void reprezentare(){
    ifstream f("binar2.in");
    f>>n;
    int i;
    for(i=1;i<=n;i++)
        f>>s[i];
    for(i=1;i<=n;i++)
        f>>d[i];
    f.close();
}
//determinare radacina
int viz[101];
int radacina(){
    int i;
    for(i=1;i<=n;i++)
        viz[s[i]]++, viz[d[i]]++;
    for(i=1;i<=n;i++)
        if(viz[i]==0) return i;
    return 0;
}
//nivelul unui nod varianta 1-preordine
int niv=-1;
/*void nivel(int r,int x,int k){
    if(r){
        if(r==x) niv=k;
        nivel(s[r],x,k+1);
        nivel(d[r],x,k+1);
    }
}*/
//tot aia dar mai complicat
void nivel(int r,int x,int k){
    if(r){
        if(r==x) niv=k;
        else if(s[r])
                nivel(s[r],x,k+1);
            if(niv<0)
                nivel(d[r],x,k+1);
    }
}
// nivelul unui nod- varianta 2- vector de niveluri-inordine
int NIV[101];
void niveluri(int r,int k){
    if(r){
        niveluri(s[r],k+1);
        NIV[r]=k;
        niveluri(d[r],k+1);
    }
}
int main()
{
    reprezentare();
    int rad=radacina();
    cout<<rad<<endl;
    int x;
    cout<<"nod ="; cin>>x;
    cout<<endl;
    nivel(rad,x,0);
    if(niv>=0) cout<<"nivelul lui  "<<x<< "  este "<<niv<<endl;
    else cout<<"nodul nu exista"<<endl;
    //toate nivelurile
    int i,Max=NIV[1];
    niveluri(rad,0);
    for(i=1;i<=n;i++)
        if(NIV[i]>Max) Max=NIV[i];
    cout<<"inaltimea arborelui este "<<Max<<endl;

    return 0;
}
