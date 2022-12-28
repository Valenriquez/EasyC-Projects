#include <iostream>
#include <string.h>
using namespace std;

string de_nuevo = "";

/// Funciones

float dolares (int dinero, float dolar)
{
	float r;
	r = dinero * dolar;
	return r;	
}

float euros (int dinero, float euro)
{
	float r;
	r = dinero * euro;
	return r;
}

/// Ult - Funciones


	
int main(){
	
	do{
	//double pesos_mexicanos, euros, dollar;
	string cambiar;
	
	float dinero;
	int numero;
	float dolar = 20.43;
	float euro = 22.91;
	int opcion;
	string opta;
	
	
	cout << "Convertidor de moneda" << endl;
	cout << "Seleccione una opción:" <<endl;
	cout << "Los valores actuales de la moneda extranjera son:"<<endl;
	cout << "Dolar: "<< dolar << "  Euro: " << euro << endl;
	
	do {
	cout << "Inserta -cambiar- para cambiar valores:"<<endl;
	cout << "Inserta -actual- para dejar los valores actuales:"<<endl;
	cin >> opta;
	}while(opta != "cambiar" && opta != "actual");
	/*while(opta =! "cambiar" && opta =! "actual")
	{
		cout << "La cantidad ingresada es incoorecta, vuelve a ingresar: "<<end;
		cin >> opta;
	}
	*/
	 
		
	if(opta == "cambiar")
	{
		cout << "¿Deseas cambiar el valor de dolar o euro?" <<endl;
		cin >> cambiar;
		if (cambiar == "dolar")
		{
			cout << "Inserta el valor que le das al dolar: " <<endl;
			cin >> dolar;
				
		}
		else if (cambiar == "euro")
		{
			cout << "Inserta el valor que le das al euro: " <<endl;
			cin >> euro;
				
		}
	}
		
	
	
	/*
	while(opta == "cambiar" || opta == "actual")
	{
		if(opta == "cambiar")
		{
			cout << "¿Deseas cambiar el valor de dolar o euro?" <<endl;
			cin >> cambiar;
			if (cambiar == "dolar")
			{
				cout << "Inserta el valor que le das al dolar: " <<endl;
				cin >> dolar;
				void probando()
			}
			else if (cambiar == "euro")
			{
				cout << "Inserta el valor que le das al euro: " <<endl;
				cin >> euro;
				void probando()
			}
		}
	}*/

	
	cout << "1 - Insertar Pesos mexicanos"<<endl;
	cout << "2 - Insertar Euros "<<endl;
	cout << "3 - Insertar Dolares"<<endl;
	cin >> numero;
	
	
	
	switch(numero){
	case 1: // Insertas Pesos mexicanos y conviertes a dolares o euros
	{ 	
		cout << "Inserta la cantidad de Pesos mexicanos" <<endl;
		cin >> dinero;
		cout << "1 - Convertir a dólares" << endl;
		cout << "2 - Convertir a euros" << endl;
		cin >> opcion;
		if(opcion == 1)
		{
			cout << "Tu cantidad de dolares es: " << dinero/dolar << endl;
			break;
		}
		else if(opcion == 2)
		{
			cout << "Tu cantidad de euros es: " << dinero/euro << endl;
			break;
		}
		else
		{
			cout << "La cantidad ingresada es incorrecta"<< endl;
			break;
		}
		break;
	}
	case 2: // Insertas Euros y se convierten a pesos
	{	
		cout << "Inserta la cantidad de euros" <<endl;
		cin >> dinero;
		float z;
		z = euros (dinero, euro);
		cout << "Tu cantidad en Pesos Mexicanos es: " << z << endl;
		
		break;
	}	
	case 3: // Insertas Dolares y se convierten a pesos
	{	
		cout << "Inserta la cantidad de dólares" <<endl;
		cin >> dinero;
		float d;
		d = dolares (dinero, dolar);
		cout << "Tu cantidad en Pesos Mexicanos es: " << d << endl;
		break;
	}
		
	
		
	default:
	{
		cout << "No es la opción correcta" << endl;
	}
	}
	cout << "¿Deseas repetir el programa? (s/n)" << endl; //Finalizar
	//strupr(de_nuevo);
	cin >> de_nuevo;
	
	
	
	}while(de_nuevo != "n" && de_nuevo ==  "s");

	//void
	return 0;
	}


