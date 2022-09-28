#pragma once
#include "Book.h"
#include "SalesOfBook.h"

class DataBase {
private:
	Date dateReceipt;
	string numDoc;
	string supplierDetals;
	std::vector<Book> Books;
	std::vector<SalesOfBook> SalesOfBooks;
public:
	DataBase();
	DataBase(Date _dateReceipt, string _numDoc, string _supplierDetals);
	DataBase(Date _dateReceipt, string _numDoc, string _supplierDetals, std::vector<Book> _books, std::vector<SalesOfBook> _salesOfBooks);
	DataBase(Date _dateReceipt, string _numDoc, string _supplierDetals, Book _book, SalesOfBook _salesOfBook);

	//setters
	void setDateReceipt(Date _date);
	void setDateReceipt(short _year, string _mouth, short day);
	void setNumDoc(string _numDoc);
	void setSupplierDetals(string _supplierDetals);
	
	void addBook(Book _book, SalesOfBook _salesOfBook);

	//getters
	Date getDate();
	string getnumDoc();
	string getsupplierDetals();
	Book getBook(int num);
	std::vector<Book> getBooks();
	SalesOfBook getSalesOfBook(int num);
};