#include <stdio.h>
#define toKelvin(a) a + 273
#define toFahrenheit(a) (a*9/5)+32

void main(){
    int celsius = 0, time;
    
    celsius += 20;
    printf("Value in Kelvin is: %d and Value in Fahrenheit is: %d\n", toKelvin(celsius), toFahrenheit(celsius));

    celsius += 20;
    printf("Value in Kelvin is: %d and Value in Fahrenheit is: %d\n", toKelvin(celsius), toFahrenheit(celsius));

    celsius += 20;
    printf("Value in Kelvin is: %d and Value in Fahrenheit is: %d\n", toKelvin(celsius), toFahrenheit(celsius));

    celsius += 20;
    printf("Value in Kelvin is: %d and Value in Fahrenheit is: %d\n", toKelvin(celsius), toFahrenheit(celsius));

    celsius += 20;
    printf("Value in Kelvin is: %d and Value in Fahrenheit is: %d\n", toKelvin(celsius), toFahrenheit(celsius));
}
