#include <iostream>
using namespace std;

//popula vetor de forma recursiva
int popula(int po,int tam,int* vet){
    if(po == tam){
        return 0;
    }
    vet[po] = po;
    po++;
    popula(po,tam,vet);
}

//imprime vetor de forma recursiva
int imprime(int po,int tam,int* vet){
    if(po == tam){
        return 0;
    }
    cout<<vet[po]<<endl;
    po++;
    imprime(po,tam,vet);
}

int main() {
    int vet[10];
    popula(0,10,vet);
    imprime(0,10,vet);
    return 0;
}
