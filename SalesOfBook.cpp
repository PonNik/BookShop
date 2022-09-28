#include "SalesOfBook.h"

SalesOfBook::SalesOfBook() {

}
SalesOfBook::SalesOfBook(Date _date, unsigned int _numOfcopies, double _summOfBooksSold) {
	date = _date;
	numOfCopies = _numOfcopies;
	summOfBooksSold = _summOfBooksSold;
}
//setters
void SalesOfBook::setDate(Date _date) {
	date = _date;
}
void SalesOfBook::setDate(short _year, string _mouth, short _day) {
	date.year = _year;
	date.mouth = _mouth;
	date.day = _day;
}
void SalesOfBook::setNumOfCopies(unsigned int _numOfcopies) {
	numOfCopies = _numOfcopies;
}
void SalesOfBook::setSummOfBooksSold(double _summOfBooksSold) {
	summOfBooksSold = _summOfBooksSold;
}
//getters
Date SalesOfBook::getDate() {
	return date;
}
unsigned int SalesOfBook::getNumOfCopies() {
	return numOfCopies;
}
double SalesOfBook::getSummOfBooksSold() {
	return summOfBooksSold;
}