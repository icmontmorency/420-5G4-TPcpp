#include <iostream>
#include <algorithm>

#include "book.h"

using namespace std;

// Constructor
Book::Book() {}
Book::Book(const string& title, const string& author, const string& isbn) {
    this->title = title;
    this->author = author;
    this->isbn = isbn;
};

    string Book::getTitle() const {return this->title;}
    string Book::getAuthor() const {return this->author;}
    string Book::getISBN() const {return this->isbn;}
    bool Book::getAvailability() const {return this->isAvailable;}
    string Book::getBorrowerId() const {return this->borrowerId;}

    // Setters
    void Book::setTitle(const string& title){this->title = title;}
    void Book::setAuthor(const string& author){this->author = author;}
    void Book::setISBN(const string& isbn){this->isbn = isbn;}
    void Book::setAvailability(bool available) {this->isAvailable = available;}
    void Book::setBorrowerId(const string& id) {this->borrowerId = id;}

    // Methods
    void Book::checkOut(const string& borrowerId) {

    };
    void Book::returnBook() {

    };
    string Book::toString() const {

    };
    string Book::toFileFormat() const {

    };
    void Book::fromFileFormat(const string& line) {

    };