#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const string input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-*/{}$%&#@!¡<>()";

string generarPass(int k)
{
    string Pass = "";
    for(int i=0; i<k; i++)
    {
        Pass.push_back(input[rand() % input.length()]);
    }
    return Pass;
}

int main()
{
    ios::sync_with_stdio(0);
    srand(time(0));
    int lon;
    cout<<"Generador de Passwords\n";

    do
    {
        cout<<"Digite la longitud (minimo 8) para la nueva Password: ";
        cin>>lon;
        if(lon < 8)
        {
            cout<<"Longitud muy baja, digitar un valor mas alto para la contrasena\n";
        }
    }while(lon < 8);

    cout<<"Su contrasena generada es: "<< generarPass(lon) <<"\n";
    
    return 0;
}