// lea dos valores B y C, calcular los valores de la siguiente expresión
// A = 2 + B + C

#include<iostream>

int main(){
    int valorB;
    int valorC;
    int valorA_resultado;

    std::cout<<"Ingrese el primer valor";
    std::cin>>valorB;

    std::cout<<"Ingrese el segundo valor";
    std::cin>>valorC;

    valorA_resultado = 2 + valorB + valorC;

    std::cout<<" 2 " + " + "+valorB+" + "+valorC+" = ";

    return 0;
}