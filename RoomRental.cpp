#include "RoomRental.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

RoomRental::RoomRental():Rental::Rental()
{
	
}

RoomRental::RoomRental(double c, int nof, string d, double room,	Date s,	Date e):Rental::Rental(s, e)
{
	costperperson=c;
	nofpersons=nof;
	description=d;
	roomservises=room;
}

void RoomRental::readData()
{
	Rental::ReadRental();
	cout<<"dwse to kostos ana atomo"<<endl;
	cin>>costperperson;
	cout<<"dwse ton arithmo twn atomwn"<<endl;
	cin>>nofpersons;
	cout<<"dwse thn perigrafh "<<endl;
	cin>>description;
	cout<<"dwse to kostos gia tis yphresies dwmatiou"<<endl;
	cin>>roomservises;
}

double RoomRental::calculateCost()
{
	int sum;
	
	sum=(costperperson*nofpersons)+roomservises;	
	return sum;	
}

void RoomRental::printData()
{
	cout<<"to kostos ana atomo einai :"<<costperperson<<endl;
	cout<<"o arithmos twn atomwn : "<<nofpersons<<endl;
	cout<<"h perigrafh: "<<description<<endl;
	cout<<" oi uphresies dwmatiou einai :"<<roomservises<<endl;
	
}







