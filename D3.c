#include <stdio.h>

struct Product {
    int code;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product p[3];
    struct Product *ptr[3];
    int i;

    for (i = 0; i < 3; i++) {
        ptr[i] = &p[i];

        printf("\nEnter details of Product %d:\n", i + 1);

        printf("Product Code: ");
        scanf("%d", &ptr[i]->code);

        printf("Product Name: ");
        scanf("%s", ptr[i]->name);

        printf("Quantity: ");
        scanf("%d", &ptr[i]->quantity);

        printf("Price: ");
        scanf("%f", &ptr[i]->price);
    }

    printf("\n--- Product Details ---\n");

    for (i = 0; i < 3; i++) {
        printf("\nProduct %d\n", i + 1);
        printf("Code: %d\n", ptr[i]->code);
        printf("Name: %s\n", ptr[i]->name);
        printf("Quantity: %d\n", ptr[i]->quantity);
        printf("Price: %.2f\n", ptr[i]->price);
    }

    return 0;
}