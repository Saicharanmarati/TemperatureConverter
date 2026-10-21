#include <stdio.h>

int main()
{
    int choice;
    float temp, result;

    printf("===== TEMPERATURE CONVERTER =====\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");

    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%f", &temp);

    switch (choice)
    {
        case 1:
            result = (temp * 9.0 / 5.0) + 32;
            printf("Temperature = %.2f Fahrenheit\n", result);
            break;

        case 2:
            result = (temp - 32) * 5.0 / 9.0;
            printf("Temperature = %.2f Celsius\n", result);
            break;

        case 3:
            result = temp + 273.15;
            printf("Temperature = %.2f Kelvin\n", result);
            break;

        case 4:
            result = temp - 273.15;
            printf("Temperature = %.2f Celsius\n", result);
            break;

        case 5:
            result = (temp - 32) * 5.0 / 9.0 + 273.15;
            printf("Temperature = %.2f Kelvin\n", result);
            break;

        case 6:
            result = (temp - 273.15) * 9.0 / 5.0 + 32;
            printf("Temperature = %.2f Fahrenheit\n", result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}