#include <stdio.h>
#include <string.h>
#define max_med 100
struct Medicine
{
    char name[50];
    int expiry_year;
    int expiry_month;
    int expiry_day;
    float price;
    int stock;
    char stock_file[90];
    int rack;
};
struct Bill
{
    int z;
    int n;
    char customer_name[50];
    char payment_method[50];
    int num_medicines;
    struct Medicine medicines[50];
    float total_price;
    float net_amount;
    float discount;
    int num_sales;
    float tax;
};

struct Medicine inventory[max_med] =
{
    {"paracetamol",2023,5,21, 5.0, 100, "paracetamol_stock.txt",1},
    {"ibuprofen",2023,4,21, 7.5, 50, "ibuprofen_stock.txt",2},
    {"aspirin",2022,5,20, 3.0, 75, "aspirin_stock.txt",3},
    {"antacid", 2024,5,22,10.0, 40, "antacid_stock.txt",4},
    {"coughsyrup",2022,3,21, 12.0, 25, "coughsyrup_stock.txt",5},
    {"citrizen",2024,6,21,11.0,29, "citrizen_stock.txt",6},
    {"band-aid",2024,7,21,6.0,29,"band-aid_stock.txt",7},
    {"candid",2024,8,21,57.0,18,"candid_stock.txt",8},
    {"cloben-g",2024,9,21,40.0,19,"cloben-g_stock.txt",9},
    {"DOLO-650",2024,10,21,10.0,37,"DOLO-650_stock.txt",10},
    {"dettol",2024,11,21,58.0,27,"dettol_stock.txt",11},
    {"digene syrup",2024,12,21,71.0,79,"digene syrup_stock.txt",12},
    {"cotton",2024,1,21,20.0,38,"cotton_stock.txt",13},
    {"wrist band",2024,2,21,108.0,9,"wrist band_stock.txt",14},
     {"caripaya",2026,6,9,40.0,100,"caripaya_stock.txt",15},
    {"mephtholpsas",2024,10,10,38.0,19,"mephtholpsas_stock.txt",16},
    {"cofsils",2023,7,30,10.0,47,"cofsils-stock.txt",17},
    {"nasal spray",2022,11,30,29.0,29,"nasal_spray_stock.txt",19},
    {"ORSL",2025,12,29,39.0,10,"orsl_stock.txt",20},
    {"Glucon-D",2023,12,12,20.0,19,"glucon_stock.txt",38},
{"Baby Bath kit",2026,10,24,2999.0,15,"babykit_stock.txt",30},
    {"Baby feeding kit",2026,9,23,3999.0,14,"baby_stock.txt",31},
    {"Baby cutlery",2025,8,22,1599.0,13,"cutlery_stock.txt",32},
    {"Baby Diaper",2024,1,30,799.0,14,"diaper-stock.ruct Medicine Baby.txt",33},
{"Mask",2024,1,2,5.0,100,"mask_stock.txt",34},
{"Hand Sanitizer",2024,2,3,59.0,99,"sanitizier.txt",35},
{"Glouse",2024,3,4,49.0,20,"glouse-stock.txt",36},
{"N-95",2024,4,5,95.0,100,"n-95-stock.txt",37},
{"covid-test kit",2024,5,6,200.0,50,"covidkit_stock.txt",39},
{"nebulizier and\n vaporiziers",2024,6,7,599.0,5,"n_and-v_stock.txt",40},
{"Hand wash pack of 2",2024,7,8,193.9,30,"handwash_stock.txt",41},
{"Immune Boosting \nEssentials pack of 4",2024,8,9,1099.0,5,"immune_booster_stock.txt",42},
{"PPE kits",2024,9,10,249.00,10,"ppe.kits_stock.txt",50},
{"band-aid",2024,7,21,6.0,29,"band-aid_stock.txt",7},
    {"dettol",2024,11,21,58.0,27,"dettol_stock.txt",11},
    {"cotton",2024,1,21,20.0,38,"cotton_stock.txt",13},
    {"wrist band",2024,2,21,108.0,9,"wrist band_stock.txt",14},
    {"hydrogen peroxide",2027,1,2,149.0,7,"hpo_stock.txt",21},
    {"spirit",2024,2,4,149.0,8,"spirit-stock.txt",22},
    {"Neosporin",2024,3,5,39.0,9,"neospirin_stock.txt",23},
    {"Anti-septic",2024,4,6,59.0,10,"anti-septic_stock.txt",24},
    {"Thermometer",2025,5,7,179.0,12,"thermomter_stock.txt",25},
{"Ice-pack",2024,6,8,100.0,10,"ice-pack_stock.txt",26},
{"Safety-pin",2030,7,9,2.0,20,"safety-pin_stock.txt",27},
{"crepe-rolled \nbandages",2024,8,10,89.0,14,"rolled bandages-stock.txt",29},
{"Baby Bath kit",2026,10,24,2999.0,15,"babykit_stock.txt",30},
    {"Baby feeding kit",2026,9,23,3999.0,14,"baby_stock.txt",31},
    {"Baby cutlery",2025,8,22,1599.0,13,"cutlery_stock.txt",32},
    {"Baby Diaper",2024,1,30,1199.0,14,"diaper-stock.txt",33},
    {"Mask",2024,1,2,5.0,100,"mask_stock.txt",34},
{"Hand Sanitizer",2024,2,3,59.0,99,"sanitizier.txt",35},
{"Glouse",2024,3,4,49.0,20,"glouse-stock.txt",36},
{"N-95",2024,4,5,95.0,100,"n-95-stock.txt",37},
{"covid-test kit",2024,5,6,200.0,50,"covidkit_stock.txt",39},
{"nebulizier and vaporiziers",2024,6,7,599.0,5,"n_and-v_stock.txt",40},
{"Hand wash pack of 2",2024,7,8,193.9,30,"handwash_stock.txt",41},
{"Immune Boosting\n Essentials pack of 4",2024,8,9,1099.0,5,"immune_booster_stock.txt",42},
{"PPE kits",2024,9,10,249.00,10,"ppe.kits_stock.txt",51},
{"coughsyrup",2022,3,21, 12.0, 25, "coughsyrup_stock.txt",5},
{"digene syrup",2024,12,21,71.0,79,"digene syrup_stock.txt",12},
{"ORSL",2025,12,29,39.0,10,"orsl_stock.txt",20},
{"paracetamol",2022,5,21, 5.0, 100, "paracetamol_stock.txt",1},
    {"ibuprofen",2023,4,21, 7.5, 50, "ibuprofen_stock.txt",2},
    {"aspirin",2022,5,20, 3.0, 75, "aspirin_stock.txt",3},
    {"antacid", 2024,5,22,10.0, 30, "antacid_stock.txt",4},
    {"citrizen",2024,6,21,11.0,29, "citrizen_stock.txt",6},
    {"caripaya",2026,6,9,40.0,100,"caripaya_stock.txt",15},
    {"mephtholpsas",2024,10,10,38.0,19,"mephtholpsas_stock.txt",16},
    {"cofsils",2023,7,30,10.0,47,"cofsils-stock.txt",17},
    {"Glucon-D",2022,12,1,20.0,19,"glucon_stock.txt",38},
    {"band-aid",2024,7,21,6.0,29,"band-aid_stock.txt",7},
    {"dettol",2024,11,21,58.0,27,"dettol_stock.txt",11},
    {"cotton",2024,1,21,20.0,38,"cotton_stock.txt",13},
    {"wrist band",2024,2,21,108.0,9,"wrist band_stock.txt",14},
    {"hydrogen peroxide",2027,1,2,149.0,7,"hpo_stock.txt",21},
    {"spirit",2024,2,4,149.0,8,"spirit-stock.txt",22},
    {"Neosporin",2024,3,5,39.0,9,"neospirin_stock.txt",23},
    {"Anti-septic",2024,4,6,59.0,10,"anti-septic_stock.txt",24},
    {"Thermometer",2025,5,7,179.0,12,"thermomter_stock.txt",25},
{"Ice-pack",2024,6,8,100.0,10,"ice-pack_stock.txt",26},
{"Safety-pin",2030,7,9,2.0,20,"safety-pin_stock.txt",27},
{"crepe-rolled bandages",2024,8,10,89.0,14,"rolled bandages-stock.txt",29}
};
int num_sales = 0;
float daily_income = 0.0;

