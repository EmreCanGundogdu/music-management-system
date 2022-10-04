#ifndef DATE_H
#define DATE_H

#include <string>
#include <iostream>

using namespace std;

class date{
	public:
		date(int d, int m, int y);
		void print() const;
	private:
	
	    int day;
		int month;
		int year;
}; 
#endif
