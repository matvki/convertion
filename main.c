#include <stdio.h>
#include <stdlib.h>

void main(){
    double conversion;
    int conversionType;
    double value;

    printf("%s", "1: Dollars vers Euros, 2: Euros vers Dollars \n");
    scanf("%i", &conversionType);
    printf("%s", "Valeur a convertir \n");
    scanf("%lf", &value);
    printf("\n");

    switch (conversionType) {

        case 1:
            conversion = 0.86273388**&value;
            printf("%lf", conversion);
            printf("%s", " euros");
            printf("\n");
            break;

        case 2:
            conversion = 1.15902**&value;
            printf("%lf", conversion);
            printf("%s", " dollars\n");
            printf("\n");
            break;

        default:
            printf("%s", "Choisir un type de conversion valable\n");
    }
}