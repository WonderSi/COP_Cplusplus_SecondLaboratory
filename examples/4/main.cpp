//
// Created by 011ko on 01.03.2025.
//
#include <iostream>

using namespace std;

class IX {
public:
    virtual void Fx1() = 0;
    virtual void Fx2() = 0;
    virtual void Fx3() = 0;
    virtual void Fx4() = 0;
};

class CA : public IX {
public:
    // Данные эксземпляра
    double m_Fx2;
    double m_Fx3;
    double m_Fx4;

    // Реализация интерфейса IX
    virtual void Fx1() { cout << "CA::Fx1" << endl; };
    virtual void Fx2() { cout << m_Fx2 << endl; };
    virtual void Fx3() { cout << m_Fx3 << endl; };
    virtual void Fx4() { cout << m_Fx4 << endl; };

    // Конструктор
    CA(double d) {
        m_Fx2 = d * d;
        m_Fx3 = d * d * d;
        m_Fx4 = d * d * d * d;
    };
};

int main() {
    // Создать 1-й экземпляр CA
    CA* pA1 = new CA(1.5);
    pA1->Fx1();
    pA1->Fx2();
    pA1->Fx3();
    pA1->Fx4();

    // Создать 2-й экземпляр CA
    CA* pA2 = new CA(2.75);
    pA2->Fx1();
    pA2->Fx2();
    pA2->Fx3();
    pA2->Fx4();

    return 0;
}