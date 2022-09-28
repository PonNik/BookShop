#include "Book.h"

Book::Book() 
{

}

Book::Book(string Cgenre, string Cname, Autor Cautor, unsigned short Cyear, string Cpublisher, string CplaceOfPub, unsigned short CnumOfPages, double Cprice) :
	genre(Cgenre), name(Cname), year(Cyear), publisher(Cpublisher), placeOfPubl(CplaceOfPub), numOfPages(CnumOfPages), price(Cprice)
{
	autors.push_back(Cautor);
}
Book::Book(string Cgenre, string Cname, string CauyorName, string CauyorSurname, unsigned short Cyear, string Cpublisher, string CplaceOfPub, unsigned short CnumOfPages, double Cprice):
	genre(Cgenre), name(Cname), year(Cyear), publisher(Cpublisher), placeOfPubl(CplaceOfPub), numOfPages(CnumOfPages), price(Cprice)
{
	Autor autor;
	autor.name = CauyorName;
	autor.surname = CauyorSurname;
	autors.push_back(autor);
}

//seters
void Book::setGenre(string genre)
{
	this->genre = genre;
}
void Book::setName(string name)
{
	this->name = name;
}
void Book::setAutor(Autor autor)
{
	autors.push_back(autor);
}
void Book::setAutor(string name, string surname)
{
	Autor newAutor;
	newAutor.name = name;
	newAutor.surname = surname;
	autors.push_back(newAutor);
}
void Book::addAutor(Autor autor)
{
	autors.push_back(autor);
}
void Book::addAutor(string name, string surname)
{
	Autor newAutor;
	newAutor.name = name;
	newAutor.surname = surname;
	autors.push_back(newAutor);
}
void Book::delLastAutor()
{
	autors.pop_back();
}
void Book::setYear(unsigned short year)
{
	this->year = year;
}
void Book::setPublisher(string publisher)
{
	this->publisher = publisher;
}
void Book::setPlaceOfPubl(string placeOfPubl)
{
	this->placeOfPubl = placeOfPubl;
}
void Book::setNumOfPages(unsigned short numOfPages)
{
	this->numOfPages = numOfPages;
}
void Book::setPrice(double price)
{
	this->price = price;
}
//geters
string Book::getGenre()
{
	return genre;
}
string Book::getName()
{
	return name;
}
std::vector<Autor> Book::getAutors()
{
	return autors;
}
unsigned short Book::getYear()
{
	return year;
}
string Book::getPublisher()
{
	return publisher;
}
string Book::getPlaceOfPubl()
{
	return placeOfPubl;
}
unsigned short Book::getNumOfPages()
{
	return numOfPages;
}
double Book::getPrice()
{
	return price;
}
