#include <stdio.h>
int main()
{
    float basicSalary;
    float housing;
    float transport;
    float tax;
    float grossSalary;
    float netSalary;

    printf("Enter basic salary:\n");
    scanf("%f", &basicSalary);

    printf("Enter housing allowance:\n");
    scanf("%f", &housing);

    printf("Enter transport allowance:\n");
    scanf("%f", &transport);

    printf("Enter tax:\n");
    scanf("%f", &tax);

    grossSalary = basicSalary + housing + transport;
    netSalary = grossSalary - tax;

    printf("\nGross Salary: %.2f\n",grossSalary);
    printf("Net Salary: %.2f\n", netSalary);


    return 0;
}