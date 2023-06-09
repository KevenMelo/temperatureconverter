
#include <stdio.h>

int main()
{
    float inputTemp;

    printf("Digite a temperatura para conversao\n");
    scanf("%f", &inputTemp);
    float kelvin = inputTemp + 273.15;
    float fahrenheit = (inputTemp * 1.8) + 32;
    printf("A temperatura em Kelvin e: %.2f Kelvin\n", kelvin);
    printf("A temperatura em fahrenheit e: %.2f Fahrenheit\n", fahrenheit);
}