#ifndef ROOMRENTAL_H
#define ROOMRENTAL_H
#include "Rental.h"
#include <string>
using namespace std;
class RoomRental:public Rental
{
	private:	
		double costperperson;
		int nofpersons;
		string description;
		double roomservises;
	public:		
		RoomRental();
		RoomRental(double c, int nof, string d, double room, Date s, Date e);
		void readData();
		void printData();
		virtual double calculateCost();
				
	
};

#endif
