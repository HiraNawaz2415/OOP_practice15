// 2415..
#include <iostream>
using namespace std;

class Book {
public:
    string title;
    Book(string t) : title(t) {}
};

class Library {
public:
    Book* book;  // Aggregation: Library has a Book pointer
    Library(Book* b) : book(b) {}
    void showBook() {
        cout << "Book title: " << book->title << endl;
    }
};

int main() {
    Book b1("C++ Programming");
    Library lib(&b1);  // Library has a Book but doesn't own it
    lib.showBook();
    return 0;
}
