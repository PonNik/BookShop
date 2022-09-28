#include "DataBase.h"

DataBase::DataBase() {

}

DataBase::DataBase(Date _dateReceipt, string _numDoc, string _supplierDetals) : dateReceipt(_dateReceipt), numDoc(_numDoc), supplierDetals(_supplierDetals) {
}

DataBase::DataBase(Date _dateReceipt, string _numDoc, string _supplierDetals, std::vector<Book> _books, std::vector<SalesOfBook> _salesOfBooks):
	dateReceipt(_dateReceipt), numDoc(_numDoc), supplierDetals(_supplierDetals), Books(_books), SalesOfBooks(_salesOfBooks) {
}

DataBase::DataBase(Date _dateReceipt, string _numDoc, string _supplierDetals, Book _book, SalesOfBook _salesOfBook) :
	dateReceipt(_dateReceipt), numDoc(_numDoc), supplierDetals(_supplierDetals){
	Books.push_back(_book);
	SalesOfBooks.push_back(_salesOfBook);
}


//setters
void DataBase::setDateReceipt(Date _date) {
	dateReceipt = _date;
}
void DataBase::setDateReceipt(short _year, string _mouth, short _day) {
	dateReceipt.year = _year;
	dateReceipt.mouth = _mouth;
	dateReceipt.day = _day;
}
void DataBase::setNumDoc(string _numDoc) {
	numDoc = _numDoc;
}
void DataBase::setSupplierDetals(string _supplierDetals) {
	supplierDetals = _supplierDetals;
}


void DataBase::addBook(Book _book, SalesOfBook _salesOfBook) {
	Books.push_back(_book);
	SalesOfBooks.push_back(_salesOfBook);
}


//getters
Date DataBase::getDate() {
	return dateReceipt;
}
string DataBase::getnumDoc() {
	return numDoc;
}
string DataBase::getsupplierDetals() {
	return supplierDetals;
}
Book DataBase::getBook(int num) {
	return Books[num];
}
std::vector<Book> DataBase::getBooks() {
	return Books;
}
SalesOfBook DataBase::getSalesOfBook(int num) {
	return SalesOfBooks[num];
}