#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)
int main(void)
{
    float fahrenheit, celsius;
    printf("Enter a temperature in Fahrenhiet: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit- FREEZING_PT) * SCALE_FACTOR;
    printf("Equivalent in Celsius: %.1f\n", celsius);
    return 0;
}
