//
// Created by 胡慧杰 on 2023/2/1.
//

#include <fstream>
#include "IOManager.h"

void open1() {
    ofstream file;
    string path = "../doc/a.txt";
    file.open(path, ios::out);
    file << "dd111dd";
    file.close();
}


void open2() {
    //1.导入头文件

    //2.创建流对象
    ifstream ifs;
    //3.打开文件 并且判断是否打开成功
    ifs.open("../doc/a1.txt", ios::in);
    //4.读数据
    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
        return;
    }

//    //第一种
//    char buf[1024] = {0};
//    while (ifs >> buf) {
//        cout << buf << endl;
//    }
//    //第二种
//    char buf[1024] = {0};
//    while (ifs.getline(buf, sizeof(buf))) {
//        cout << buf << endl;
//    }
    //第三种
//    string buf;
//    while (getline(ifs, buf)) {
//        cout << buf << endl;
//    }
    //第四种
    char c;
    while ((c = ifs.get()) != EOF)//EOF end of file
    {
        cout << c << endl;
    }

    //5.关闭文件
    ifs.close();

}


void ::IOManager::onStart() {

    cout << "=IOManager===onStart==" << endl;
//    open1();
    open2();

}
