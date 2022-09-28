#pragma once
#include "AdditionalFunctions.h"

class SalesOfBook
{
private:
	Date date;
	unsigned int numOfCopies;
	double summOfBooksSold;
public:
	SalesOfBook();
	SalesOfBook(Date date, unsigned int _numOfcopies, double summOfBooksSold);
	//setters
	void setDate(Date date);
	void setDate(short _year, string _mouth, short day);
	void setNumOfCopies(unsigned int _numOfcopies);
	void setSummOfBooksSold(double _summOfBooksSold);
	//getters
	Date getDate();
	unsigned int getNumOfCopies();
	double getSummOfBooksSold();
};

