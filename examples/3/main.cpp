//
// Created by 011ko on 28.02.2025.
//
#include <iostream>

using namespace std;

class IX { // Первый интерфейс
public:
    virtual void Fx1() = 0;
    virtual void Fx2() = 0;
};

class IY { // Второй интерфейс
public:
    virtual void Fy1() = 0;
    virtual void Fy2() = 0;
};

class CA : public IX, public IY { // Компонент
public:
    // Реализация абстрактного базового класса IX
    virtual void Fx1() { cout << "Fx1" << endl; }
    virtual void Fx2() { cout << "Fx2" << endl; }
    // Реализация абстрактного базового класса IY
    virtual void Fy1() { cout << "Fy1" << endl; }
    virtual void Fy2() { cout << "Fy2" << endl; }
};

//int main() {
//    cout << "Client: create an example of component" << endl;
//    CA* pA = new CA;
//
//    IX* pIX = pA;
//
//    cout << "Client: using interface IX" << endl;
//    pIX->Fx1();
//    pIX->Fx2();
//
//    IY* pIY = pA;
//
//    cout << "Client: using interface IY" << endl;
//    pIY->Fy1();
//    pIY->Fy2();
//
//    cout << "client: deleting component" << endl;
//    delete pA;
//
//    return 0;
//}


