#include "dow_header.h"

/*Function Name: find_Year_Century()
Input parameters: year: year entered by user
                  *yy: pointer to variable yy
                  *cc: pointer to variable cc
Return type: void
Description: It determines the year and the century*/

void find_Year_Century(int year,int *yy,int *cc)
{
    for(int i=0;i<4;i++)
    {
        if(i==0 || i==1)
        {
          *yy = *yy+((year%10)*(pow(10,i)));
        }
        else if(i==3 || i==4)
        {
          *cc = *cc+((year%10)*(pow(10,i)));
        }
        year = year/10;
    }
}

/*Function Name: find_month_cent_codes()
Input parameters: month: month entered by user
                  cc: century determined
                  *mcode: pointer to variable mcode
                  *cent_code:pointer to variable cent_code
Return type: void
Description: It determines the month code and century code*/

void find_month_cent_codes(int month,int cc,int *mcode,int *cent_code)
{
    switch(month)
    {
        case 1: *mcode = 1; break;
        case 2: *mcode = 4; break;
        case 3: *mcode = 4; break;
        case 4: *mcode = 0; break;
        case 5: *mcode = 2; break;
        case 6: *mcode = 5; break;
        case 7: *mcode = 0; break;
        case 8: *mcode = 3; break;
        case 9: *mcode = 6; break;
        case 10: *mcode = 1; break;
        case 11: *mcode = 4; break;
        case 12: *mcode = 6; break;
    }

    switch(cc)
    {
        case 1600: *cent_code = 6; break;
        case 1700: *cent_code = 4; break;
        case 1800: *cent_code = 2; break;
        case 1900: *cent_code = 0; break;
        case 2000: *cent_code = 6; break;
    }
}

/*Function Name: find_dayofweek()
Input parameters: date: date entered by user
                  mcode: month code determined
                  yy: year determined
                  cent_code: cent_code determined
Return type: void
Description: It determines the day of the week*/

void find_dayofweek(int date,int mcode,int yy,int cent_code,int leap)
{
    int day_code;
    day_code = date+mcode+yy+(yy/4)+cent_code;
    if(leap==1)
        day_code = day_code-1;
    day_code = day_code%7;
    switch(day_code)
    {
        case 1: printf("\nDay is Sunday"); break;
        case 2: printf("\nDay is Monday"); break;
        case 3: printf("\nDay is Tuesday"); break;
        case 4: printf("\nDay is Wednesday"); break;
        case 5: printf("\nDay is Thursday"); break;
        case 6: printf("\nDay is Friday"); break;
        case 0: printf("\nDay is Saturday"); break;
    }
}
