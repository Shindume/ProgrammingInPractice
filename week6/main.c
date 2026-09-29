#include <stdio.h>
#include <string.h>

int main() {

    printf("=== PART A: EMPLOYEE SALARIES ===\n");
    

    float salaries[50];
    float totalSalaries = 0;
    float averageSalary;
    float highestSalary, lowestSalary;

    for (int i = 0; i < 50; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    
    highestSalary = salaries[0];
    lowestSalary = salaries[0];


    for (int i = 0; i < 50; i++) {
        totalSalaries = totalSalaries + salaries[i];

        if (salaries[i] > highestSalary) {
            highestSalary = salaries[i];
        }
        if (salaries[i] < lowestSalary) {
            lowestSalary = salaries[i];
        }
    }


    averageSalary = totalSalaries / 50;


    printf("\n--- Captured Salaries ---\n");
    for (int i = 0; i < 50; i++) {
        printf("Employee %d: $%.2f\n", i + 1, salaries[i]);
    }

    
    printf("\n--- Salary Report ---\n");
    printf("Average Salary: $%.2f\n", averageSalary);
    printf("Highest Salary: $%.2f\n", highestSalary);
    printf("Lowest Salary: $%.2f\n", lowestSalary);

    float searchSalary;
    int salaryFound = 0;

    printf("\nEnter a salary to search for: ");
    scanf("%f", &searchSalary);

    for (int i = 0; i < 50; i++) {
        if (salaries[i] == searchSalary) {
            printf("Salary $%.2f found at employee position %d.\n", searchSalary, i + 1);
            salaryFound = 1;
            break; // Stop loop when found[cite: 1]
        }
    }

    if (!salaryFound) {
        printf("Salary $%.2f not found.\n", searchSalary);
    }


    
    printf("\n\n=== PART B: DEPARTMENT BUDGETS ===\n");


    float budgets[10];
    float totalBudget = 0;
    float averageBudget;

    
    for (int i = 0; i < 10; i++) {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);
    }


    printf("\n--- Department Budgets ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Department %d: $%.2f\n", i + 1, budgets[i]);
        totalBudget = totalBudget + budgets[i];
    }

    averageBudget = totalBudget / 10;

    printf("\nTotal Municipal Budget: $%.2f\n", totalBudget);
    printf("Average Department Budget: $%.2f\n", averageBudget);


    float temp;
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (budgets[j] > budgets[j + 1]) {
                // Swap the values[cite: 1]
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }


    printf("\n--- Budgets Sorted (Lowest to Highest) ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Position %d: $%.2f\n", i + 1, budgets[i]);
    }



    printf("\n\n=== PART C: VEHICLE REGISTRATIONS ===\n");


    char registrations[20][20];


    for (int i = 0; i < 20; i++) {
        printf("Enter registration number %d: ", i + 1);
        scanf("%19s", registrations[i]); 
    }


    printf("\n--- Registered Vehicles ---\n");
    for (int i = 0; i < 20; i++) {
        printf("Vehicle %d: %s\n", i + 1, registrations[i]);
    }


    char searchReg[20];
    int regFound = 0;

    printf("\nEnter a registration number to search for: ");
    scanf("%19s", searchReg);

    for (int i = 0; i < 20; i++) {
    
        if (strcmp(registrations[i], searchReg) == 0) {
            printf("Vehicle registration %s found at position %d.\n", searchReg, i + 1);
            regFound = 1;
            break;
        }
    }

    if (!regFound) {
        printf("Vehicle registration %s not found.\n", searchReg);
    }

    return 0;
}