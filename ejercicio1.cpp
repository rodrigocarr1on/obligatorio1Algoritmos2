#include <cassert>
#include <string>
#include <iostream>
#include <limits>
#include "tads/AVL.h"
#include <algorithm>
using namespace std;


AVL<long long> monedas;
AVL<string> pinturas;


void alta(char tipo, string id){
    if(tipo=='M'){
        long long n=stoll(id);
        monedas.insertar(n);
    }else{
        pinturas.insertar(id);
    }
}

void buscar(char tipo, string id){
    if(tipo=='M'){
        long long n=stoll(id);
        if(monedas.existe(n)){cout <<"si"<<endl;}else{cout<<"no"<<endl;}
    }
    if(tipo=='P'){
        if(pinturas.existe(id)){cout <<"si"<<endl;}else{cout<<"no"<<endl;}
    }
}

void rango(char tipo, string desde, string hasta){
    if(tipo=='M'){
        long long d = stoll(desde);
        long long h = stoll(hasta);
        monedas.inOrderRango(d, h);
    }else{
        pinturas.inOrderRango(desde,hasta);
    }
}




int main()
{

    int N;
    cin>>N;
    for(int i=0; i<N;i++){
        string operacion;
        char tipo;

        cin>>operacion>>tipo;

        if(operacion=="ALTA"){
            string id;
            cin>>id;
            alta(tipo,id);
        }
        else if(operacion=="BUSCAR"){
            string id;
            cin>>id;
            buscar(tipo,id);
        }
        else if(operacion=="RANGO"){
            string desde;
            string hasta;
            cin >>desde>>hasta;
            rango(tipo,desde,hasta);
        }
    }

    return 0;
}

