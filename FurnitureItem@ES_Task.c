#include <stdio.h>

struct FurnitureItem {
    float itemCode;
    char itemName[50];
    char itemType[50];
    char gradeOfFurniture[50];
    char colorOfFurniture[50];
    float priceOfFurniture;
};

int main(){
    struct FurnitureItem item;

    printf("Enter Item Code: ");
    scanf("%f", &item.itemCode);

    printf("Enter Item Name: ");
    scanf(" %[^\n]", item.itemName);

    printf("Enter Item Type: ");
    scanf(" %[^\n]", item.itemType);

    printf("Enter Grade of Furniture: ");
    scanf(" %[^\n]", item.gradeOfFurniture);

    printf("Enter Color of Furniture: ");
    scanf(" %[^\n]", item.colorOfFurniture);

    printf("Enter Price of Furniture: ");
    scanf("%f", &item.priceOfFurniture);

    printf("\nFurniture Item Details:\n");
    printf("Item Code: %.2f\n", item.itemCode);
    printf("Item Name: %s\n", item.itemName);
    printf("Item Type: %s\n", item.itemType);
    printf("Grade of Furniture: %s\n", item.gradeOfFurniture);
    printf("Color of Furniture: %s\n", item.colorOfFurniture);
    printf("Price of Furniture: %.2f\n", item.priceOfFurniture);

    return 0;
}