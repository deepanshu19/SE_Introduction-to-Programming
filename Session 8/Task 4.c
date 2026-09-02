//4.Build a function formatPrice that takes a price in rupees and returns a string formatted like Flipkart's price tag (e.g., '₹1,599'). Use this function to display prices for three different products.

#include<stdio.h>

char* formatPrice(int price){

static char formatted[20];
sprintf(formatted,"₹%d", price);

return formatted;
}

int main(){

int mobilePrice = 1599;
int headphonePrice = 2499;
int laptopPrice = 54999;

printf("Mobile: %s\n",formatPrice(mobilePrice));
printf("Headphones: %s\n",formatPrice(headphonePrice));
printf("Laptop: %s\n",formatPrice(laptopPrice));

return 0;
}
