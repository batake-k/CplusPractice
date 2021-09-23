#include <iostream>
 
class Product {
    int id; // 商品ID
    int price; // 単価
    int stock; // 在庫数

public:
    Product(int _id, int _price, int _stock):
        id(_id), price(_price), stock(_stock) {};

    int get_id(); // 商品IDのgetter
    void set_id(int new_id); // 商品IDのsetter
    int get_price(); // 単価のgetter
    void set_price(int new_price); // 単価のsetter
    int get_stock(); // 在庫数のgetter
    void set_stock(int new_stock); // 在庫数のsetter
};

int Product::get_id() {
    // メンバー関数の内側ではメンバー変数に直接アクセスできる
    return id;
}

void Product::set_id(int new_id) {
    id = new_id;
}

int Product::get_price() {
    return price;
}

void Product::set_price(int new_price) {
    // Setterを使うと新しい値が不正な値でないかチェックできる
    if (new_price < 0) {
        std::cout << "エラー：単価は0以上にしてください" << std::endl;
        return;
    }
    price = new_price;
}

int Product::get_stock() {
    return stock;
}

void Product::set_stock(int new_stock) {
    if (new_stock < 0) {
        std::cout << "エラー：在庫数は0以上にしてください" << std::endl;
        return;
    }
    stock = new_stock;
}

int main() {
    Product pen(0, 100, 200); // ペンに関するデータを持つ変数
    Product* ptr = &pen; // インスタンスへのポインター
    // アロー演算子を使ってgetterから値を取得
    std::cout << "商品ID：" << ptr->get_id() << std::endl;
    std::cout << "単価：" << ptr->get_price() << std::endl;
    std::cout << "在庫数：" << ptr->get_stock() << std::endl;
}