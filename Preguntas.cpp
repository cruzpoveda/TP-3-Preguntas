/* Programa Preguntas, Juego de preguntas y respuestas con puntaje.
* Juan Cruz Poveda
* 24/4/15
*/

#include <iostream>

using namespace std;

int main() {
	string respuesta="";
	int opcion, puntaje=0;
	do{
	cout << "---------------------------Preguntas y repuestas!---------------------------\nPara jugar ingresa la opcion que mas te guste:\n1-Deportes\n2-Conocimiento General\n3-Musica\n4-Salir\n";
	cin >> opcion;
	if (opcion == 1){
		cout << "En que deporte se juega embocando pelotas en aros?\n";
		cin >> respuesta;
		if (respuesta == "basket"){
			puntaje ++;
			cout << "Correcto, tu puntaje es: " << puntaje;
		}
		else{
			cout << "Incorrecto, tu puntaje es: " << puntaje;
		}
		cout << "\nQueres continuar?\n";
		cin >> respuesta;
		if (respuesta == "si"){
			cout << "En que deporte se puede hacer un 'Ace'?\n";
			cin >> respuesta;
			if (respuesta == "tenis"){
				puntaje ++;
				cout << "Correcto, tu puntaje es: " << puntaje;
			}
			else{
				cout << "Incorrecto, tu puntaje es: " << puntaje;
			}
			cout << "\nQueres continuar?\n";
			cin >> respuesta;
			if (respuesta == "si"){
				cout << "Que pais gano el mundial Brasil 2014?\n";
				cin >> respuesta;
				if (respuesta == "alemania"){
					puntaje ++;
					cout << "Correcto, tu puntaje es: " << puntaje;
				}
				else{
					cout << "Incorrecto, tu puntaje es: " << puntaje;
				}
				cout << "\nGanaste esta etapa! Segui con otra categoria!\n";
			}
		}
	}
	if (opcion == 2){
		cout << "En que lugar puedo leer libros sin pagar?\n";
		cin >> respuesta;
		if (respuesta == "biblioteca"){
			puntaje ++;
			cout << "Correcto, tu puntaje es: " << puntaje;
		}
		else{
			cout << "Incorrecto, tu puntaje es: " << puntaje;
		}
		cout << "\nQueres continuar?\n";
		cin >> respuesta;
		if (respuesta == "si"){
			cout << "Cual de estos NO es un vegetal? vaca-papa-espinaca\n";
			cin >> respuesta;
			if (respuesta == "vaca"){
				puntaje ++;
				cout << "Correcto, tu puntaje es: " << puntaje;
			}
			else{
				cout << "Incorrecto, tu puntaje es: " << puntaje;
			}
			cout << "\nQueres continuar?\n";
			cin >> respuesta;
			if (respuesta == "si"){
				cout << "Algo que en 2D es un circulo, en 3D será una...?\n";
				cin >> respuesta;
				if (respuesta == "esfera"){
					puntaje ++;
					cout << "Correcto, tu puntaje es: " << puntaje;
				}
				else{
					cout << "Incorrecto, tu puntaje es: " << puntaje;
				}
				cout << "\nGanaste esta etapa! Segui con otra categoria!\n";
			}
		}
	}
	if (opcion == 3){
		cout << "Cuantas cuerdas tiene una guitarra?\n";
		cin >> respuesta;
		if (respuesta == "seis"){
			puntaje ++;
			cout << "Correcto, tu puntaje es: " << puntaje;
		}
		else{
			cout << "Incorrecto, tu puntaje es: " << puntaje;
		}
		cout << "\nQueres continuar?\n";
		cin >> respuesta;
		if (respuesta == "si"){
			cout << "Trompetas, saxos y trombones pertenecen al grupo de los...?\n";
			cin >> respuesta;
			if (respuesta == "vientos"){
				puntaje ++;
				cout << "Correcto, tu puntaje es: " << puntaje;
			}
			else{
				cout << "Incorrecto, tu puntaje es: " << puntaje;
			}
			cout << "\nQueres continuar?\n";
			cin >> respuesta;
			if (respuesta == "si"){
				cout << "Un contrabajo es un instrumento acustico o electrico?\n";
				cin >> respuesta;
				if (respuesta == "acustico"){
					puntaje ++;
					cout << "Correcto, tu puntaje es: " << puntaje;
				}
				else{
					cout << "Incorrecto, tu puntaje es: " << puntaje;
				}
				cout << "\nGanaste esta etapa! Segui con otra categoria!\n";
			}
		}		
	}
	if (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4){
		cout << "Error.\n";
		
	}
	}while (opcion == 1 || opcion == 2 || opcion == 3);
}
