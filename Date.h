#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;
class Date
{	private:	
		int day;
		int month;
		int year;
	
	
	public:		
		Date();
		Date(const Date &c);
		void readDate();
		void printDate();
		int getDays(Date d);
				
			
};

#endif
