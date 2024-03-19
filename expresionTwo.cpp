//Lea un valor B. evaluar A=B+10; C=A+B; D=C-A+5; E=A+B+C+D

#include<iostream>
using namespace std;

int main(){
    int valorB;
    int resultadoA; 
    int resultadoC; 
    int resultadoD; 
    int resultadoE;

    cout<<"Ingrese un valor ";
    cin>>valorB;
    
    resultadoA = valorB + 10;
    cout<< resultadoA <<" = " << valorB << " + 10" <<endl;

    resultadoC = resultadoA + valorB;
    cout<< resultadoC <<" = " << resultadoA << " + " << valorB <<endl;

    resultadoD = resultadoC - resultadoA + 5;
    cout<< resultadoD << " = " << resultadoC << " - " << resultadoA << " + 5" <<endl;

    resultadoE = resultadoA + valorB + resultadoC + resultadoD;
    cout<< resultadoE << " = " << resultadoA << " + " << valorB << " + " << resultadoC << " + " << resultadoD <<endl;

    return 0;
}