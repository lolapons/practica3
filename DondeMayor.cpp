/*
------------------------------------------------
//Practica3: dondeEstaElMayor()
// Autor: Lola Pons     
// Fecha: Miercoles 21 de octubre 2021
------------------------------------------------
*/

#include <iostream>

/*
--------------------------------------------
Lista<reales>
int n
->
    dondeEstaElMayor()
<-
int 
---------------------------------------------
*/

int dondeEstaElMayor(double *lista, int n){
    int sol=0;
    double x=-1000000000;
    for(int i=0; i<n; i++){
        if(lista[i]>x){
            x=lista[i];
            sol=i;
        }
    }
    return sol+1;

}


/*
-------------------------------
main()
-------------------------------
*/

int main (){
    int n;
    int solucion;

    std::cout<<"¿De cuantos numeros quiere que sea la lista? \n";
    std::cin>>n;

double lista[n];

for(int i=0; i<n; i++){
    double x;
    std::cout<<"Introduce un numero: \n";
    std::cin>>x;
    lista[i]=x;

}
solucion=dondeEstaElMayor(& lista[0], n);
std::cout<<"La posicion del numero mas grande es: "<<solucion<<std::endl;

return 0;
}