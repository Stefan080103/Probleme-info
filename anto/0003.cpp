#include <iostream>
using namespace std;

int n,  v[11], ok,nr;
char a[11][11];
int Valid(int k){
    int i;
    for(i=1; i<k; i++){
            if(v[k]==v[i])
                return 0;
            if(v[k]==v[i]+k-i)
                return 0;
            if(v[k]==v[i]-k+i)
                return 0;
}
    return 1;

}
void Afisare(){
  int i, j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++)
            if(j==v[i])
                cout<<"* ";
            else cout<<"- ";
        cout<<endl;
    }
    ok=1;


}
int Solutie(int k){
    if(k==n)
        return 1;
    return 0;
}

void Bk(int k){

    int i;
    for(i=1; i<=n ; i++){
        v[k]=i;
        if(Valid(k))
            if(Solutie(k)){
                Afisare();
                cout<<endl<<endl;
                nr++;
            }
            else Bk(k+1);
    }


}
int main(){

cin>>n;
Bk(1);
cout<<nr;

}
