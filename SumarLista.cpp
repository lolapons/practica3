/*
------------------------------------------------
//Practica3: sumarLista()
// Autor: Lola Pons     
// Fecha: Miercoles 20 de octubre 2021
------------------------------------------------
*/

#include <iostream>

/*
--------------------------------------------
Lista<enteros>
int n
->
    sumarLista()
<-
double
---------------------------------------------
*/

double sumarLista(int *lista, int n){
    double solucion=0;
    for(int i=0; i<n; i++){
  solucion=solucion+lista[i];
  
  }
  return solucion;

}

/*
-------------------------------
main()
-------------------------------
*/

int main (){
    int n;
    double solucion;

    std::cout<<"¿Cuantos numeros quieres sumar? \n";
    std::cin>>n;

  int lista[n];

  for(int i=0; i<n; i++){
    int x;
    std::cout<<"Introduce un numero: \n";
    std::cin>>x;
    lista[i]=x;

  }

solucion=sumarLista(&lista[0], n);
std::cout<<"La solucion es: ";
std::cout<< solucion<<std::endl;

return 0;

}


