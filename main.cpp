#include "Vector.h"

int main() {

    Vector<int> a; //size = 0, arr = nullptr
    Vector<int> b(6, 0); //size = 6, [0 0 0 0 0 0]
    Vector<char> k(3, 'a'); // size = 3, [a a a]
    //Створіть масив дробових чисел із 7 елементів зі значенням 3.14

    a.print();
    b.print();
    k.print();

    return 0;
}
