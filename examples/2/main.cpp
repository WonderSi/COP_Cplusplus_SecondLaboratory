//
// Created by 011ko on 28.02.2025.
//
#include <iostream>

using namespace std;

class First {
public:
    int x;
    First(int fx) {
        x = fx;
    };
    virtual int calc() {
        return x;
    };
    void print(string text) {
        std::cout << text << calc() << std::endl;
    };
};
class Second : public First {
public:
    Second(int fx):First(fx) {
    };
    virtual int calc() {
        return x * x;
    };
};
class Third : public Second {
public:
    Third(int fx):Second(fx) {
    };
    virtual int calc() {
        return x * x * x;
    };
};

//int main() {
//    First Z(1);
//    Z.print("class First: ");
//
//    Second X(3);
//    X.print("class Second: ");
//
//    Third Y(5);
//    Y.print("class Third: ");
//    return 0;
//};