void display_menu()
{
    printf(".......................\n");
    printf("Pharmacy Billing System\n");
    printf(".......................\n");
    printf("1. New Bill\n");
    printf("2. Sales Summary\n");
    printf("3. Re-Order Stock\n");
    printf("4. Inventory Display\n");
    printf("5. Add New Medicine\n");
    printf("6. Delete a Medicine\n");
    printf("7. Search a Medicine\n");
    printf("8. Exit\n");
    printf("Enter your choice: \n");
}

float total_price(struct Medicine medicines[], int num_medicines)
{
    float total_price = 0.0;
    int i;
    for(i=0;i<num_medicines;i++)
    {
        total_price+=medicines[i].price*medicines[i].stock;
    }
    return total_price;
}

float net_amount(float total_price)
{
    float gst=total_price*1.18;
    return total_price + gst;
}

void update_inventory_and_sales(struct Bill bill)
{
    int i, j;
    FILE *fp;
    for(i=0;i<bill.num_medicines;i++)
    {
        for(j=0;j<100;j++)
        {
            if(strcmp(inventory[j].name, bill.medicines[i].name) == 0)
            {
                inventory[j].stock -= bill.medicines[i].stock;
                fp = fopen(inventory[j].stock_file, "w");
                fprintf(fp, "%d", inventory[j].stock);
                fclose(fp);
                break;
            }
        }
    }
   bill.num_sales += 1;
   daily_income += bill.net_amount;
}
void print_sales_summary()
{
    int i, stock;
    FILE *fp;
    printf("=========================================================================================================\n");
    printf("                                         SALES SUMMARY\n");
    printf("=========================================================================================================\n");
    printf("\n");
    printf("Number of bills registered: %d\n", num_sales);
    printf("Total daily income: %.2f\n", daily_income);
    printf("Inventory:\n");
   printf("------------------------------------------\n");
    printf("| %-20s | %-10s |\n", "Medicine Name", "Stock");
    printf("-----------------------------------------\n");
    for (i=0;i<100;i++)
{
        fp = fopen(inventory[i].stock_file, "r");
        fscanf(fp, "%d", &stock);
        fclose(fp);
        printf("| %-20s | %-10d |\n", inventory[i].name, stock);
    }
    printf("---------------------------------------------------------------------------------------------------------\n");
}

