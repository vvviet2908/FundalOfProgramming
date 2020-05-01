#include<stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/

int main()
{
  int day, month, year, ndays, nmonths, nyears, pdays, pmonths, pyears ,leapdays;
    bool leapyear;
  
  printf("Enter the date\n");
  scanf("%d", &day);
  printf("Enter the month\n");
  scanf("%d", &month);
  printf("Enter the year\n");
  scanf("%d", &year);
  
        leapyear = false;
        
        printf ("The date: %d/%d/%d \n", day, month, year);
        
		if (year % 4 == 0) {
            leapyear = true;
        }
        if (year % 100 == 0) {
            leapyear = false;
        }
        if (year % 400 == 0) {
            leapyear = true;
        }
        
        if ( (month == 12 || month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 )) {
            leapdays = 31;
            printf("The month has %d days\n",leapdays);
        }
        if (month == 4 || month == 6 || month == 9 || month == 11 ) {
            leapdays = 30;
            printf("The month has %d days\n",leapdays);
        }
        if ((leapyear) && (month == 2 )) {
            leapdays = 29;
            printf("The month has %d days\n",leapdays);
        } else if ((leapyear == false) && (month == 2)) {
            leapdays = 28;
            printf("The month has %d days\n",leapdays);
        }
        
        
        if(day==1){
			if(leapdays==30){
				pdays=31;
				pmonths = month -1;	
				pyears=year;
			}else if((leapyear) && month==3){	
				pdays=29;
				pmonths = month -1;
				pyears=year;
			}else if((leapyear==false) && month==3){	
				pdays=28;
				pmonths = month -1;
				pyears=year;
			}else if(month==1){
				pdays=31;
				pmonths = 12;
				pyears =year - 1 ;
			}else if(month==2){
				pdays=31;
				pmonths = month -1;
				pyears=year;
			}else{
				pdays=30;
				pmonths = month -1;
				pyears=year;
			}
	}	else {
		pdays = day-1;
		pmonths=month;
		pyears=year; 
		}
		
		
        
        if ((leapdays == 31) && (day == 31)) {
            ndays = 1;
            nmonths = month + 1;
            nyears=year;
        }
		else if ((leapdays == 30) && (day == 30)) {
                    ndays = 1;
                    nmonths = month + 1;
                    nyears=year;

        }
		else if ((leapdays == 29) && (day == 29)) {
                        ndays = 1;
                     nmonths = month + 1;
                     nyears=year;
        }
		else if ((leapdays == 28) && (day == 28)) {
                    ndays = 1;
                    nmonths = month + 1;
                    nyears=year;
        }
		else if ((month == 12) && (day == 31)) {
                   ndays = 1;
            		nmonths = 1;
                   nyears = year + 1;
        } else {
        	ndays=day+1;
        	nmonths=month;
        	nyears=year;
		}
        	


       
        printf ("The date of the previous day is: %d/%d/%d\n", pdays, pmonths, pyears);
        printf ("The date of the next day is: %d/%d/%d\n", ndays, nmonths, nyears);
    
	return 0; 
    }
