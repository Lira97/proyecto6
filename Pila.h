#include <iostream>
using namespace std;

class Pila
{
	
	private:
		int *EspacioPila;//arreglo para pila 
		int Top;//el ultimo valor de la pila 
		int MAX;//tamño maximo de la pila 
	public:
		Pila(int c);// Constructor de la clase pila
		bool push(int Dato);//metodo del push
		bool pop(int  &Dato);//metodo del pop
		bool pilaLlena();//metodo del pilallena
		bool pilaVacia();//metodo del pilaVacia
		void imprimePila();//metodo del imprimirPila
};
//contructor de la clase Pila con el
Pila::Pila(int tam)
{
	if (tam <= 0)//Si el tamaño ingresado por el usuario es menor o igual a cero, entonces se regresa un mensaje de error.
	{
		cout << "La pila no puede tener tamaño negativo";
	}
	else//Sino el tamanio ingresado se le asigna a la variable MAX y top seria igual a menos 1
	{
		MAX = tam;
		EspacioPila = new int[MAX];
		Top = -1;
	}

}

bool Pila::push(int Dato)
{
	if (Top >= MAX)//mientras top sea mayor al amx que seria el tamaño entoces termina 
	{
		return false;
	}
	else if(Top < MAX)//si no enotces el valor de la posicion de la pilo en top sera igual a dato
	{
		EspacioPila[++Top]=Dato;
		return true;
	}
	
}


bool Pila::pop(int &Dato)
{
	if (Top == -1)//si el valor del top es menor a menos un indica que no hay datos 
	{
		return false;
	}
	else//si no entoces el valor de dato sera igual a la posicion de  top y disminuimos el valor se top
	{
		Dato=EspacioPila[Top--];
		return true;
	}
	
}

bool Pila::pilaLlena()
{
	if (Top == MAX-1)//si el valor de top es igual al tamaño menos uno entonces esta llena 
	{	
		return true;
	}
	else//sino regresa un falso
	{
		return false;
	}
	
}

bool Pila::pilaVacia()
{
	if (Top == -1)//si el valor de top es igual  menos uno entonces esta vacia 
	{
		return true;
	}
	else//sino regresa un falso
	{
		return false;
	}
	
}

void Pila::imprimePila()
{
	for (int i = 0; i <= Top; i++)
	{
		cout << EspacioPila[i] << "\t";//imprime el contador de i 
	}
	cout << endl;
	
}