void re_order_stock()
{
    int i;
    for (i=0;i<84;i++)
{
        FILE *fp = fopen(inventory[i].stock_file, "w");
        if (inventory[i].stock < 100)
		{
            int order_quantity = 100 - inventory[i].stock;
            printf("=========================================================================================================\n");
            printf("                                       STOCK RE-ORDER ALERT\n");
            printf("=========================================================================================================\n");
            printf("WARNING: The stock of %s is running low!\n", inventory[i].name);
            printf("Current stock level: %d\n", inventory[i].stock);
            printf("Minimum stock level before re-ordering: 20\n");
            printf("Re-ordering %d units.\n", order_quantity);
            inventory[i].stock += order_quantity;
            printf("New stock level after re-ordering: %d\n", inventory[i].stock);
        }
		else
		{
            printf("=========================================================================================================\n");
            printf("                                    STOCK STATUS - SUFFICIENT\n");
            printf("=========================================================================================================\n");
            printf("The stock of %s is sufficient.\n", inventory[i].name);
            printf("Current stock level: %d\n", inventory[i].stock);
        }
        fprintf(fp, "%d", inventory[i].stock);
        fclose(fp);
    }
}

void new_bill()
{
    struct Bill bill;
    int i,j, num_medicines,z,available_balance;
    printf("Enter number of medicines purchased: \n");
    scanf("%d", &num_medicines);
    bill.num_medicines = num_medicines;
    for(i=0;i<num_medicines;i++)
    {
        printf("Enter medicine name (choose from the following options):\n");
        for(j=0;j<100;j++)
        {
            printf("%d. %s (stock: %d, price: %.2f)\n",j+1, inventory[j].name, inventory[j].stock, inventory[j].price);
        }
        int med_choice;
        scanf("%d", &med_choice);
        while(med_choice < 1 || med_choice > 100)
        {
            printf("Invalid choice. Please enter a valid option: ");
            scanf("%d", &med_choice);
        }

      int is_expired = 0;
      if (inventory[med_choice-1].expiry_year < 2023
    || (inventory[med_choice-1].expiry_year == 2023
        && inventory[med_choice-1].expiry_month < 5)
    || (inventory[med_choice-1].expiry_year == 2023
        && inventory[med_choice-1].expiry_month == 5
        && inventory[med_choice-1].expiry_day < 10))
	{
    is_expired = 1;
	}

if (is_expired)
	{
    printf("Sorry, the medicine you selected (%s) is expired and cannot be purchased.\n", inventory[med_choice-1].name);
    inventory[med_choice-1].stock = 0;
    i--;
    continue;
	}

        strcpy(bill.medicines[i].name, inventory[med_choice-1].name);
        printf("Enter quantity: ");
        scanf("%d", &bill.medicines[i].stock);
        while(bill.medicines[i].stock > inventory[med_choice-1].stock)
	{
            printf("Not enough stock available. Maximum stock available for %s is %d. Please enter a valid quantity: ", inventory[med_choice-1].name, inventory[med_choice-1].stock);
            scanf("%d", &bill.medicines[i].stock);
        }
        bill.medicines[i].price = inventory[med_choice-1].price;
    }
    bill.total_price = total_price(bill.medicines, num_medicines);
    bill.tax = bill.total_price * 0.1; // 10% tax rate
    bill.discount = 0;
    printf("Enter customer name: \n");
    scanf("%s", bill.customer_name);
    printf("Enter payment method(cash/card/UPI): \n");
    scanf("%s", bill.payment_method);
    printf("Enter the money you have\n");
    scanf("%d", &available_balance);
    char apply_discount;
    printf("Do you want to apply a discount? (Y/N): ");
    scanf(" %c", &apply_discount);
    if (apply_discount == 'Y' || apply_discount == 'y')
{

        if(bill.total_price<=500)
       		bill.discount=bill.total_price*0.01;
        else if(bill.total_price<=1000)
        	bill.discount=bill.total_price*0.02;
        else if(bill.total_price<=5000)
        	bill.discount=bill.total_price*0.05;
        else if(bill.total_price<=10000)
        	bill.discount=bill.total_price*0.1;
        else
        	bill.discount=bill.total_price*0.2;
}
    bill.net_amount = bill.total_price + bill.tax - bill.discount;
    if (bill.net_amount > available_balance)
	{
        printf("Sorry, you do not have enough money to pay the bill. The bill has been cancelled.\n");
            return;
    }
    available_balance -= bill.net_amount;
    update_inventory_and_sales(bill);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
//    printf()
    printf("\n contact us: 0870-354769 , 7337337843");
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n     customer name :%s \n",bill.customer_name);
    printf(" Payment method: %s\n", bill.payment_method);
    printf(" Bill date : 09-05-2023\n");
    printf("   Bill no : 1\n");
    printf(" Medicines purchased:\n");
    for(i=0;i<num_medicines;i++)
    {
    printf(" %d. %s (price: %.2f, quantity: %d)\n", i+1, bill.medicines[i].name, bill.medicines[i].price, bill.medicines[i].stock);
    }
    printf(" Total price: %.2f\n", bill.total_price);
    printf(" Tax included: %.2f\n", bill.tax);
    printf(" Discount: %.2f\n", bill.discount);
    printf(" Net amount: %.2f\n", bill.net_amount);
    printf(" Your available balance is now %.2d.\n", available_balance);
    printf(" enter rating");
scanf("%d",&bill.n);
if(bill.n < 6)
{
if(bill.n==1)
{
printf(" [1/5]*\n THANK YOU FOR VISITING");
}
else if(bill.n==2)
{
printf(" [2/5]**\n SATISFACTORY ");
}
else if(bill.n==3)
{
printf(" [3/5]*\n GOOD");
}
else if(bill.n==4)
{
printf(" [4/5]**\n VERY GOOD");
}
else
{
printf(" [5/5]***\n EXCELLENT");
}
}
else
printf("\n");
    printf("\n====================================================================================================================================================\n");
    printf("                           THANK YOU FOR VISITING OUR STORE\n");
    printf(" BILL GENERATED SUCCESFULLY.\n");
    printf("\n");
    printf("\n");
    printf("\n");
}

