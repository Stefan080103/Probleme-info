#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n,m,a[50][26],i,j,nr,p,v[50],x[26],Max,aux,ok;
    //citire date din fisier
    ifstream f("naturale.txt");
    f>>n>>m;
    //memorarea celor n*m numere intr-un tablou bidimensional
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            f>>a[i][j];
    f.close();
    //memorare prima coloana in vector
    for(i=1;i<=n;i++)
            v[i]=a[i][1];
    nr=0;
    // numarul numerelor prime pe coloana 1
    for(i=1;i<=n;i++){
        p=0;
        for(j=2;j*j<=v[i];j++)
            if(v[i]%j==0){
                p=j;break;
            }
        if(v[i]>1 && p==0)
            nr++;
    }
    //afisare numar de numere prime
    cout<<"pe prima coloana exista "<<nr<<" numere prime "<<endl;
    //memorare ultima linie a matricei in vector
    for(j=1;j<=m;j++)
        v[j]=a[n][j];
    //ordonare descrescatoare pe vectorul v
    for(i=1;i<=m-1;i++)
        for(j=i+1;j<=m;j++)
            if(v[i]<v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
    //copiere vector in matrice
    for(j=1;j<=m;j++)
        a[n][j]=v[j];
    //afisare matrice dupa modificare
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    //copierea numerelor de pe ultima coloana, cu prima cifra impara, in vectorul x
    nr=0;
    for(i=1;i<=n;i++){
        aux=a[i][m];
        while(aux>9)
            aux=aux/10;
        if(aux%2!=0){
            nr++;
            x[nr]=v[i];
        }
    }
    //afisarea vectorului x
    for(i=1;i<=nr;i++)
        cout<<x[i]<<" ";
    cout<<endl;
    //verificare egalitate numere de pe penultima linie a matricei
    ok=0;
    for(i=1;i<=m-1;i++)
        for(j=i+1;j<=m;j++)
            if(a[n-1][i]!=a[n-1][j])
                ok=1;
    if(ok==0) cout<<"numerele de pe penultima linie a matricei sunt egale";
    else cout<<"numerele de pe penultima linie a matricei nu sunt egale";
    //cautare maxim
    Max=a[1][1];
    for(i=1;i<=n;i++)
        for(j=2;j<=m;j++)
            if(a[i][j]>Max)
                Max=a[i][j];
    //verificare daca maximul se gaseste pe prima linie a tabloului
    ok=0;
    for(j=1;j<=m;j++)
        if(a[1][j]==Max)
            ok=1;
    if(ok==1) cout<<"Maximul apare si pe prima linie a tabloului";
    else cout<<"maximul nu apare si pe prima linie a tabloului";
    //afisare primele doua linii in ordine descrescatoare
    nr=0;
    for(i=1;i<=2;i++)
        for(j=1;j<=m;j++){
            nr++;
            v[nr]=a[i][j];
        }
    //sortare vector v
    for(i=1;i<=nr-1;i++)
        for(j=i+1;j<=nr;j++)
            if(v[i]<v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
    ofstream g("p2.txt");
    for(i=1;i<=nr;i++)
        g<<v[i]<<" ";
    g.close();
    return 0;
}
