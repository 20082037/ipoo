#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int numero=0;

    cout <<"Ingrese un numero: "<<endl;
    cin>>numero;

    if(numero<=500 and numero>=50){
        cout<<"Ganaste"<<endl;
    }
    else{
        //printf("Perdiste");
        cout<<"Perdiste"<<endl;
    }

    int numero1=0;

    cout <<"Ingrese un numero:"<<endl;
    cin>>numero1;

    while(numero1!=0){

        int contador=0;

        for(int i=1;i<numero1;i++){
            if(numero1%i==0){
                contador+=1;
            }
        }

        if(contador>2){
            cout<<"El numero no es primo"<<endl;
        }
        else{
            cout<<"El numero es primo"<<endl;
        }
        cout <<"Ingrese un numero: "<<endl;
            cin>>numero1;
    }
    return 0;
}
