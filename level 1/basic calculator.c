
#include<stdio.h>
#include<math.h>
#include<windows.h>
int main()
{
    float a,b;
    printf("enter any two number: ");
    scanf("%f%f",&a,&b);
     
    printf("Enter 1 for addition\n"); Sleep(250);
    printf("Enter 2 for subtraction\n"); Sleep(250);
    printf("Enter 3 for multiply\n"); Sleep(250);
    printf("Enter 4 for divide\n"); Sleep(250);
    printf("Enter 5 for power\n"); Sleep(250);
    printf("Enter 6 for remainder\n"); Sleep(250);
    
    
    int n;
    scanf("%d",&n);

    switch (n){
        case 1:
            printf("The sum of %.2f and %.2f is %.2f",a,b,a+b);
            break;

        case 2:
            printf("The subtraction of %.2f and %.2f is %.2f",a,b,a-b);
            break;

        case 3:
            printf("The multiply of %.2f and %.2f is %.2f",a,b,(a*b));
            break;

        case 4:
            printf("The divide of %.2f and %.2f is %.2f",a,b,a/b);
            break;

        case 5:
            float d=pow(a,b);
            printf("The power of %.2f to %.2f is %.2f",a,b,d);
            break;

        case 6:
            float f =fmod(a,b);
            printf("The remainder when  %.2f is divided by %.2f is %.2f",a,b,f);
            break;

        default:
            printf("invalid input by user");
    }

    return 0;
}