#include "Rental.h"
#include <string>
using namespace std;
class CarRental:public Rental
{
	
	
	private:	
		double costperday;
		string description;
		int sales;
	public:		
		CarRental();
		CarRental(double c, string d, int sa, Date s, Date e);
		virtual double calculateCost();
		void PrintData();
		void ReadData();
	
				
				
};

