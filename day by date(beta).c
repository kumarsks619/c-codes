#include<stdio.h>
main()
{
	int d,mon,yr;
	printf("Enter date:");
	scanf("%d",&d);
	printf("Enter month:");
	scanf("%d",&mon);
	printf("Enter year:");
	scanf("%d",&yr);
	long int x=0;
	int lp=0,cc;
 
 
 for(cc=1;cc<yr;cc++)
	 {
	   if(cc%4 == 0)
       {
         if( cc%100 == 0)
         {
            if ( cc%400 == 0)
                {
				 
				 lp++;
			    }
         }
         else
            {
			  
			  lp++;
		    }
       }
	 }  
	
    x=((lp)*366)+(yr-(lp)-1)*365;
    
	switch(mon-1)
	{
		case 11: x=x+30;
	
		case 10: x=x+31;
		        
		case 9: x=x+30;
		        
		case 8: x=x+31;
		        
		case 7: x=x+31;
		        
		case 6: x=x+30;
		        
		case 5: x=x+31;
		        
		case 4: x=x+30;
		        
		case 3: x=x+31;
		        
		case 2: if(yr%4 == 0)
                {
                  if(yr%100 == 0)
                 {
                    if (yr%400 == 0)
                      x=x+29;
                    else
                      x=x+28;
                 }
                  else
                    x=x+29;
                }
               else
                 x=x+28;
		        
		case 1: x=x+31;
		        
		default: x=x;
		        
	}
	
	x=x+d;
	int dd;
	dd=x%7;
	
	switch(dd-1)
	{
		case 0:printf("\nMonday");
		       break;
		case 1:printf("\nTuesday");
		       break;
		case 2:printf("\nWednesday");
		       break;
		case 3:printf("\nThursday");
		       break;
		case 4:printf("\nFriday");
		       break;
		case 5:printf("\nSaturday");
		       break;
		case -1:printf("\nSunday");
		       break;
		default: printf("\nINVALID DATE!!");
	}
	
	return 0;
	
}
