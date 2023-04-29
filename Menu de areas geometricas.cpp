//declaramos la libreria
#include<iostream>
#include<Libreriaareasgeometricas.h>
//declaramos una constante de pi
#define PI 3.1416
using namespace std;
//declaramos la funcion principal
int main()
{
//declaramos todas las variables
float R, L, B, H, B1, B2;
int opcion, circulo, cuadrado, triangulo, trapecio;

cout<<"Bienvenido al calculador de areas geometricas"<<endl<<endl;
cout<<"a continuacion se le muestra un menu para que elija el area que desea calcular"<<endl<<endl;
//damos a conocer el menu
cout<<"1.= circulo\n";
cout<<"2.= cuadrado\n";
cout<<"3.= triangulo\n";
cout<<"4.= trapecio\n"; 
//leer la opcion elegida
cin>>opcion;
//hacemos uso del condicional switch para poder operar segun la opcion que se halla elegido	
	switch(opcion)
	{
// declaramos cada caso
		case 1: 
//hacemos la operacion deacuerdo al caso elegido
cout<<"ingrese el radio"<<endl;
	cin>>R;
	
	cout<<"el area del circulo es: "<<area_circulo(R)<<endl;
		break;
		
		case 2:	
		cout<<"ingrese cuanto mide un lado del cudrado"<<endl;
        cin>>L;

        cout<<"el area del cuadrado es: "<<area_cuadrado(L)<<endl;
	    break;
		
		case 3: 
		cout<<"ingrese la base del triangulo"<<endl;
        cin>>B;
		cout<<"ingrese la altura del triangulo"<<endl;
		cin>>H;

		cout<<"el area del trapecio  es: "<<area_triangulo(B,H)<<endl;
		break;
		
		case 4:
		cout<<"ingrese la base mayor" <<endl;
		cin>>B1;
		cout<<"ingrese la Base Menor "<<endl;
		cin>>B2;
		cout<<"ingrese la altura "<<endl;
		cin>>H;

		cout<<"el area del trapecio  es: "<<area_trapecio(B1,B2,H)<<endl;	

		break;
		//declaramos default en caso de que no se cumpla con ninguna de las opciones mostradas al usuario		
		default: cout<<"usted ingreso una opcion no valida";
		
	}
	return 0;
//cerramos nuestro programa
}