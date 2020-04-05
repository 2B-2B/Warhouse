#ifndef WOOD_H
#define WOOD_H

#include <msclr/marshal_cppstd.h>

/*
This is the parent class for all wood types and finishes. 
The Wood class uses general variables shared among all wood types including price and amount.
*/

class Wood
{
protected:
	double price;   //Price of Wood part per unit
	int amount;		//Amount of units needed
	int available; //amount of units avaiable

public:
	//constructors
	Wood();		//default contructor 
	Wood(double, int);  //constructor (price, available)
	Wood(double, int, int);  //constructor (price, amount, available)
	Wood(std::string, std::string);  //constructor (price, available)

	//mutators
	void setPrice(double price) { this->price = price; }
	void setAmount(int amount) { this->amount = amount; }
	void setAvaiable(int available) { this->available = available; }

	//accessors
	double getPrice() const{ return this->price; } 
	int getAmount() const{ return this->amount; }

	//additional functions
	double totalPrice() { return price * amount; }		//this function calculates the total price for the amount needed.
	
	//system string getters
	System::String^ getDimentionSS();
	System::String^ getPriceSS();
	System::String^ getAmountSS();


};

#endif

