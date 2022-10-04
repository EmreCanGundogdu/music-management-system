#include <string>
#include "date.h"
#include "instruments.h"
#include <fstream>
using namespace std;

#ifndef MUSIC_H

#define MUSIC_H


class music:public musicalInstruments {
	
	friend ostream &operator<<(ostream &output, music &mymusic);
	
	public: 
	explicit music(string _name, int _stok, int _price, string name, int ID, int stock, int cost, string singername );
	~music ();
	void displayalldata();
	music &operator==(int ID); 
	music &operator-=(int ID); 
	music &operator+=(int ID);
	static int getnumberofmusics();
	void calculatebill(int ID1) ;
	
	
	
	private:
	string musicName;
	int musicID; 
	int musicstock;
	int musiccost;
	string musicSingerName;
	
	
	
	static int numberofmusics;
	void setmusicName(string name);
	void setmusicID(int ID);
	void setmusicstock(int stock);
	void setmusiccost(int cost);
	void setmusicSingerName(string singername);
	
	string getmusicname()const;
	int getmusicID()const;
	int getmusicstock()const;
	int getmusiccost()const;
	string getmusicSingerName()const;
	
	

	 
};
#endif
