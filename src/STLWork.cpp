//
// Created by 胡慧杰 on 2023/2/12.
//

#include "STLWork.h"
#include <vector>
#include <algorithm>//标准算法的头文件
#include <string>
#include <map>
#include <deque>
#include <array>

void myPrint(int val) {
    cout << val << endl;
}


void func1() {
    vector<int> v;
    v.push_back(1);
    v.push_back(10);
    v.push_back(100);
    v.push_back(100);
    v.push_back(1000);
//    通过迭代器访问容器中的数据
    vector<int>::iterator itBegin = v.begin();//起始迭代器，指向容器中第一个元素
    vector<int>::iterator itEnd = v.end();//结束迭代器，指向容器中最后一个元素的下一个位置
    //第一种遍历方式

//    while (itBegin != itEnd) {
//        cout << *itBegin << endl;
//        itBegin++;
//    }
//    //第二种遍历方式
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//        cout << *it << endl;
//
//    }

    //第三种遍历方式，利用stl 提供遍历方式
    for_each(v.begin(), v.end(), myPrint);

}


void func2() {
    vector<vector<int>> v;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    for (int i = 0; i < 4; ++i) {
        v1.push_back(i + 1);
        v2.push_back(i + 2);
        v3.push_back(i + 3);
        v4.push_back(i + 5);
    }
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    for (vector<vector<int >>::iterator it1 = v.begin(); it1 != v.end();
         it1++) {
        for (vector<int>::iterator it2 = (*it1).begin(); it2 != (*it1).end(); it2++) {
            cout << *it2 << " ";
        }
        cout << endl;
    }
}


void onString1() {
    cout << "==onString1===" << endl;
    string str("1111");
    cout << "=========" + str << endl;
    string str1(2, 'L');
    cout << str1 << endl;
    string str2("12345", 1, 3);
    cout << str2 << endl;


}

void onString2() {
    string s1("123456");
    string s3("12");
    cout << s3 << endl;
    s3.assign(s1);
    cout << s3 << endl;
    cout << s3.size() << endl;
    cout << s3.append(s1) << endl;

}


void onString3() {
//    string s1("hello"), s2("hell1");
//    int n = s1.compare(s2);
//    cout << n << endl;

    string s1("west"), s2("east");
    s1.swap(s2);
    cout << s1 << "-------" << s2 << endl;


    string target("第一种拼接方法");
    cout << target.find("一") << endl;

}


void mapFunc1() {
    map<int, string> mapStudent;
    mapStudent.insert(pair<int, string>(000, "dddd"));
    mapStudent.insert(map<int, string>::value_type(123, "student_one"));
    mapStudent[123] = "student_first";
    mapStudent[456] = "student_second";

    map<int, string>::iterator iter = mapStudent.find(123);
    if (iter != mapStudent.end()) {
        cout << "Find, the value is" << iter->second << endl;
    } else {
        cout << "Do not Find" << endl;
    }

//    mapStudent.erase(iter);
    int n = mapStudent.erase(123);
    cout << "Do not Find" << n << endl;
    cout << "size1" << mapStudent.size() << endl;


    mapStudent.erase(mapStudent.begin(), mapStudent.end());
    mapStudent.clear();
    cout << "size2" << mapStudent.size() << endl;


}


void dequeFunc1() {
    cout << "dequeFunc1" << endl;
    deque<int> d;
    deque<int> value(5);
    cout << value.size() << endl;

    deque<int> value1(6, 5);
    cout << value1.size() << endl;

    deque<double> value2(100);
    deque<double> value3(value2);
    cout << value3.size() << endl;

    int value6[] = {1, 2, 3, 4, 5, 6};
    deque<int> values8(value6, value6 + 1);
    array<int, 3> arr{5, 6, 7};

}


void arrayFun1() {
    array<double, 9> values1;
    cout << "arrayFun1  " << values1.size() << endl;
    array<double, 11> values2{};
    cout << "arrayFun1  " << values2.size() << endl;
    array<double, 12> values3{0.5, 1.0, 1.5, 2.0};
    cout << "arrayFun1   " << values3.size() << endl;
}

void ::STLWork::start() {
    cout << "STL_WORK" << endl;
//    func1();
//    func2();
//    onString1();
//    onString2();
//    onString3();
//    mapFunc1();
//    dequeFunc1();
    arrayFun1();

}
