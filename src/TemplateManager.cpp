//
// Created by 胡慧杰 on 2023/2/9.
//

#include "TemplateManager.h"

template<class T>
void swapInt(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}


void ::TemplateManager::start() {
    cout << "onStart" << endl;
    int a = 90;
    int b = 10;
    swapInt(a, b);
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;

    swapInt<int>(a, b);
}