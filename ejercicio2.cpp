#include <iostream>

using namespace std;

int ordenar(int [],int);

void imprimir(int []);

int main(){

    int arreglo[10];
    int tamano=0;
    //cout<<arreglo<<endl;

    tamano=sizeof(arreglo)/sizeof(arreglo[0]);

    for(int i=0;i<10;i++){

    cout<< "Ingrese un nuevo valor para el arreglo: "<<endl;
    cin>>arreglo[i];
    }

    imprimir(arreglo);
    ordenar(arreglo,tamano);
    imprimir(arreglo);

    return 0;
}

int ordenar(int arreglo[],int tamano){

    int temp=0;

    for (int i=0;i<(tamano-1);i++){
        for(int j=(i+1);j<tamano;j++){
            if(arreglo[i]>=arreglo[j]){
                temp=arreglo[i];
                arreglo[i]=arreglo[j];
                arreglo[j]=temp;
            }
        }
    }
    return 0;

}

void imprimir(int arreglo[]){

    for(int i=0;i<10;i++){
        cout<<arreglo[i]<<" ";
    }
    cout << endl;
}






