    #include <stdio.h>
    // BUDGET CALCULATER//

int main(){

    double total_revenue = 0.00;
    double total_expenditures = 0.00;
    int department = 0;
    double payroll = 0.00;
    double procurement = 0.00;
    double assets = 0.00;

    printf("MUNICIPAL BUDGET CALCULATER\n");

    printf("Enter Total Revenue:\n");
    scanf("%lf",&total_revenue);

    printf("Enter Total Expenditures:\n");
    scanf("%lf",&total_expenditures);

    printf("Enter Department:\n");
    scanf("%d",&department);

    printf("Enter Payroll:\n");
    scanf("%lf",&payroll);

    printf("Enter Procurement:\n");
    scanf("%lf",&procurement);

    printf("Enter Assets:\n");
    scanf("%lf",&assets);

    float balance;
    printf("MUNICIPAL FINANCIAL SUMMARY\n");
    printf("---------------------------\n");
    printf("                           \n");
    printf("Department: %d\n",department);
    printf("Payroll: %.2f\n",payroll);
    printf("Procurement: %.2f\n",procurement);
    printf("Assets: %.2f\n",assets);
    printf("Revenue: %.2f\n",total_revenue);
    printf("Expenditures: %.2f\n",total_expenditures);
    printf("Balance: %.2f\n",total_revenue - total_expenditures);
    printf("                            \n");
    printf("----------------------------\n");


    return 0;
}