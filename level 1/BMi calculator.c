#include<stdio.h>
#include<windows.h>
#include<math.h>
int main()
{
    float weightkg,weightlb,heightin;
    float heightm;
    printf("NOte!!!\n");
    printf("\t");
    printf("1)If you enter your weight in kg then, you must enter your height in metre\n");
    printf("\t");
    printf("2)If you enter your weight in Lb then, you must enter you height in Ln");



    // for weight
    int n;
    printf("\n\n");
    printf("Enter your weight:\n\n");
    printf("1) for your weight in KG\t");Sleep(250);
    printf("2) for your weight in Lb\n\n");
    printf("Enter your choice: ");
    scanf("%d",&n);

    switch(n){
    case 1:
        printf("Enter your weight in kg:");
        scanf("%f",&weightkg);
        break;

    case 2:
        printf("Enter your weight in Lb:");
        scanf("%f",&weightlb);
        break;

    default:
        printf(" Wrong input by user");
    }

    //for height
    int m;
    printf("\n\n");
    printf("Enter your height:\n\n");
    printf("1) for your height in metre\t");Sleep(250);
    printf("2) for your height in In\n\n");
    printf("Enter your choice: ");
    scanf("%d",&m);

    switch(m){
    case 1:
        printf("Enter your height in metre:");
        scanf("%f",&heightm);
        break;

    case 2:
        printf("Enter your height in In:");
        scanf("%f",&heightin);
        break;

    default:
        printf(" Wrong input by user");
    }

    //calculating BMI
    int b;
    float BMI_Imperial,BMI_Metric;
    printf("\n\n");
    printf("1) For calculating your BMI(in Lb and In)\t");
    printf("2) For calculating your BMI(Kg and metre)\n\n");
    printf("Enter your choice: ");
    scanf("%d",&b);

    switch (b){
    case 1:
        float l;
        l=pow(heightin,2);
        BMI_Imperial= (703*weightlb)/l;
        printf("Your Imperial BMI is %fKg/m^2",BMI_Imperial);
        break;

    case 2:
        float k;
        k=pow(heightm,2);
        BMI_Metric= weightkg/k;
        printf("Your Metric BMI id %fKg/m^2",BMI_Metric);
        break;

    default:
        printf("NOT VALID!!");
    }
}
