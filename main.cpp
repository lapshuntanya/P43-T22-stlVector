#include "Vector.h"

int main() {

    Vector<int> a; //size = 0, arr = nullptr
    a.push_back(3);
    a.push_back(9);
    a.push_back(-67);
    //3 9 -67
    a[0] = -3; //-3 9 67
    cout << a[0] << endl;
    cout << a[1] << endl;

    Vector<int> b(6, 0); //size = 6, [0 0 0 0 0 0]
    b.push_back(89);
    b[2] = 56;
    //0 0 56 0 0 0 89

    Vector<char> k(3, 'a'); // size = 3, [a a a]
    k.push_back('d');
    k.push_back('!');
    k[1] = 'k';

    //a k a d !
    //Створіть масив дробових чисел із 7 елементів зі значенням 3.14

    a.print();
    b.print();
    k.print();

    return 0;
}
