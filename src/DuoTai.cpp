//
// Created by 胡慧杰 on 2023/2/1.
//

#include "DuoTai.h"


class Animal {
public:
    virtual void eat() {
        cout << "animal  eat" << endl;
    }

    virtual void chuxu() = 0;
};


class Cat : public Animal {
public:
    void eat() override {
        cout << "cat  eat" << endl;
    }

    void chuxu() override {
        cout << "cat  chunxu" << endl;
    }

};


void onMessage(Animal &anim) {
    anim.eat();
    anim.chuxu();
}

void ::DuoTai::onStart() {
    cout << "Duotai  onStart" << endl;
    Cat anim;
    onMessage(anim);
}