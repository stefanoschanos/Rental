#ifndef PERSON_H
#define PERSON_H
#include "Rental.h"
#include <string>
using namespace std;
class Person
{
	private:	
		string name;
		Rental *rentals[10];
		int i;
	public:		
		Person();
		void ReadPerson();
		double calculateTotalrentalFees();
		double getRental(int i);
		void PrintPerson();
	
};

#endif
