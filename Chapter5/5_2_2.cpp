#include <string>
#include <vector>

class Product {
public:
    explicit Product(int _id, int _price, std::string _name)
        :id(_id), price(_price), name(_name) {};

    Product()
        :id(0), price(0), name("") {};

private:
    int id;
    int price;
    std::string name;
};

int main() {

    std::vector<Product> v {
        Product(1, 60000, "smart phone"),
        Product(2, 35000, "tablet"),
    };
    
    v.emplace_back(Product());
    v.emplace_back(Product());
}