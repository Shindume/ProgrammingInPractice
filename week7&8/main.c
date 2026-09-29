#include <stdio.h>
#include <string.h> 

int main() {




    printf("=== LAB TASK 1: BASIC SUPPLIER DETAILS ===\n");

    char supplierName[100];
    char email[100];
    char phone[30];
    char town[50];

    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);

    supplierName[strcspn(supplierName, "\n")] = '\0';

    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    printf("Enter phone: ");
    fgets(phone, sizeof(phone), stdin);
    phone[strcspn(phone, "\n")] = '\0';

    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);
    town[strcspn(town, "\n")] = '\0';

    // Display captured details
    printf("\n--- SUPPLIER DETAILS ---\n");
    printf("Name: %s\n", supplierName);
    printf("Email: %s\n", email);
    printf("Phone: %s\n", phone);
    printf("Town: %s\n", town);



    printf("\n=== LAB TASK 2: STRING LENGTH ===\n");
    // Using strlen() to determine length of strings
    printf("Supplier name length: %zu\n", strlen(supplierName));
    printf("Email length: %zu\n", strlen(email));
    printf("Town length: %zu\n", strlen(town));


    
    printf("\n=== LAB TASK 3: SUPPLIER SEARCH ===\n");
    char supplier1[] = "ABC Office Supplies";
    char supplier2[] = "Namibia Stationery";
    char searchInput[100];

    printf("Enter supplier name to search: ");
    fgets(searchInput, sizeof(searchInput), stdin);
    searchInput[strcspn(searchInput, "\n")] = '\0';

    
    if (strcmp(searchInput, supplier1) == 0 || strcmp(searchInput, supplier2) == 0) {
        printf("Supplier found.\n");
    } else {
        printf("Supplier not found.\n");
    }

    printf("\n=== LAB TASK 4: COPYING SUPPLIER INFORMATION ===\n");
    char original[100];
    char backup[100];


    strcpy(original, supplierName);
    strcpy(backup, original);

    printf("Original Supplier: %s\n", original);
    printf("Backup Supplier: %s\n", backup);


    
    printf("\n=== LAB TASK 5: SUPPLIER DESCRIPTION ===\n");
    char description[200];

    
    strcpy(description, supplierName); 
    strcat(description, " operates in ");      
    strcat(description, town);                 
    strcat(description, ".");

    printf("%s\n", description);


    printf("\n\n=== LAB TASK 6: MFMS SUPPLIER MODULE ===\n");

    char menuName[100] = "";
    char menuEmail[100] = "";
    char menuPhone[30] = "";
    char menuTown[50] = "";
    int choice;

    do {
        printf("\n==================================\n");
        printf(" MUNICIPAL FINANCIAL MANAGEMENT \n");
        printf("==================================\n");
        printf("1. Add Supplier\n");
        printf("2. Display Supplier\n");
        printf("3. Search Supplier\n");
        printf("4. Show Name Length\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("\nEnter supplier name: ");
                fgets(menuName, sizeof(menuName), stdin);
                menuName[strcspn(menuName, "\n")] = '\0';

                printf("Enter email: ");
                fgets(menuEmail, sizeof(menuEmail), stdin);
                menuEmail[strcspn(menuEmail, "\n")] = '\0';

                printf("Enter phone: ");
                fgets(menuPhone, sizeof(menuPhone), stdin);
                menuPhone[strcspn(menuPhone, "\n")] = '\0';

                printf("Enter town: ");
                fgets(menuTown, sizeof(menuTown), stdin);
                menuTown[strcspn(menuTown, "\n")] = '\0';

                printf("Supplier added successfully!\n");
                break;

            case 2:
                if (strlen(menuName) == 0) {
                    printf("No supplier details stored yet.\n");
                } else {
                    printf("\n--- CURRENT SUPPLIER ---\n");
                    printf("Name: %s\n", menuName);
                    printf("Email: %s\n", menuEmail);
                    printf("Phone: %s\n", menuPhone);
                    printf("Town: %s\n", menuTown);
                }
                break;

            case 3: {
                if (strlen(menuName) == 0) {
                    printf("No supplier details stored to search.\n");
                } else {
                    char query[100];
                    printf("Enter supplier name to search: ");
                    fgets(query, sizeof(query), stdin);
                    query[strcspn(query, "\n")] = '\0';

                    if (strcmp(query, menuName) == 0) {
                        printf("Supplier found: %s (%s)\n", menuName, menuTown);
                    } else {
                        printf("Supplier not found.\n");
                    }
                }
                break;
            }

            case 4:
                if (strlen(menuName) == 0) {
                    printf("No supplier added yet.\n");
                } else {
                    printf("Supplier Name: %s\n", menuName);
                    printf("Length: %zu characters\n", strlen(menuName));
                }
                break;

            case 5:
                printf("Exiting Supplier Module...\n");
                break;

            default:
                printf("Invalid choice! Please select 1-5.\n");
        }
    } while (choice != 5);

    return 0;
}