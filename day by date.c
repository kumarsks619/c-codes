/* A program to find day of a given date */
#include<stdio.h> 
  
int dayofweek(int d, int m, int y) 
{ 
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 }; 
    y -= m < 3; 
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7; 
} 
  
/* Driver function to test above function */
int main() 
{ 
    int x,mon,yr;
    printf("\nEnter date: ");
    scanf("%d",&x);
    printf("\nEnter month(in number): ");
    scanf("%d",&mon);
    printf("\nEnter year: ");
    scanf("%d",&yr);  
	  
    int day=dayofweek(x,mon,yr); 
   
    switch(day)
    {
    	case 0:printf("\nSunday");
    	       break;
        case 1:printf("\nMonday");
                break;
        case 2:printf("\nTueday");
                break;
        case 3:printf("\nWednesday");
                break;
        case 4:printf("\nThursday");
                break;
        case 5:printf("\nFriday");
                break;
        case 6:printf("\nSaturday");
                break;
        default:printf("\nDATE INVALID!!");
	}
  
    return 0; 
} 
