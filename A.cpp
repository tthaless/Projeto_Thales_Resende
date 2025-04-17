#include <iostream>
using namespace std;

class A {
private:
    int A1;
    float A2;

public: // getters / setters

    int getA1() {
        return A1;
    }

    void setA1(int valor) {
        A1 = valor;
    }

    float getA2() {
        return A2;
    }

    void setA2(float valor) {
        A2 = valor;
    }

    // Métodos
    void MA1() {
        cout << "Método MA1" << endl;
    }

    void MA2() {
        cout << "Método MA2" << endl;
    }
};