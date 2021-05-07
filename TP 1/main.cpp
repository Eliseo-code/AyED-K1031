#include <iostream>
#include <math.h>
using namespace std;

int main()
{/*
    float velmts;
    float velkmh;
    cout<<"Ingrese una velocidad en m/s"<<endl;
    cin>>velmts;
    velkmh=velmts*3.6;
    cout<<velmts<<" m/s"<<" ------> km/h "<<endl;
    cout<<"La velocidad en km/h es: "<<velkmh<<" km/h"<<endl;
*/

    float a,b,c;
    float discriminante;
    float cuadratica;
    float cuadratica1;


    cout<<"Ingrese el coeficiente del primer termino de la cuadratica"<<endl;
    cin>>a;
    cout<<"Ingrese el coeficiente del segundo termino de la cuadratica"<<endl;
    cin>>b;
    cout<<"Ingrese el coeficiente del tercer termino de la cuadratica"<<endl;
    cin>>c;
    cout<<"La ecuacion cuadratica es: "<<a<<" xˆ2 + "<<b<<"x + "<<c<<endl;

    discriminante=pow(b,2)-(4*a*c);
    cuadratica=((-1*b)+sqrt(discriminante))/(2*a);
    cuadratica1=((-1*b)-sqrt(discriminante))/(2*a);
    cout<<"El resultado del discriminante es: "<<discriminante<<endl;
     if (discriminante==0)
        {cout<<"Existe solo una raiz y es real"<<endl;

         cout<<"La raiz es: "<<cuadratica1<<endl;
    }
    else if (discriminante>0)


   {
    cout<<"Existen dos raices y son reales"<<endl;
    cout<<"Las raices son: x1: "<<cuadratica<<" y x2: "<<cuadratica1<<endl;
    }
    else
{

    cout<<"NO EXISTEN RAICES REALES"<<endl;
}


    return 0;

}
