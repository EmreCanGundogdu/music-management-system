#include <iostream>
#include <stdexcept>
#include "date.h"
using namespace std;

	date::date(int d, int m, int y){
	    day=d;
		month=m;
		year=y;
	}
	void date::print() const {
		cout << day << '/' << month << '/' << year; 
	}
