#include <iostream>
#include "Pila.h"

using namespace std;
int main() {
	Pila prueba(10);
	prueba.push(20);
	prueba.push(3);
	prueba.push(2);
	prueba.push(6);
	prueba.push(8);
	prueba.imprimePila();
	int h;
	prueba.pop(h);
	
	if(prueba.pilaVacia()==1)
	{
	cout<<"la pila esta vacia"<<endl;
	}
	else 
	{
	cout<<"la pila no esta vacia"<<endl;	
	}
	
	if(prueba.pilaLlena()==1)
	{
		cout<<"la pila esta llena"<<endl;
	}
	else 
	{
		cout<<"la pila no esta llena"<<endl;	
	}

	
		prueba.imprimePila();
}