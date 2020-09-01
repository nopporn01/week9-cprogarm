
#include<stdio.h>
int main(){
    int testInterger;
    float num1;
    double num2;

    printf("Enter an integer: ");
    scanf("%d",&testInterger);

    printf("Enter a num1:");
    scanf("%f",&num1);

    printf("Enter a num2:");
    scanf("%lf,&num2");

    printf("Number = %d\n",testInterger);
    printf("num1 = %.2f",num1);
    printf("num2 = %1f",num2);
}