void display_inventory()
{ int i;
    printf("====================================================================================================================\n");
    printf("| %-30s | %-10s | %-10s | %-20s | %-10s |\n", "Name", "Price", "Stock", "Stock File", "Rack No");
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    for( i=0;i<100; i++)
    {
        printf("| %-30s | $%-9.2f | %-10d | %-20s | %-10d |\n", inventory[i].name, inventory[i].price, inventory[i].stock, inventory[i].stock_file, inventory[i].rack);
    }
    printf("====================================================================================================================\n");
}

void add_medicine()
{
    struct Medicine new_med;
    int num_medicines = 0;
    while (inventory[num_medicines].name[0] != '\0' && num_medicines<100)
    {
        num_medicines++;
    }
    if (num_medicines == 100)
	{
        printf("Inventory is full. Cannot add more medicines.\n");
        return;
    }
    printf("Enter medicine name: ");
    scanf("%s", new_med.name);
    printf("Enter medicine price: ");
    scanf("%f", &new_med.price);
    printf("Enter medicine stock: ");
    scanf("%d", &new_med.stock);
    printf("Enter stock file: ");
    scanf("%s", new_med.stock_file);
    printf("enter the rack number: ");
    scanf("%d", &new_med.rack);
   
    printf("New Medicine Details:\n");
    printf("Name: %s\n", new_med.name);
    printf("Price: %.2f\n", new_med.price);
    printf("Stock: %d\n", new_med.stock);
    printf("Stock File: %s\n", new_med.stock_file);
    printf("Rack no: %d\n", new_med.rack);
   
    inventory[num_medicines] = new_med;
    num_medicines++;
    int remaining_capacity = 100 - num_medicines;

    printf("Remaining storage capacity: %d\n", remaining_capacity);
    printf("The medicine '%s' has been added successfully.\n", new_med.name);
}


