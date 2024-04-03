#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int Maximo = 0;
int Minimo = 0;

int arreglo[5];

int F4(int x1, int x2)
{
    return (x1+x2)*20;
}

void F3(int x)
{
    if(x%2==0)
        cout<<"El Cuadrado del numero :"<<x<<" es "<<pow(x,2)<<'\n';
    if(x%2==1)
        cout<<"El Cubo del numero :"<<x<<" es "<<pow(x,3)<<'\n';
}

void F2(int z)
{
    int a[5];

    for(int i=0;i<5;i++)
    {
        a[i]=(100*(i+1))+z;
    }

    cout<<"Arreglo F2:\n";

    for(int x : a)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    int sumPos = arreglo[0] + arreglo[4];
    cout<<"La suma del primer numero del arreglo y ultimo numero del arreglo es : "<<sumPos<<'\n';
    F3(sumPos);
}

void F1()
{
    for(int i=0;i<5;i++)
    {
        arreglo[i]=Minimo+rand()%((Maximo+1)-Minimo);
    }

    cout<<"Arreglo F1:\n";

    for(int x : arreglo)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    int min = INT_MAX, max = INT_MIN;
    for (int i: arreglo)
    {
        if (i < min) {
            min = i;
        }
 
        if (i > max) {
            max = i;
        }
    }

    cout<<"El valor Mayor del arreglo es: "<<max<<'\n';
    cout<<"El valor Minimo del arreglo es: "<<min<<'\n';

    int sumaResto = 0;

    for(int x : arreglo)
    {
        sumaResto+=x;
    }

    sumaResto -=(min+max);

    F2(max);

    cout<<"Resultado de la suma del resto del arreglo F1: "<<sumaResto<<'\n';
    cout<<"Resultado de la F4: "<<F4(min,sumaResto)<<'\n';
}

int main()
{
    cout<<"Ingresar un valor Minimo:\n";
    cin>>Minimo;
    cout<<"Ingresar un valor Maximo:\n";
    cin>>Maximo;

    F1();
    return 0;
}

//Explicación del código en Vídeo: https://youtu.be/bpRi-P1OR1k