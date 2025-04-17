#include <iostream>
using namespace std;

class D {
private:
    
int D1;
float D2;

public: // getters / setters
    
    int getD1() { 
        return D1; 
    }
    
    void setD1(int valor) { 
        D1 = valor; 
    }

    float getD2() { 
        return D2; 
    }
    
    void setD2(float valor) {
         D2 = valor; 
    }

    // Métodos
    void MD1() { 
        cout << "Método MD1" << endl; 
    }
    
    void MD2() { 
        cout << "Método MD2" << endl; 
    }

<<<<<<< HEAD
    void MD3() {
        cout << "Método MD3" << endl;
    }
};
=======
    void MD4() {
    cout << "Método MD4" << endl;
    }
};
>>>>>>> 5191e3dda3be03a94494c7d80a917787c3f406c4
