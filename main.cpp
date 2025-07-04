#include "Vector.h"

int main() {

    Vector<int> a; //size = 0, arr = nullptr
    a.push_back(3);
    a.push_back(9);
    a.push_back(-67);

    Vector<int> b(6, 0); //size = 6, [0 0 0 0 0 0]
    b.push_back(89);

    Vector<char> k(3, 'a'); // size = 3, [a a a]
    k.push_back('d');
    k.push_back('!');
    //Створіть масив дробових чисел із 7 елементів зі значенням 3.14

    a.print();
    b.print();
    k.print();

    return 0;
}
