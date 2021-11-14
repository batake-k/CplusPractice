class Product {
public:
    Product (int price) {};

    int get_price() const { return price;}
    void set_price(int _price) {price = _price;}

private:
    int price;
};