void delete_medicine()
{ 
	int i;
    char med_name[50];
    int index = -1;
    printf("Enter the name of the medicine to delete: ");
    scanf("%s", med_name);
    for(i=0;i<82;i++)
    {
        if (strcmp(inventory[i].name, med_name) == 0)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        printf("Medicine not found in the inventory.\n");
    }
    else
    { 
	int i;
        printf("Medicine found in the inventory.\n");
        printf("Medicine Details:\n");
        printf("Name: %s\n", inventory[index].name);
        printf("Quantity: %d\n", inventory[index].stock);
        printf("Price: %.2f\n", inventory[index].price);
        for(i=index;i<82;i++)
        {
            inventory[i] = inventory[i + 1];
        }

        printf("The medicine '%s' has been deleted from the inventory.\n", med_name);
    }
}

void search_medicine()
{ int i;
    char search_name[50];
    int found = 0;
    printf("Enter the name of the medicine you want to search: ");
    scanf("%s", search_name);
    for (i = 0; i < sizeof(inventory) / sizeof(inventory[0]); i++) 
	{
        if (strcmp(inventory[i].name, search_name) == 0) {
            printf("=========================================================================================================\n");
            printf("                                  SEARCH RESULTS - MEDICINE FOUND\n");
            printf("=========================================================================================================\n");
            printf("Medicine Found:\n");
            printf("Name: %s\n", inventory[i].name);
            printf("Price: %.2f\n", inventory[i].price);
            printf("Stock: %d\n", inventory[i].stock);
            found = 1;
            break;
        }
    }
    if (!found)
	{
        printf("=========================================================================================================\n");
        printf("                                 SEARCH RESULTS - MEDICINE NOT FOUND\n");
        printf("=========================================================================================================\n");
        printf("Medicine Not Found.\n");
    }
}
int main()
{
int choice;
while(1)
{
display_menu();
scanf("%d", &choice);
switch(choice)
{
case 1: new_bill();
break;
case 2: print_sales_summary();
                    break;
case 3: re_order_stock();
break;
case 4: display_inventory();
break;
case 5: add_medicine();
break;
case 6: delete_medicine();
break;
case 7: search_medicine();
break;
case 8: return 0;
default: printf("Invalid choice. Please try again.\n");
}
}
}
