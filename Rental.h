#ifndef RENTAL_H
#define RENTAL_H
#include "Date.h"
class Rental
{
	private:	
		Date startdate;
		Date enddate;
	public:		
		Rental();
		Rental(Date s, Date e);
		virtual void ReadRental();
		void Print();
		int getDays();
		virtual double calculateCost()=0;
				
	
};

#endif
