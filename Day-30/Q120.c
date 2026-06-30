//Q120  Write a program to Develop complete mini project using arrays, strings and functions. 

#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 10     // number of products available in the mall
#define MAX_CART 20     // max items a customer can buy

// ---------- Structures ----------

struct Product
{
    int code;
    char name[30];
    float price;
};

struct CartItem 
{
    int code;
    char name[30];
    float price;
    int quantity;
    float total;
};

// ---------- Function declarations ----------

void displayMenu(struct Product products[], int n);
int findProductByCode(struct Product products[], int n, int code);
void generateBill(struct CartItem cart[], int cartCount);

int main()
{
    // Predefined product list for Avadh Mall
    struct Product products[MAX_ITEMS] = {
        {101, "Rice (1kg)", 60.00},
        {102, "Wheat Flour (1kg)", 45.00},
        {103, "Sugar (1kg)", 42.00},
        {104, "Cooking Oil (1L)", 150.00},
        {105, "Milk (1L)", 55.00},
        {106, "Toothpaste", 90.00},
        {107, "Shampoo (200ml)", 180.00},
        {108, "Soap", 35.00},
        {109, "Biscuits Pack", 25.00},
        {110, "Tea (250g)", 120.00}
    };

    struct CartItem cart[MAX_CART];
    int cartCount = 0;

    int choice;
    int code, qty;

    printf("===================================================\n");
    printf("        WELCOME TO AVADH MALL BILLING SYSTEM\n");
    printf("===================================================\n");

    do {
        printf("\n----------- MAIN MENU -----------\n");
        printf("1. View Products\n");
        printf("2. Add Item to Cart\n");
        printf("3. View Cart\n");
        printf("4. Generate Final Bill\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

            case 1:
                displayMenu(products, MAX_ITEMS);
                break;

            case 2:
                if (cartCount>= MAX_CART)
                {
                    printf("Cart is full! Cannot add more items.\n");
                    break;
                }

                displayMenu(products, MAX_ITEMS);
                printf("Enter product code: ");
                scanf("%d", &code);

                int index = findProductByCode(products, MAX_ITEMS, code);

                if (index ==-1)
                {
                    printf("Invalid product code! Please try again.\n");
                    break;
                }

                printf("Enter quantity: ");
                scanf("%d", &qty);

                if (qty <= 0)
                {
                    printf("Quantity must be greater than zero.\n");
                    break;
                }

                // Add item to cart
                cart[cartCount].code = products[index].code;
                strcpy(cart[cartCount].name, products[index].name);
                cart[cartCount].price = products[index].price;
                cart[cartCount].quantity = qty;
                cart[cartCount].total = qty * products[index].price;

                cartCount++;

                printf("Item added to cart successfully!\n");
                break;

            case 3:
                if (cartCount ==0)
                {
                    printf("Your cart is empty.\n");
                }
                else
                {
                    printf("\n---------- YOUR CART ----------\n");
                    printf("%-5s %-20s %-8s %-5s %-10s\n",
                           "Code", "Item", "Price", "Qty", "Total");
                    for (int i= 0; i <cartCount; i++)
                    {
                        printf("%-5d %-20s %-8.2f %-5d %-10.2f\n",
                               cart[i].code, cart[i].name,
                               cart[i].price, cart[i].quantity,
                               cart[i].total);
                    }
                }
                break;

            case 4:
                if (cartCount ==0)
                {
                    printf("Cart is empty! Add items before billing.\n");
                }
                else
                {
                    generateBill(cart, cartCount);
                }
                break;

            case 5:
                printf("Thank you for shopping at Avadh Mall!\n");
                break;

            default:
                printf("Invalid choice! Please enter between 1-5.\n");
        }

    } while (choice != 5);

    return 0;
}

// Displays all available products
void displayMenu(struct Product products[], int n)
{
    printf("\n---------- PRODUCT LIST ----------\n");
    printf("%-6s %-20s %-8s\n", "Code", "Name", "Price");
    for (int i = 0; i < n; i++)
    {
        printf("%-6d %-20s %-8.2f\n",
               products[i].code, products[i].name, products[i].price);
    }
}

// Searches for a product by its code, returns index or -1 if not found
int findProductByCode(struct Product products[], int n, int code)
{
    int found = -1;
    for (int i = 0; i < n; i++)
    {
        if (products[i].code == code)
        {
            found = i;
            break;
        }
    }
    return found;
}

// Calculates final bill (with discount + GST) and saves it to a file
void generateBill(struct CartItem cart[], int cartCount)
{
    float subtotal = 0;
    int i;

    for (i = 0; i < cartCount; i++)
    {
        subtotal += cart[i].total;
    }

    // Simple business rules
    float discount = 0;
    if (subtotal > 1000)
    {
        discount = subtotal * 0.10;   // 10% discount on bills above ₹1000
    }
    else if (subtotal > 500)
    {
        discount = subtotal * 0.05;   // 5% discount on bills above ₹500
    }

    float afterDiscount=subtotal - discount;
    float gst=afterDiscount * 0.05;  // 5% GST
    float grandTotal=afterDiscount + gst;

    // Print bill on screen
    printf("\n===================================================\n");
    printf("                 AVADH MALL - FINAL BILL\n");
    printf("===================================================\n");
    printf("%-5s %-20s %-8s %-5s %-10s\n",
           "Code", "Item", "Price", "Qty", "Total");

    for (i=0; i<cartCount; i++)
    {
        printf("%-5d %-20s %-8.2f %-5d %-10.2f\n",
               cart[i].code, cart[i].name,
               cart[i].price, cart[i].quantity,
               cart[i].total);
    }

    printf("---------------------------------------------------\n");
    printf("Subtotal       : Rs. %.2f\n", subtotal);
    printf("Discount       : Rs. %.2f\n", discount);
    printf("GST (5%%)       : Rs. %.2f\n", gst);
    printf("---------------------------------------------------\n");
    printf("GRAND TOTAL    : Rs. %.2f\n", grandTotal);
    printf("===================================================\n");
    printf("        Thank you for shopping at Avadh Mall!\n");
    // Save bill to a text file
    FILE *fp=fopen("avadh_mall_bill.txt", "w");
    if (fp==NULL)
    {
        printf("Error: Could not save bill to file.\n");
        return;
    }

    fprintf(fp, "===================================================\n");
    fprintf(fp, "                 AVADH MALL - FINAL BILL\n");
    fprintf(fp, "===================================================\n");
    fprintf(fp, "%-5s %-20s %-8s %-5s %-10s\n",
            "Code", "Item", "Price", "Qty", "Total");

    for (i=0; i<cartCount; i++)
    {
        fprintf(fp, "%-5d %-20s %-8.2f %-5d %-10.2f\n",
                cart[i].code, cart[i].name,
                cart[i].price, cart[i].quantity,
                cart[i].total);
    }

    fprintf(fp, "---------------------------------------------------\n");
    fprintf(fp, "Subtotal       : Rs. %.2f\n", subtotal);
    fprintf(fp, "Discount       : Rs. %.2f\n", discount);
    fprintf(fp, "GST (5%%)       : Rs. %.2f\n", gst);
    fprintf(fp, "---------------------------------------------------\n");
    fprintf(fp, "GRAND TOTAL    : Rs. %.2f\n", grandTotal);
    fprintf(fp, "---------------------------------------------------\n");

    fclose(fp);
}

/*
   AVADH MALL - BILLING SYSTEM
   - structs
   - arrays
   - functions
   - loops & menu-driven
   - file handling (saves bill to a .txt file)

   took a little help of AI for debugging. 
   */