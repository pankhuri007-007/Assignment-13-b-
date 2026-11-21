#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e;
    struct Employee *ptr = &e;

    printf("Enter Employee ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Employee Name: ");
    scanf("%s", ptr->name);

    printf("Enter Salary: ");
    scanf("%f", &ptr->salary);

    printf("Enter New Salary: ");
    scanf("%f", &ptr->salary);

    printf("\nEmployee ID: %d", ptr->id);
    printf("\nEmployee Name: %s", ptr->name);
    printf("\nModified Salary: %.2f", ptr->salary);

    return 0;
}