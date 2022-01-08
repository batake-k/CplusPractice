#include <iostream>
#include <initializer_list>

class Test {
public:
    Test(std::initializer_list<int> list);
private:
};

Test::Test(std::initializer_list<int> list){
    for(auto e : list){
        std::cout << e << std::endl;
    }
}

int main(){
    Test test({1,2,3,4,5});
}