#include <iostream>
#include <string>
using namespace std;
/*
Autor: Valeria Enríquez Limón A00832782
Fecha de creación: 25 de Noviembre del 2021

Tomando la situacion del Covid-19 en el mundo, y el ODS de reducción de desigualdades, este programa se encargara de realizar una simulación de una App que permita ofrecer descuentos
de acuerdo a lo solicitado por el usuario. Esto permitirá dar un apoyo a las personas de escasos recursos.

*/
class Usuario{
	
private:
	string nombre;
	string pais;
	string tipoTarjeta;
	int telefono;
	int edad;
	int numTarjeta;
	
public:
	Usuario(){ //Valores de default
		this->nombre = "Valeria";
		this->pais = "Mexico";
		this->tipoTarjeta = "Platino";
		this->telefono = 834924992;
		this->edad = 18;
		this->numTarjeta = 320093405;
	}
	//Contructor
	Usuario(string nombre, string pais, string tipoTarjeta, int telefono, int edad, int numTarjeta){ //Pointers básicos para definir las variables
		this->nombre = nombre;
		this->pais = pais;
		this->tipoTarjeta = tipoTarjeta;
		this->telefono = telefono;
		this->edad = edad;
		this->numTarjeta = numTarjeta;
	}
		// SETTERS Y GETTERS
		void setNombre(string nombre){
			this -> nombre= nombre;
		}
			void setEdad(int edad){
				this -> edad= edad;
			}
				void setPais(string pais){
					this -> pais= pais;
				}
					void settipoTarjeta(string tipoTarjeta){
						this -> tipoTarjeta= tipoTarjeta;
					}
						void setTelefono(int telefono){
							this -> telefono= telefono;
						}
							void setnumTarjeta(int numTarjeta){
								this -> numTarjeta= numTarjeta;
							}
								
								string getNombre(){
									return nombre;
								}
									int getEdad(){
										return edad;
									}
										string getPais(){
											return pais;
										}
											string gettipoTarjeta(){
												return tipoTarjeta;
											}
												int getTelefono(){
													return telefono;
												}
													int getnumTarjeta(){
														return numTarjeta;
													}
														void mostrar(){ //Funcion que permite mostrar datos básicos del usuario
															cout<<"Nombre: "<<getNombre()<<endl;
															cout<<"Edad: "<<getEdad()<<endl;
															cout<<"País: "<<getPais()<<endl;
															cout<<"Telefóno: "<<getTelefono()<<endl;
															cout<<"Tipo de tarjeta: "<<gettipoTarjeta()<<endl;
															cout<<"Número de tarjeta: "<<getnumTarjeta()<<endl;
														}
};

class Platino: public Usuario{ //Herencia
private:
	int salario;
	int mesesSinIntereses;
	string descuento;
	
public:
	Platino(){ // Valores de default
		this->salario = 500;
		this->descuento = "%50";
		this->mesesSinIntereses = 10;
	}
	Platino(string nombre,string pais,string tipoTarjeta,int telefono,int edad,int numTarjeta,string descuento, int salario, int mesesSinIntereses):Usuario( nombre, pais, tipoTarjeta, telefono, edad, numTarjeta){ //Contructor
		this->salario = salario;
		this->descuento = descuento;
		this->mesesSinIntereses = mesesSinIntereses;
	}
	
	// SETTERS Y GETTERS
	void setSalario(int salario){
		this -> salario= salario;
	}
		void setMesesSinIntereses(int mesesSinIntereses){
			this -> mesesSinIntereses= mesesSinIntereses;
		}
			void setDescuento(string descuento){
				this -> descuento= descuento;
			}
				
				int getSalario(){
					return salario;
				}
					int getMesesSinIntereses(){
						return mesesSinIntereses;
					}
						string getDescuento(){
							return descuento;
						}
							void  mostrarPlatino(){ //Función que permite mostrar los datos de Platino
								mostrar();
								cout<<"Tu salario es: "<< salario <<endl;
								cout<<"Tus meses sin intereses son: "<< mesesSinIntereses <<endl;
								cout<<"Tu descuento es: "<< descuento <<endl;
							} 
};
class Premium: public Usuario{ //Herencia
	
private:
	string satisfaccion;
	int info;
	
public:
	Premium(){
		this->info = 10;
		this->satisfaccion = "Si";
	}
	
	Premium(string nombre,string pais,string tipoTarjeta,int telefono,int edad,int numTarjeta,int info, string satisfaccion):Usuario( nombre, pais, tipoTarjeta, telefono, edad, numTarjeta){ //Contructor
		this->info = info;
		this->satisfaccion = satisfaccion;
	}
	// SETTERS Y GETTERS
	void setInfo(int info){
		this -> info= info;
	}
		void setSatisfaccion(string satisfaccion){
			this -> satisfaccion= satisfaccion;
		}
			
			int getInfo(){
				return info;
			}
				string getSatisfaccion(){
					return satisfaccion;
				}
					void  mostrarPremium(){ //Función que permite mostrar los datos de Premium
						mostrar();
						cout<<"Tu nivel de satisfacción es:"<< info <<endl;
						cout<<"¿Seguiras usando esta App? "<< satisfaccion <<endl;
					} 
};

