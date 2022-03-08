#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double y; ///valoarea functiei

///ridicarea la putere in timp logaritmic
int putere(int baza, int exponent)
{   int aux;
    if(exponent==0)
        return 1;
    else if(exponent==1)
        return baza;
    else
            if(exponent%2==1){
                aux=putere(baza,(exponent-1)/2);
                return baza*aux*aux;
            }
            else {
                aux=putere(baza,(exponent)/2);
                return aux*aux;
            }

}

const double limita=0.0078125; ///precizia de 7 zecimale
///f(x)=sin(x)+sin(2*x)+x
double f(double x){
    return sin(x)+sin(2*x)+x;
}
///g(x)=f(x)-y
///Vom cauta radacina
double g(double x, double y)
{
    return f(x)-y;
}
double AproximareX(double s, double d)
{   double m;
/*cout<<s<<" "<<d<<" -->"<<d-s;
cout<<endl;*/
    if(d-s<=0.0000001){

        return (s+d)/2;
    }
    else { m=(s+d)/2;
        if(g(s,y)*g(m,y)<0)
            AproximareX(s,m);
        else AproximareX(m,d);
        }

}
int main()
{

    cin>>y;
    cout<<endl;
    double x=AproximareX(0,1);
    cout<<setprecision(8)<<x;


}
