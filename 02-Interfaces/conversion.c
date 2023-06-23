//funcion conversion
#include "conversion.h"

double fahrenheit(double celsius){
    return (celsius * 9.0/5.0) + 32.0;
}

double celsius(double fahr){
    return (fahr - 32.0) * (5.0/9.0);
}