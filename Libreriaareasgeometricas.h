//declaramos la libreria prederteminada
#include <iostream>

//declaramos una constante de pi
#define PI 3.1416

//definimos el espacio de nombre
using namespace std;

/*vamos a declarar una primer funcion que nos servira para calcular el area de un circulo
pasando un parametro*/

//el párametro que pasaremos es el radio y lo nombraremos R

float area_circulo(float R)
{
	//definimos la formula para calcular el area de un circulo Radio * Radio * PI
	
	return PI*R*R;
}

/*vamos a declarar una funcion para calcular el area de un cuadrado, donde pasaremos 
como parametro cada Lado y lo nombraremos L*/

float area_cuadrado(float L)
{
	//definimos la formula para calcular el area de un cuadrado A= l*L
	return L*L;
}

/*vamos a declarar una funcion para calcular el area de un triangulo, donde pasaremos 
2 parametros Base=B y Altura=H*/

float area_triangulo(float H)
{
	//definimos la formula para calcular el area del triangulo A=(B*H)/2
	
	return (B*H)/2;
}

/*vamos a declarar una funcion para calcular el area de un trapecio, donde pasaremos 
3 parametros Base_mayor=B1, Base_menor=B2  y Altura=H*/

float area_trapecio(float H)
{
	//definimos la formula para clacular el area del trapecio A= (B1+B2)/2(H)
	
	return {(B1+B2)/2}(H);
}
