#include "CarRental.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

CarRental::CarRental():Rental::Rental()
{
	
}

CarRental::CarRental(double c, string d, int sa, Date s, Date e):Rental::Rental(s, e)
{
	costperday=c;
	description=d;
	sales=sa;
}

void CarRental::ReadData()
{
	int sum=Rental::getDays();
	cout<<"dwse to kostos ana mera"<<endl;
	cin>>costperday;
	cout<<"dwse thn perigrafh"<<endl;
	cin>>description;
	if (sum>5)
	{
		cout<<"dwse thn ekptwsh"<<endl;
		cin>>sales;
		while(sales<5||sales>50)
			{
				cout <<"dwse pali thn ekptwsh"<<endl;
				cin>>sales;
				
			}
	}
	
	
}

void CarRental::PrintData()
{
	cout<<"to kostos ana mera einai :"<<costperday<<endl;
	cout<<"h perigrafh einai :"<<description<<endl;
	cout<<"to pososto ekptvshs einai: "<<sales<<endl;
}

double CarRental::calculateCost()
{
	int cost;
	int sum=Rental::getDays();
	
	cost=(costperday*sum*sales)/100;
	return cost;
}


