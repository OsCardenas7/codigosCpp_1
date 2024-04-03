#include <iostream>
#include <string>
using namespace std;

class Autor {
public:
	string Nombre;
	string Nacionalidad;
	
	Autor() : Nombre("Sin nombre"), Nacionalidad("NN") {}
	
	Autor(const string& nombre, const string& nacionalidad)
		: Nombre(nombre), Nacionalidad(nacionalidad) {}
	
	void MostrarInformacion() const {
		cout << "Autor: " << Nombre << "\n";
		cout << "Nacionalidad: " << Nacionalidad << "\n";
	}
};

class Libro : public Autor {
public:
	string Titulo;
	int Publicacion;
	Libro() : Titulo("Sin titulo"), Publicacion(0) {}
	
	Libro(const string& tituloL, int publicacionL, const string& nombreA, const string& nacionalidadA)
		: Titulo(tituloL), Publicacion(publicacionL), Autor(nombreA, nacionalidadA) {}
	
	void MostrarInformacion() const {
		cout << "Título del libro: " << Titulo << "\n";
		cout << "Publicación: " << Publicacion << "\n";
		Autor::MostrarInformacion();
	}
};

void IngresarDatos(Libro& libro) {
	string tituloL, nombreA, nacionalidadA;
	int PublicacionL;
	
	cout << "Ingrese el título del libro: ";
	getline(cin, tituloL);
	
	cout << "Ingrese el año de publicación del libro: ";
	cin >> PublicacionL;
	cin.ignore();
	
	cout << "Ingrese el nombre del autor: ";
	getline(cin, nombreA);
	
	cout << "Ingrese la nacionalidad del autor: ";
	getline(cin, nacionalidadA);
	
	libro = Libro(tituloL, PublicacionL, nombreA, nacionalidadA);
}

int main() {
	Libro libro;
	cout << "\nInformación del Libro (antes de ingresar datos):\n";
	libro.MostrarInformacion();
	

	IngresarDatos(libro);
	

	cout << "\nInformación del Libro (después de ingresar datos):\n";
	libro.MostrarInformacion();
	
	return 0;
}


//Link del vídeo de explicación: https://youtu.be/JiS9HOfYxH0
