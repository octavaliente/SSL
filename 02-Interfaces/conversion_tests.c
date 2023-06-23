#include <assert.h>
#include "conversion.h"

int main (void){
    assert(fahrenheit(100)==fahrenheit(celsius(fahrenheit(100))));
    assert(celsius(100)==celsius(fahrenheit(celsius(100))));
    return 0;
}