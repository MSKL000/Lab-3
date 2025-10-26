#include <stdio.h>

int main(void) {
    float kg, m, bmi;
    const char *category;

    printf("Enter weight in kg: ");
    scanf("%f", &kg);
    printf("Enter height in meters: ");
    scanf("%f", &m);

    bmi = kg / (m * m);

    if (bmi < 18.5)
        category = "Underweight";
    else if (bmi < 25.0)
        category = "Normal weight";
    else if (bmi < 30.0)
        category = "Overweight";
    else
        category = "Obesity";

    printf("BMI = %.1f, Category: %s\n", bmi, category);
    return 0;
}
