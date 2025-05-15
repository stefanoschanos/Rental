#include"Person.h"
#include "RoomRental.h"
#include "CarRental.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Person p;
	
	p.ReadPerson();
	p.PrintPerson();
	
	double max;
	for(int k=0; k<6; k++)
	{
		if(p.getRental(k)>p.getRental(k+1))
			max=k;
	}
	
	p.getRental(max); 
	
	ofstream output("rentals.txt");
	for(int z=0; z<6; z++)
	{
		output<<p.getRental(z)<<endl;
		
	}
	output.close();
	
	ifstream input("rentals.txt");
	char n;
	do
	{
		input.get(n);
		cout<< n;
	}	while (!input.eof());
	input.close();
	
	

	return 0;
}
