#include <string>
#include <iostream>

using namespace std;

class Book {
public:
    Book(string _title, string _writer, int _price)
        :title(_title), writer(_writer), price(_price) {};

    Book(const Book& other)
        :title(other.title), writer(other.writer), price(other.price){};

    void writeStatus() const {
        cout << "title: " << title << endl
             << "writer: " << writer << endl
             << "price: " << price << endl;
    }

private:
    string title;
    string writer;
    int price;
};

int main() {
    Book book("hoge", "hoge.hoge.hoge", 100);

    Book book2(book);
    book2.writeStatus();
}