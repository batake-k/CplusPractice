#include <iostream>

using namespace std;

struct Product {
    int id;
    int price;
    int stock;
};

void showProduct(Product* product){
    cout << "商品ID：" << product->id << endl;
    cout << "単価：" << product->price << endl;
    cout << "在庫数：" << product->stock << endl;
}

int main(){
    Product pen = {
        0,
        100,
        200,
    };

    showProduct(&pen);
}
