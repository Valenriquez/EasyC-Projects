#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <typeinfo>
using namespace std;
// En este programa se utiliza el algortimo de Luhn
//long int numero_tarjeta;
//long int numero_tarjeta[20];
string numero_tarjeta;
string hello;
int moi;
int i;
int j;
int day[20];

int main(){
cout<<"Digite el número de su tarjeta"<<endl;
cin>>numero_tarjeta;

if (numero_tarjeta.length()< 16 || numero_tarjeta.length() > 16 )
{
	cout << "Está mal";
	return 1; // ojo que no sabia de <----
}
for (int i = 0;i < numero_tarjeta.length(); i++)
{
	if(fmod(i, 2)==0)
	{	hello = numero_tarjeta[i];
		moi = stoi(hello);
		//cout << moi *2;
		hello = numero_tarjeta[i];
		cout << stoi(hello);
		
	}
	//cout << typeid(hello).name() << endl;
		for(int j = 0;j < hello.length(); j++)
	{
		//day.append(hello[j]);
		//cout << day;
		if(fmod(j, 2)==0)
		{	
		//	cout << hello[j];
		
		//hello = numero_tarjeta[i];
		//cout << stoi(hello);
		
		}
	}
}



//int size  = sizeof(numero_tarjeta);
//cout << size;
//cin >> i;

//// CONVERT STRING INTO INTEGER  https://www.educative.io/edpresso/how-to-convert-a-string-to-an-int-in-cpp

// cada segundo --- multiplicar por 2

//
//
//
//
	return 0;
}

