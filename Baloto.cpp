#include <iostream>

using namespace std;

class ElBaloto {
public:
	ElBaloto() {
		for (int i = 0; i < 5; i++) {
			baloto[i] = 1+rand()%((43+1)-1);
		}
		balotaMagica = 1+rand()%((16+1)-1);
	}
	
	void MostrarBaloto() {
		cout << "N�meros del Baloto: ";
		for (int i = 0; i < 5; i++) {
			cout << baloto[i];
			if (i < 4) {
				cout << ", ";
			}
		}
		cout << "\nBalota Adicional: " << baloto << "\n";
	}
	
	int CalcularNumeroMagia() {
		int NumeroMagico = 0;
		for (int i = 0; i < 5; i++) {
			NumeroMagico += baloto[i];
		}
		NumeroMagico += balotaMagica;
		return NumeroMagico;
	}
	
private:
		int baloto[5];
		int balotaMagica;
};

int main() {
	ElBaloto juego;
	bool control = 1;
	while (control) {
		int op;
		cout << "Men� Principal\n";
		cout << "1. Ver n�meros del Baloto\n";
		cout << "2. Ver n�mero m�gico\n";
		cout << "3. Salir\n";
		cout << "Elija una opci�n: ";
		cin >> op;
		int NumeroMagico;
		
		switch (op) {
		case 1:
			juego.MostrarBaloto();
			break;
		case 2:
			NumeroMagico = juego.CalcularNumeroMagia();
			cout << "N�mero M�gico: " << NumeroMagico << endl;
			break;
		case 3:
			cout << "Saliendo del juego del Baloto." << endl;
			control = 0;
		default:
			cout << "Elegir una opci�n v�lida\n";
		}
	}
	
	return 0;
}


//Link v�deo explicaci�n: https://youtu.be/t9KV4Y3yfko 
