#include<stdio.h>
#include<conio.h>

void gst(int price);
int main(){
	
	int price;
	
	printf("\nenter the price of the item:");
	scanf("%d",&price);
	
	gst(price);
	printf("\nthe orginal price =>%d\n",price);
	getch();
	return 0;
}
void gst(int price){
	float g;
	g=price+(price*0.81);
	printf("the price after adding 18%% GST :%.2f",g);
}

