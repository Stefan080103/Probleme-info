#include <iostream>
using namespace std;

///**Enunt**\\\
//x^3+x-1=0 m sa se determine cu o precizie de zecimale
///radacinea reala ce apartine intervalulului [0,1]

/// f(x)=x^3+x-1
float f(float x)
{

    return x*x*x+x-1;
}

float Radacina(float s, float d)
{
    float m;

    if(d-s<=0.0625)
        return (s+d)/2;
    else
    {   m=(s+d)/2;
        if(f(s)*f(m)<0)
            Radacina(s,m);
        else Radacina(m,d);
    }
}
int main(){
cout<<Radacina(0,1);


return 0;
}
