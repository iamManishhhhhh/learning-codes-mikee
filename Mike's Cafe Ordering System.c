#include <stdio.h>

int main() {
    int choice, qty;
    float pizza_price = 0, snacks_price = 0, beverage_price = 0, mukhvas_price = 0;
    int pizza_qty = 0, snacks_qty = 0, beverage_qty = 0, mukhvas_qty = 0;

    float total = 0;

    printf("===== Mike's Cafe!! =====\n");

    // ----------------- PIZZA MENU -----------------
    printf("\nPIZZA MENU:\n");
    printf("1. Margherita Pizza       - Rs. 200\n");
    printf("2. Veggie Pizza        - Rs. 300\n");
    printf("3. Peppy Paneer Pizza     - Rs. 350\n");
    printf("4. Babycorn Cheese Pizza     - Rs. 400\n");
    printf("5. Customised Pizza     - Rs. 500\n");
    printf("6. No Pizza\n");

    printf("\nEnter your pizza choice: ");
    scanf("%d", &choice);

    if(choice != 4) {
        printf("Enter Quantity: ");
        scanf("%d", &pizza_qty);
    }

    switch(choice) {
        case 1: pizza_price = 200; break;
        case 2: pizza_price = 300; break;
        case 3: pizza_price = 350; break;
        case 4: pizza_price = 400; break;
        case 5: pizza_price = 500; break;
        case 6: pizza_price = 0; pizza_qty = 0; break;
        default: printf("Invalid choice!\n"); return 0;
    }

    // ----------------- SNACKS MENU -----------------
    printf("\nSNACKS MENU:\n");
    printf("1. French Fries               - Rs. 150\n");
    printf("2. Special Paneer Pakoda      - Rs. 800\n");
    printf("3. Butter Chicken Tikka       - Rs. 700\n");
    printf("4. Punjabi Samosa             - Rs. 50\n");
    printf("5. Special Cheese Sandwich    - Rs. 200\n");
    printf("6. No Snacks\n");

    printf("\nEnter your snacks choice: ");
    scanf("%d", &choice);

    if(choice != 4) {
        printf("Enter Quantity: ");
        scanf("%d", &snacks_qty);
    }

    switch(choice) {
        case 1: snacks_price = 150; break;
        case 2: snacks_price = 800; break;
        case 3: snacks_price = 700; break;
        case 4: snacks_price = 50; break;
        case 5: snacks_price = 200; break;
        case 6: snacks_price = 0; snacks_qty = 0; break;
        default: printf("Invalid choice!\n"); return 0;
    }

    // ----------------- BEVERAGE MENU -----------------
    printf("\nBEVERAGES MENU:\n");
    printf("1. Cold Coffee       - Rs. 200\n");
    printf("2. Blue Lagoon       - Rs. 500\n");
    printf("3. Indian Chai       - Rs. 30\n");
    printf("4. Nimboo Pani       - Rs. 25\n");
    printf("5. No Formalities (Free)    - Rs. 00\n");

    printf("\nEnter your beverage choice: ");
    scanf("%d", &choice);

    if(choice != 4) {
        printf("Enter Quantity: ");
        scanf("%d", &beverage_qty);
    }

    switch(choice) {
        case 1: beverage_price = 200; break;
        case 2: beverage_price = 500; break;
        case 3: beverage_price = 30;  break;
        case 4: beverage_price = 25;  break;
        case 5: beverage_price = 0; beverage_qty = 0; break;
        default: printf("Invalid choice!\n"); return 0;
    }

    // ----------------- MUKHVAAS MENU -----------------
    printf("\nMUKHVAAS MENU:\n");
    printf("1. Mithi Mixed Saunf       - Rs. 20\n");
    printf("2. Indian Saunf            - Rs. 50\n");
    printf("3. Sugarfree Mishri        - Rs. 35\n");
    printf("4. No Mukhvaas\n");

    printf("\nEnter your mukhvaas choice: ");
    scanf("%d", &choice);

    if(choice != 4) {
        printf("Enter Quantity: ");
        scanf("%d", &mukhvas_qty);
    }

    switch(choice) {
        case 1: mukhvas_price = 20; break;
        case 2: mukhvas_price = 50; break;
        case 3: mukhvas_price = 35; break;
        case 4: mukhvas_price = 0; mukhvas_qty = 0; break;
        default: printf("Invalid choice!\n"); return 0;
    }

    // ----------------- TOTAL CALCULATION -----------------
    total = (pizza_price * pizza_qty) +
            (snacks_price * snacks_qty) +
            (beverage_price * beverage_qty) +
            (mukhvas_price * mukhvas_qty);

    // ----------------- BILL RECEIPT -----------------
    printf("\n===== BILL RECEIPT =====\n");

    if(pizza_qty > 0)
        printf("Pizza: Rs %.2f x %d = Rs %.2f\n", pizza_price, pizza_qty, pizza_price * pizza_qty);

    if(snacks_qty > 0)
        printf("Snacks: Rs %.2f x %d = Rs %.2f\n", snacks_price, snacks_qty, snacks_price * snacks_qty);

    if(beverage_qty > 0)
        printf("Beverage: Rs %.2f x %d = Rs %.2f\n", beverage_price, beverage_qty, beverage_price * beverage_qty);

    if(mukhvas_qty > 0)
        printf("Mukhvaas: Rs %.2f x %d = Rs %.2f\n", mukhvas_price, mukhvas_qty, mukhvas_price * mukhvas_qty);

    printf("--------------------------------\n");
    printf("GRAND TOTAL: Rs %.2f\n", total);
    printf("================================\n");

    printf("Thank you for ordering, Visit again 'The Great Mike's Cafe'!\n");

    return 0;
}