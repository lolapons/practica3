/*
------------------------------------------------
//Practica3: contiene()
// Autor: Lola Pons     
// Fecha: Viernes 23 de octubre 2021
------------------------------------------------
*/

#include <iostream>

/*
-------------------------------------------
Lista <int>, int n, int a ->
contiene ()->
bool
-------------------------------------------
*/

bool contiene(int *lista, int n, int a){
    for(int i=0; i<a; i++){
        if (lista[i]==n){
            return true;
        }

    }
    return false;
}

/*
-------------------------------
main()
-------------------------------------------
*/

int main(){
    int a=5;
    int n;

    int lista[5]={2,4,6,5,8};
std::cout<<"Busca un número en mi lista\n";
std::cin>>n;
if(contiene(&lista[0], n, a)==true){
    std::cout<<"EL numero esta en la lista."<<std::endl;
}else{
    std::cout<<"EL numero no esta en la lista."<<std::endl;
}
return 0;
}