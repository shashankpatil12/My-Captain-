#include<stdio.h>
int main()
{
	int ch;
	printf("1.Pizza \t 2.Burger \t 3.Pasta \t 4.French Fries \t 5.Sandwich \n");
	printf("Enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:{
		       printf("Food item-Pizza\n");
		       printf("Price-Rs179");
		       break;
		       }
		case 2:{
			   printf("Food item-Burger\n");
		       printf("Price-Rs129");
		       break;
	           }
	    case 3:{
			   printf("Food item-Pasta\n");
	           printf("Price-Rs179");
	           break;
	           }
	    case 4:{
			   printf("Food item-French Fries\n");
	    	   printf("Price-Rs99");
	    	   break;
	           }
	    case 5:{
			   printf("Food item-Sandwich\n");
	    	   printf("Price-Rs149");
	    	   break;
		       } 
		       
	}
	return 0;
}
