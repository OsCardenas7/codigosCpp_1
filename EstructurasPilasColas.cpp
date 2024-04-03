#include <iostream>
#include <stack>
#include <queue>

#define Tam 100

using namespace std;

struct Pila 
{
    int datos[Tam];
    int indiceP;
};

struct Cola 
{
    int datos[Tam];
    int frente;
    int indiceC;
};

void inicializarPila(Pila &pila) 
{
    pila.indiceP = -1;
}

void ingresarPila(Pila &pila, int dato) 
{
    if (pila.indiceP < Tam - 1) 
    {
        pila.datos[++pila.indiceP] = dato;
        cout << "Se ha ingresdado el dato "<< dato <<"en la Pila\n";
    } else 
    {
        cout << "Pila llena.\n";
    }
}

int recuperarPila(Pila &pila) 
{
    if (pila.indiceP >= 0) 
    {
        int dato = pila.datos[pila.indiceP--];
        cout << "Dato recuperado de la pila: " << dato << "\n";
        return dato;
    } else 
    {
        cout << "Pila vacia.\n";
        return -1;
    }
}

void inicializarCola(Cola &cola) 
{
    cola.frente = 0;
    cola.indiceC = -1;
}

void ingresarCola(Cola &cola, int dato) 
{
    if (cola.indiceC < Tam - 1) 
    {
        cola.datos[++cola.indiceC] = dato;
        cout << "Se ha ingresado el dato "<< dato << " en la cola.\n";
    } else 
    {
        cout << "Cola llena.\n";
    }
}

int recuperarCola(Cola &cola)
{
    if (cola.frente <= cola.indiceC) 
    {
        int dato = cola.datos[cola.frente++];
        cout << "Dato recuperado de la cola: " << dato << "\n";
        return dato;
    } else 
    {
        cout << "Cola vacia\n";
        return -1;
    }
}

int main() 
{
    Pila pila1;
    Cola cola1;
    inicializarPila(pila1);
    inicializarCola(cola1);
    int op;

    cout<<"Actividad Pilas y Colas\n";

    while (true) 
    {
        cout << "\nMenu Principal\n";
        cout << "1 - Pilas\n";
        cout << "2 - Colas\n";
        cout << "3 - Salir\n";
        cout << "Digite una opcion: ";
        cin >> op;
        switch (op) 
        {
            case 1:
                while (true) 
                {
                    cout << "\nMenu Pilas\n";
                    cout << "1. Ingresar\n";
                    cout << "2. Recuperar\n";
                    cout << "3. Regresar\n";
                    cout << "Digite una opcion: ";
                    cin >> op;

                    switch (op) 
                    {
                        case 1:
                            int dato;
                            cout << "Ingrese un dato -> ";
                            cin >> dato;
                            ingresarPila(pila1, dato);
                            break;
                        case 2:
                            recuperarPila(pila1);
                            break;
                        case 3:
                            break;
                        default:
                            cout << "Opción no válida.\n";
                    }
                }
                break;
            case 2:
                while (true) 
                {
                    cout << "\nMenu Colas\n";
                    cout << "1. Ingresar\n";
                    cout << "2. Recuperar\n";
                    cout << "3. Regresar\n";
                    cout << "Digite una opcion: ";
                    cin >> op;

                    switch (op) 
                    {
                        case 1:
                            int dato;
                            cout << "Ingrese un dato -> ";
                            cin >> dato;
                            ingresarCola(cola1, dato);
                            break;
                        case 2:
                            recuperarCola(cola1);
                            break;
                        case 3:
                            break;
                        default:
                            cout << "Opción no válida\n";
                    }
                }
                break;
            case 3:
                cout << "Cerrando\n";
                return 0;
            default:
                cout << "Digitar una opcion valida\n";
        }
    }

    return 0;
}


//Link explicación del código en vídeo: https://youtu.be/1p31zSC3Rh4