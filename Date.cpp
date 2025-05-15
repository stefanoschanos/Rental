#include "Date.h"		
#include <iostream>
#include <stdlib.h>
using namespace std;


Date::Date()
{
	
}

Date::Date(const Date &c)
{
	day=c.day;
	month=c.month;
	year=c.year;
}

void Date::readDate()
{
	cout<<"dwse thn hmera :"<<endl;
	cin>>day;
	cout<<"dwse mhna :"<<endl;
	cin>>month;
	cout<<"dwse xrono: "<<endl;
	cin>>year;
	
}

void Date::printDate()
{
	cout<<"h hmerominia einai :"<<day<<"/"<<month<<"/"<<year<<endl;
}

int Date::getDays(Date d)
{
	int x=0, y=0, z=0,sum=0;;
	x=abs(this->day-d.day);
	y=abs(this->month-d.month);
	z=abs(this->year-year-d.year);
	sum=x+(y*30)+(z*360);
	
	return sum;
	
}
