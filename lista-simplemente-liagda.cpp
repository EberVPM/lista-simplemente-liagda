#include <iostream>

class Nodo {
private:
    int dato;
    Nodo* p;

public:
    Nodo() { p = nullptr; }
    void setDato(int d) { dato = d; }
    int getDato() { return dato; }
    void setP(Nodo* ps) { p = ps; }
    Nodo* getP() { return p; }
};

int main() {
    Nodo* inicio = nullptr;
    Nodo* actual = nullptr;

    int i;
    for (i = 1; i <= 100; i++) {
        Nodo* nuevo = new Nodo;
        nuevo->setDato(i);

        if (inicio == nullptr) {
            inicio = nuevo;
            actual = nuevo;
        }
        else {
            actual->setP(nuevo);
            actual = nuevo;
        }
    }

    actual = inicio;

    for (i = 1; i <= 100; i++) {
        std::cout << actual->getDato() << std::endl;
        actual = actual->getP();
    }

    return 0;
}