int main() {
	Usuario arrayUsuario[100]; //Inicializar array para tomar una cuenta de los usuarios que seguirán usando la app.
	Usuario datos;
	Platino usuarioPlatino ;
	Premium usuarioPremium;
	int iEdad=0,sTelefono,iNumTarjeta=0 , c= 0;
	int salario, mesesSinIntereses, info;
	bool var_bool; // Variable para poder ingresar de nuevo la edad de manera eficiente.
	string descuento, satisfaccion;
	string sPais,sTipoTarjeta,sNombre, temp = "";
	
	do{ // Utilzación de un switch para organizar la estructura de la App
		int iTarjeta;
		
		
		cout << "Tarjeta que desea seleccionar: " << endl;
		cout << "Escriba 1 si tiene la tarjeta Platino" << endl;
		cout << "Escriba 2 si tiene la tarjeta Premium" << endl;
		cin >> iTarjeta;
		switch (iTarjeta) {
			
		case 1: //Caso de Platino
			cout<<"¿Cómo te llamas?"<<endl;
			cin>>sNombre;
			cout<<"Ingrese su País: "<<endl;
			cin>>sPais;
			cout<<"¿Cual es tu edad?"<<endl;
			cin>>iEdad;
			var_bool = true;
			while (var_bool){
				if(iEdad<18){ //Revisa que el usuario sea mayor de edad
					cout<<"----Tienes que ser mayxr de 18 anios para usar esta App----"<<endl;
					cout<<"Vuelve a ingresar una edad legal:"<<endl;
					cin>>iEdad;
				} else {
					var_bool = false;
				}
			}
			datos.settipoTarjeta("Platino");
			cout<<"Ingrese su Telefóno: "<<endl;
			cin>>sTelefono;
			cout<<"Ingrese su número de tarjeta: "<<endl;
			cin>>iNumTarjeta;
			cout<<"Ingrese su salario por quincena:"<<endl;
			cin>> salario;
			if(salario>10000){  //Revisa que el usuario esté necesitado económicamente
				cout<<"----Tienes que estar necesitado económicamente para requerir ayuda financiera con esta app----"<<endl;
				break;
			}
			cout<<"Ingrese el descuento que requiere:"<<endl;
			cin>> descuento;
			cout<<"Ingrese los meses sin intereses que requiere:"<<endl;
			cin>> mesesSinIntereses;
			if(mesesSinIntereses>12){
				cout<<"----Discupa, no pueden ser mas de 12 meses----"<<endl;
				cout<<"Vuelve a ingresar los meses sin intereses que requieres:"<<endl;
				cin>>mesesSinIntereses; //Revisa que los meses sin interéses sean menores que 12.
				break;
			}
			
			
			
			
			
			usuarioPlatino.setEdad(iEdad);//Mostrar
			usuarioPlatino.setNombre(sNombre);
			usuarioPlatino.setPais(sPais);
			usuarioPlatino.setTelefono(sTelefono);
			usuarioPlatino.setDescuento(descuento);
			usuarioPlatino.setSalario(salario);
			usuarioPlatino.setMesesSinIntereses(mesesSinIntereses);
			usuarioPlatino.setnumTarjeta(iNumTarjeta);
			
			
			usuarioPlatino.mostrarPlatino();
			
			
			
			
			break;
			
		case 2: //Caso de Premium
			cout<<"¿Cómo te llamas?"<<endl;
			cin>>sNombre;
			cout<<"Ingrese su País: "<<endl;
			cin>>sPais;
			cout<<"¿Cual es tu edad?"<<endl;
			cin>>iEdad;
			var_bool = true;
			while (var_bool){
				if(iEdad<18){
					cout<<"----Tienes que ser mayxr de 18 anios para usar esta App----"<<endl;
					cout<<"Vuelve a ingresar una edad legal:"<<endl;
					cin>>iEdad;
				} else {
					var_bool = false;
				}
			}
			c++; //Agrega más valores al contador
			datos.settipoTarjeta("Premium");
			cout<<"Ingrese su Telefóno: "<<endl;
			cin>>sTelefono;
			cout<<"Ingrese su número de tarjeta: "<<endl;
			cin>>iNumTarjeta;
			
			cout<<"Agradecemos su presencia en nuestra App. Esperamos que estés satisfechx con nuestro trabajo. Responde del (1-10) con el rango de su satisfacción con la App."<<endl;
			cin>> info;
			cout<<"¿Seguirá usando nuestra App (Si/No)?"<<endl;
			cin>> satisfaccion;
			if(satisfaccion=="Si"){ //El número del array depende de los usuarios que seguirán utilizando la app.
				arrayUsuario[c] = datos;
			}
			
			
			usuarioPremium.setEdad(iEdad);
			usuarioPremium.setNombre(sNombre);
			usuarioPremium.setPais(sPais);
			usuarioPremium.setTelefono(sTelefono);
			usuarioPremium.setInfo(info);
			usuarioPremium.setSatisfaccion(satisfaccion);
			usuarioPremium.setnumTarjeta(iNumTarjeta);
			
			
			usuarioPremium.mostrarPremium();
			
			
			
			break;
			
		default:
			cout << "No es la opcion correcta. " << endl;
			break;
			
		}
		
		cout << "Quiere volver a iniciar el programa? (y/n)" << endl;
		cin >> temp;  //Repetir
		
	}while (temp != "n" && temp == "y");
	
	return 0;
}




