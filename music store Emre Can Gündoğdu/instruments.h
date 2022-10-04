#ifndef INSTRUMENTS_H
#define INSTRUMENTS_H
#include <string>
#include <fstream>

using namespace std;

class musicalInstruments{
	
	public:	
	explicit musicalInstruments(string _name, int _stok, int _price );
	
	void showinformation();
	void setinstName(string _name);
	void setinstPrice(int _price);
	void setinstStok(int _stok);
	
	string getinstName()const;
	int getinstPrice()const;
	int getinstStok()const;
	
	protected:
	string instName;
	int instStok;
	int instPrice; 
	
	
	
};
#endif
