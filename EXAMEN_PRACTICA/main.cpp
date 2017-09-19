#include <iostream>
#include <string>

using namespace std;
////////////////////////////////////////////////////////////////EJERCICIO 1////////////////////////////////////////////////////////////////
//Implementar un programa que imprima el contenido de un arreglo de dos dimenciones de forma espiral.
//Por ejemplo, suponga que el arreglo contiene los siguientes valores:
//1  2  3  4  5  6
//7  8  9  10 11 12
//13 14 15 16 17 18
//19 20 21 22 23 24
//La salida del programa debe ser:
//1 2 3 4 5 6 12 18 24 23 22 21 20 19 13 7 8 9 10 11 17 16 15 14

int main()
{
    int tam1=4;
    int tam2=6;
    int arr[][]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24}};
    for(int x=0;x<tam1;x++)
    {
        for(int y=0;y<tam2;y++)
        {
            cout<<arr[x][y]<<" ";
            if(x>=1)
            {
                cout<<arr[x][tam2-1]<<" ";
            }
        }
    }

}
/*
////////////////////////////////////////////////////////////////EJERCICIO 1////////////////////////////////////////////////////////////////
//Implemente una función recursiva que reciba un arreglo de enteros y su tamaño y retorne
//la suma de los elementos del arreglo.

int suma(const int arr[],int tam,int res=0)
{
    if(tam==0)
    {
        return res;
    }
    res=res+arr[tam-1];
    return suma(arr,tam-1,res);
}

int main()
{
    int tam=5;
    int arr[]={1,3,4,12,3};
    cout<<suma(arr,tam);
}

////////////////////////////////////////////////////////////////EJERCICIO 2////////////////////////////////////////////////////////////////
//Implementar una funcion que reciba un arreglo de enteros y su tamaño e invierta los elementos de dicho arreglo
//Antes: [1,2,3,4,5]
//Despues: [5,4,3,2,1]

int invertir(int arr[],int tam)
{
    int aux=tam-1;
    for(int x=0;x<(tam/2);x++)
    {
        int val=0;
        val=arr[x];
        arr[x]=arr[aux];
        arr[aux]=val;
        aux=aux-1;
    }
}

int main()
{
    int tam=7;
    int arr[]={10,2,3,40,5,6,700};
    invertir(arr,tam);
    for(int y=0;y<tam;y++)
    {
        cout<<arr[y];
    }
}

////////////////////////////////////////////////////////////////EJERCICIO 3////////////////////////////////////////////////////////////////
//Repita el ejercicio anterior usando recursividad.

int invertir(int arr[],int tam,int aux,int cont=0)
{
    if(cont<(tam/2))
    {
        int val=0;
        val=arr[cont];
        arr[cont]=arr[aux];
        arr[aux]=val;
        return invertir(arr,tam,aux=aux-1,cont=cont+1);
    }
}

int main()
{
    int tam=6;
    int arr[]={10,2,3,40,5,6};
    int aux=tam-1;
    invertir(arr,tam,aux);
    for(int y=0;y<tam;y++)
    {
        cout<<arr[y];
    }
}

////////////////////////////////////////////////////////////////EJERCICIO 4////////////////////////////////////////////////////////////////
//Implementar un programa que lea por teclado un numero de cadena y las imprima en orden inverso usando recursividad.
//ARREGLO DE STRINGS.

int invertir(char* arr[],int tam,int aux,int cont=0)
{
    if(cont<(tam/2))
    {
        char* val;
        val=arr[cont];
        arr[cont]=arr[aux];
        arr[aux]=val;
        return invertir(arr,tam,aux=aux-1,cont=cont+1);
    }
}

int main()
{
    int tam=4;
    char* arr[]={"HOLA","HELLO","SALUT","HI"};
    for(int y=0;y<tam;y++)
    {
        cout<<arr[y]<<endl;
    }
    cout<<" "<<endl;
    int aux=tam-1;
    invertir(arr,tam,aux);
    for(int y=0;y<tam;y++)
    {
        cout<<arr[y]<<endl;
    }
}

*/
