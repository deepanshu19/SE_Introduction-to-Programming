//2.Create a structure called FoodItem to store Zomato-style menu data: itemName (string), price (float), and rating (float). Initialize an array of 3 FoodItem variables with real menu items and display their details using a loop.
#include<stdio.h>

struct FoodItem {
    char itemName[20];
    float price;
    float rating;
};

int main()
{
    struct FoodItem fdItm[3];

    for(int i=0;i<3;i++)
    {
        printf("Enter item name %d:",i+1);
        scanf("%s",&fdItm[i].itemName);

        printf("Enter item price %d:",i+1);
        scanf("%f",&fdItm[i].price);

        printf("Enter item rating %d:",i+1);
        scanf("%f",&fdItm[i].rating);
    }

    for(int j=0;j<3;j++)
    {
        printf("Item name %d: %s\n",j+1,fdItm[j].itemName);
        printf("Item price %d: %.2f\n",j+1,fdItm[j].price);
        printf("Item rating %d: %.2f\n",j+1,fdItm[j].rating);
        printf("\n");
    }


    return 0;
}
