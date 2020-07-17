#ifndef DOW_HEADER_H_INCLUDED
#define DOW_HEADER_H_INCLUDED

//Header files
#include<stdio.h>
#include<math.h>

//Function declaration
void find_Year_Century(int year,int *yy,int *cc);

void find_month_cent_codes(int month,int cc,int *mcode,int *cent_code);

void find_dayofweek(int date,int mcode,int yy,int cent_code);

#endif // DOW_HEADER_H_INCLUDED
