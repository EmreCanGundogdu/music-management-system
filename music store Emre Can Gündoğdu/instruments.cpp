#include <string>
#include <iostream>
#include "instruments.h"
#include <fstream>

using namespace std;


musicalInstruments::musicalInstruments( string _name, int _stok, int _price ){
	
	
    setinstName(_name);
    setinstPrice( _price);
	setinstStok(_stok);
}
void musicalInstruments::setinstName(string _name){
	
	instName=_name;
	
}
void musicalInstruments::setinstStok(int _stok){
	
	instStok=_stok;
}
void musicalInstruments::setinstPrice(int _price){
	
	instPrice=_price;
	
	
}

string musicalInstruments::getinstName()const{

return instName;

}
int musicalInstruments::getinstPrice()const{

return instPrice;
}

int musicalInstruments::getinstStok()const{

return instStok;

}

void musicalInstruments::showinformation()
{
 	cout<<"instrument Name: "<<getinstName()<<endl;
 	cout<<"instrument price: "<<getinstPrice()<<endl;
 	cout<<"instrument stok: "<<getinstStok();
 }
