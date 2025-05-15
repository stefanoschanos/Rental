#include "Person.h"
#include "RoomRental.h"
#include "CarRental.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std; 

Person::Person()
{
	
}

void Person::ReadPerson()
{
	int i=0;
	string x;
	cout<<"dwse to onoma :"<<endl;
	cin>>name;
	
	
	
	
	do
	{
		cout<<"thes ma dwseis noikh gia dwmatio (Room) h gia autokinhto (Car)? kai gia telos t"<<endl;
		cin>>x;
		if(x=="Room")
		{
			RoomRental *Room= new RoomRental;
			Room->readData();
			rentals[i]=Room;
		}
		
		else if(x=="Car")
		{
			CarRental *Car= new CarRental;
			Car->ReadData();
			rentals[i]=Car;
		}
		i=i+1;

	}while((x!="t") || (i<10));
		
	
}

double Person::calculateTotalrentalFees()
{
	double x;
	for(int j=0; j<i; j++)
	{
		x=x+rentals[j]->calculateCost();
	}
	return x;
}

void Person::PrintPerson()
{
	for(int j=0; j<i; j++)
	{
		rentals[j]->Print();
	}
}

double Person::getRental(int i)
{
	
	return rentals[i]->calculateCost();
}





