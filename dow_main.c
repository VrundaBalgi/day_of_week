#include "dow_header.h"

int main()
{
    int date, month, year;
    int yy=0,cc=0;
    int mcode,cent_code;

    //Read the date
    printf("\nEnter the date, month and year in (DD MM YYYY) format:");
    scanf("%d %d %d",&date,&month,&year);

    //Function calls
    find_Year_Century(year,&yy,&cc);

    find_month_cent_codes(month,cc,&mcode,&cent_code);

    find_dayofweek(date,mcode,yy,cent_code);

    return 0;
}
