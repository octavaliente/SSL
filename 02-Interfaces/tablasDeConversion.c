#include <stdio.h>
#include "conversion.h"

void printTablaCelsius (int, int, int);
void printTablaFahrenheit(int,int,int);
void printFilas(int, int, int, char[]);
void printFila (double, double);

int main (){

double fahr, gradosC;

const int LOWERG = 0; 
const int UPPERG = 300; 
const int STEPG  = 20; 

printTablaCelsius(LOWERG,UPPERG,STEPG);

const int LOWERF = 32;
const int UPPERF = 572;
const int STEPF = 36; // Mismo salto

printTablaFahrenheit(LOWERF,UPPERF,STEPF);

return 0;
}

void printTablaCelsius (int lower, int upper, int step){
    printf("Tabla Celsius a Farenheit:\n");
    printf("Celsius\t\tFarenheit\n");
    printFilas(lower, upper, step, "Celsius");
    return;
}

void printTablaFahrenheit (int lower, int upper, int step){
    printf("Tabla Farenheit a Celsius:\n");
    printf("Farenheit\t\tCelsius\n");
    printFilas(lower, upper, step, "Farenheit");
    return;
}

void printFilas(int lower, int upper, int step,char tipo[]){
    if(tipo == "Celsius"){
        for (double grados = lower; grados <= upper ; grados += step){
            printFila(grados,fahrenheit(grados));
            grados = grados + step;
        }
    }
    if (tipo == "Farenheit"){
        for (double grados = lower; grados <= upper ; grados += step){
            printFila(grados,celsius(grados));
        }
    }
    return;
}

void printFila (double a, double b){
    printf("%.1f\t\t%.2f\n",a,b);
    return;
}