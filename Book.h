#pragma once
#include <string>
#include <vector>
#include <iostream>

using std::string;

struct Autor 
{
	string name;
	string surname;
};

class Book
{
private:
	string genre;
	string name;
	std::vector<Autor> autors;
	unsigned short year;
	string publisher;
	string placeOfPubl;
	unsigned short numOfPages;
	double price;
public:
	Book();
	Book(string Cgenre, string Cname, Autor Cautor, unsigned short Cyear, string Cpublisher, string CplaceOfPub, unsigned short CnumOfPages, double Cprice);
	Book(string Cgenre, string Cname, string CauyorName, string CauyorSurname, unsigned short Cyear, string Cpublisher, string CplaceOfPub, unsigned short CnumOfPages, double Cprice);
	
	//seters
	void setGenre(string genre);
	void setName(string name);
	void setAutor(Autor autor);
	void setAutor(string name, string surname);
	void addAutor(Autor autor);
	void addAutor(string name, string surname);
	void delLastAutor();
	void setYear(unsigned short year);
	void setPublisher(string publisher);
	void setPlaceOfPubl(string placeOfPubl);
	void setNumOfPages(unsigned short numOfPages);
	void setPrice(double price);
	//geters
	string getGenre();
	string getName();
	std::vector<Autor> getAutors();
	unsigned short getYear();
	string getPublisher();
	string getPlaceOfPubl();
	unsigned short getNumOfPages();
	double getPrice();
};

