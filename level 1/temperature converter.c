#include<stdio.h>
#include<windows.h>
int main()
{
    float temperature;
    printf("Enter the temperature, you want to convert into other unit: ");
    scanf("%f",&temperature);

    int n;
    printf(" 1)celsius to fahrenheit\t"); Sleep(250);
    printf(" 2)fahrenheit to celsius\n"); Sleep(250);
    printf(" 3)celsius to kelvin\t\t"); Sleep(250);
    printf(" 4)kelvin to celsius\n"); Sleep(250);
    printf(" 5)fahrenheit to celsius\t"); Sleep(250);
    printf(" 6)kelvin to fahrenheit\n"); Sleep(250);
    
    scanf("%d",&n);

    switch (n){
        case 1:
            float f;
            f=(temperature*(9.0/5)+32);
            printf("Temperature in fahrenheit is %.2f",f);
            break;

        case 2:
            float C;
            C=(temperature-32)*(5.0/9);
            printf("Temperature in Celsius  is %.2f",C);
            break;

        case 3:
            float K;
            K=temperature+273.15;
            printf("Temperature in Kelvin is %.2f",K);
            break;

        case 4:
            float c;
            c=temperature-273.15;
            printf("Temperature in Celsius is %.2f",c);
            break;

        case 5:
            float k;
            k=(temperature-32)*(5.0/9)+273.15;
            printf("Temperature in Kelvin is %.2f",k);
            break;

        case 6:
            float F;
            F=(temperature-273.15)*(9.0/5)+32;
            printf("Temperature in Fahrenheit is %.2f",F);
            break;

        default:
            printf("invalid input by user");
    }
}