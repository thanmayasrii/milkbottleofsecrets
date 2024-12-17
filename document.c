#include <stdio.h>
#include <string.h>
void generateProductName(char *key) {
    char correctKey[] = "lacto";
    char productName[] = "En3rg!0n"; 
    if (strcmp(key, correctKey) == 0) {
        printf("Congratulations! The product is IET{%s}\n", productName);
    } else {
        printf("Incorrect key! Please try again.\n");
    }
}

int main() {
    char input[50];
    printf("Enter the company name(lowercase): ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;
    generateProductName(input);
    return 0;
}
