//
// Created by Lapshun Tetiana on 04.07.2025.
//

#ifndef P43_T22_STLVECTOR_VECTOR_H
#define P43_T22_STLVECTOR_VECTOR_H

#include <iostream>
using  namespace  std;

template <typename Type>
class Vector{
    int size;
    Type* arr;

public:
    Vector(){
        size = 0;
        arr = nullptr;
    }

    Vector(int _size, Type value){ //_size = 4, value = 1
        size = _size;
        arr = new Type[size]; // [ _ _ _ _ ]
        for (int i = 0; i < size; ++i) {
            arr[i] = value; // [ 1 1 1 1 ]
        }
    }

    ~Vector(){
        if(size > 0) delete[] arr;

        arr = nullptr;
        size = 0;
    }

    void print()const{
        if(size == 0) cout << "Vector is empty!\n";
        else{
            for (int i = 0; i < size; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

};




#endif //P43_T22_STLVECTOR_VECTOR_H
