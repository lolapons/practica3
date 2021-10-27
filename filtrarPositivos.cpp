/*
------------------------------------------------
//Practica3: filtrar()
// Autor: Lola Pons     
// Fecha: Viernes 22 de octubre 2021
------------------------------------------------
*/
#include <iostream>

/*
--------------------------------------------
Lista1<reales>
int n
->
    filtrar()
<-
ListaPositivos<reales>
---------------------------------------------
*/


int filtrarPositivos(double *lista1, double *lista2, int n){
    int cuantos=0;
    for(int i=0;i<n;i++){
        if(lista1[i]>0){
            lista2[cuantos]=lista1[i];
            cuantos++;
        }
    }   

return cuantos; //devolvemos cuantos para luego poder recorrer la lista solucion y/o mostrarlos
}

/*
-------------------------------
main()
-------------------------------
*/


int main(){
    double listaSolucion[1000];
    
    int n;
    std::cout<<"¿Cuantos numeros tiene tu lista? \n";
    std::cin>>n;
    double listaUsuario[n];
    for(int i=0;i<n;i++){
        int a;
        std::cout<<"Introduce un número:  \n";
        std::cin>>a;
        listaUsuario[i]=a;
    }
    int cuantos=filtrarPositivos(&listaUsuario[0],&listaSolucion[0],n);
    std::cout<<"La lista de los positivos es: \n";
    for(int p=0;p<cuantos;p++){
        std::cout<<listaSolucion[p]<<'\n';
    }

}