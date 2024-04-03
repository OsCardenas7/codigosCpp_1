#include <iostream>
using namespace std;

int obtenerValorIndicadorMes(int indicadorMes) {
	switch (indicadorMes) {
	case 1: return 6;
	case 2: return 2;
	case 3: return 2;
	case 4: return 5;
	case 5: return 0;
	case 6: return 3;
	case 7: return 5;
	case 8: return 1;
	case 9: return 4;
	case 10: return 6;
	case 11: return 2;
	case 12: return 4;
	default: return 0;
	}
}

int DiaSemana(int dia, int indicadorMes) {
	int suma = dia + obtenerValorIndicadorMes(indicadorMes);
	int diaSemana = suma % 7;
	return diaSemana;
}

string NombreDia(int dia) {
	static const string diasSemana[] = {"Domingo", "Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado"};
	return diasSemana[dia];
}

int main() {
	while (true) {
		int dNac, mNac, aNac;
		int dAct, mAct, aAct;
		int indicadorMesNac, diasMesPasado;
		
		//Fecha de nacimiento
		cout << "Ingrese la fecha de nacimiento:" << endl;
		cout << "Día: ";
		cin >> dNac;
		cout << "Mes: ";
		cin >> mNac;
		cout << "Año: ";
		cin >> aNac;
		
		//Fecha actual
		cout << "Ingrese la fecha actual:" << endl;
		cout << "Día: ";
		cin >> dAct;
		cout << "Mes: ";
		cin >> mAct;
		cout << "Año: ";
		cin >> aAct;
		
		cout << "Ingrese la cantidad de días que hubo el mes pasado: ";
		cin >> diasMesPasado;
		
		cout << "Ingrese el indicador de mes de Nacimiento (1-12): ";
		cin >> indicadorMesNac;
		
		int edadA, edadM, edadD;
		
		if (aNac > aAct ||(aNac == aAct && (mNac > mAct || (mNac == mAct && dNac > dAct)))) {
			edadA = aAct - aNac - 1;
			edadM = 12 - mNac + mAct - 1;
			edadD = diasMesPasado - dNac + dAct;
		} else {
				edadA = aAct - aNac;
				edadM = mAct - mNac;
				if (dAct >= dNac) {
					edadD = dAct - dNac;
				} else {
					edadM--;
					edadD = diasMesPasado - dNac + dAct;
				}
			}
			
			cout << "Edad actual: " << edadA << " años, " << edadM << " meses, " << edadD << " días." << endl;
			cout << "Día de la semana de nacimiento: " << NombreDia(DiaSemana(dNac, indicadorMesNac)) << endl;
			
			char opcion;
			cout << "¿Desea calcular con otra fecha de nacimiento? (S/N): ";
			cin >> opcion;
			
			if (opcion != 'S' && opcion != 's') {
				break;
			}
	}
	
	return 0;
}


//Link vídeo explicativo: https://youtu.be/GEUupDPHAQY
