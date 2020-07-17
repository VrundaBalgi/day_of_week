#include "dow_header.h"

int main()
{
    int date, month, year;
    int yy=0,cc=0,leap=0;
    int mcode,cent_code;

    //Read the date
    printf("\nEnter the date, month and year in (DD MM YYYY) format:");
    scanf("%d %d %d",&date,&month,&year);

    //Function calls
    find_Year_Century(year,&yy,&cc);

    find_month_cent_codes(month,cc,&mcode,&cent_code);
    
    if(month==1 || month==2)
    {
        if((year%400==0 && year%100!=0) || (year%4==0))
            leap = 1;
    }

    find_dayofweek(date,mcode,yy,cent_code,leap);

    return 0;
}
