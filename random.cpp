#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int randomizar(int i, int l)
{
    int r = i + rand() % ((l + 1) - i);
    return r;
}

int main()
{
    ios::sync_with_stdio(0);
    srand(time(0));
    int l1, l2;
    bool flag = 1;
    do
    {
        cout<<"NUMERO RANDOM\n";
        cout<<"Escribir el valor minimo del rango a escoger: ";
        cin>>l1;
        cout<<"Escribir el valor maximo del rango a escoger: ";
        cin>>l2;
        if(l1>l2)
        {
            cout<<"El numero minimo es mayor al numero maximo, volver a escribir los valoes por favor\n\n";
            flag = 0;
        }else
        {
            flag = 1;
        }
            
    }while(!flag);
    
    cout<<"\nCargando..."<<endl;
    
    Sleep(5000);

    cout<<"\nNumero seleccionado es : "<< randomizar(l1,l2) <<"\n";

    return 0;
}