#include <string>
#include <iostream>
#include "music.h"
#include "date.h"
#include "instruments.h"
#include <fstream>
using namespace std;

 

music::music(string _name, int _stok, int _price, string name, int ID,int stock, int cost, string singername):musicalInstruments(_name, _stok, _price )
{
	setmusicName(name);
    setmusicID(ID);
	setmusicstock( stock);
	setmusiccost( cost);
	setmusicSingerName( singername);
	
	numberofmusics++;
}
 int music::numberofmusics=0;
 
 music::~music()
 {
 //	cout<<musicName<<" is destroyed"<<endl;
 }
 void music::displayalldata()
 {
 	cout<<"Music Name: "<<getmusicname()<<endl;
 	cout<<"Music ID: "<<getmusicID()<<endl;
 	cout<<"Music stock: "<<getmusicstock()<<endl;
 	cout<<"Music cost: "<<getmusiccost()<<endl;
 	cout<<"Singer Name: "<<getmusicSingerName()<<endl;
 	musicalInstruments::showinformation();
 }
 	void music::setmusicName(string name){
 		
 		musicName=name;
 		
	 }
	void music::setmusicID(int ID){
		
		musicID=ID;
		
		
	}
	void music::setmusicstock(int stock){
	
	
		musicstock=stock;
	
	}
	void music::setmusiccost(int cost){
	
	
		musiccost=cost;
		
	}
	void music::setmusicSingerName(string singername){
		
		musicSingerName=singername;
	
	}
	
	string music::getmusicname()const{
	
	return musicName;
	}
	int music::getmusicID()const{
	
	return musicID;
	}
	int music::getmusicstock()const{
	
	return musicstock;
	
	}
	int music::getmusiccost()const{
	
	
	return musiccost;
	
	}
	string music:: getmusicSingerName()const{
	
	return musicSingerName;
	
	}
	
	ostream &operator<<(ostream &output,music & mymusic){
		
		output<<"Music Name: "<<mymusic.musicName
		<<"\nMusic ID: "<<mymusic.musicID
		<<"\nMusic Stock: "<<mymusic.musicstock
		<<"\nMusic Cost: "<<mymusic.musiccost
		<<"\nSinger Name: "<<mymusic.musicSingerName;  
		
		return output;
	}
    music &music::operator==(int ID1)
	{
		if(ID1>=0){
			
			musiccost=musiccost-(musiccost*ID1/100);
			
		}
		if(ID1<=0||ID1<100){
			
			musiccost=musiccost+(musiccost*ID1/100);
		}
		else{
			
			cout<<"Enter valid value for discount or interest "<<endl;
		}
	
		
		return *this;
		
	}	
	music &music::operator-=(int ID1)
	{
		if(musicstock- ID1>=0)
		{
		
		musicstock=musicstock- ID1;
		music::calculatebill(ID1);
	 }
	 
	 
		return *this;
		
	}
   	music &music::operator+=(int ID1)
	{
	
			musicstock=musicstock+ID1;
		
		
		return *this;
	}
	int music::getnumberofmusics()
	{
		return numberofmusics;
	}
	
	void music::calculatebill(int ID1){
	
	
		cout<<"The fee is as follows: "<<ID1*musiccost<<endl;
	
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
