#include <iostream>
#include <vector>
using namespace std;

///functia are ca date de intrare un vector de vectori
///ce reprezinta un vector de liste
///si 2 int-uri ce reprezinta 2 varfuri adiacente
void AdaugareMuchie(vector <int> adj[ ], int varf1, int varf2){

    ///Observatie, daca avem graf orientat, vom scrie
    ///doar adj[varf1].push_back(varf2);
    adj[varf1].push_back(varf2);
    adj[varf2].push_back(varf1);

}

void AfisareMuchii(vector <int> adj[], int nr_varfuri){


    int i;
    for(i=1; i<=nr_varfuri; i++){
        cout<<i<<": ";
        int j;
        for(j=0; j<adj[i].size(); j++)
            cout<<adj[i][j]<<" ";
        cout<<endl;
    }


}

int main(){

    ///Declarare vector de vectori
    int nr_varfuri=5;
    vector <int> adj[nr_varfuri];

    ///Memorare muchii
        AdaugareMuchie(adj,1,4);
     AdaugareMuchie(adj,1,3);
      AdaugareMuchie(adj,3,5);

    ///AfisareMuchii
    AfisareMuchii(adj,nr_varfuri);


return 0;
}
