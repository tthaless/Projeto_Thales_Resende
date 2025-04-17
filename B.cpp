#include <iostream>
using namespace std;

class B {
private:
    int B1;
    float B2;

public: // getters / setters
    
    int getB1() {
        return B1;
    }

    void setB1(int valor) {
        B1 = valor;
    }

    float getB2() {
        return B2;
    }

    void setB2(float valor) {
        B2 = valor;
    }

    // Métodos
    void MB1() {
        cout << "Método MB1" << endl;
    }

    void MB2() {
        cout << "Método MB2" << endl;
    }

    void MB3() {
        cout << "Método MB3" << endl;
    }
};