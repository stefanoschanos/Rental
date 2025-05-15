#include "Rental.h"
#include <iostream>
using namespace std;

Rental::Rental()
{
	
}
Rental::Rental(Date s,Date e)
{
	s=startdate;
	e=enddate;
}
void Rental::ReadRental()
{
	cout<<"dwse thn hmeromhnia enarkshs enoikiashs"<<endl;
	startdate.readDate();
	cout<<"dwse thn hmeromhnia lhkshs enoikiashs"<<endl;
	enddate.readDate();
}
void Rental::Print()
{
	cout<<"h hmeromhnia enarkshs enoikiashs einai :"<<endl;
	startdate.printDate();
	cout<<"h hmeromhnia lhkshs enoikiashs einai :"<<endl;
	enddate.printDate();
	cout<<"o sunolikos arithmos hmerwn krathsh einai"<<enddate.getDays(startdate)<<endl;
}

int Rental::getDays()
{
	int sum=0;
	sum=enddate.getDays(startdate);
	
	return sum;
} 
