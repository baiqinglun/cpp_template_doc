/*
 * 02 函数模板的调用和函数推到
 * 
 * 3种调用方式
 * // 1. 编译器自动推到类型
 * cout << funT(1,2) <<endl;
 * // 2. 编译器自动推到类型
 * cout << funT<>(1.1,2.1) <<endl;
 * // 3. 设定T的类型为int
 * cout << funT<int>(1.1,2.1) <<endl;
 * 
*/

#include<iostream>
using namespace std;

template<class T>
T funT(T a,T b){
    return a+b;
}

// 多个参数
template<class T1,class T2,class T3>
T1 funT1(T1 a,T2 b){
    return a+b;
}

int main()
{
    // 1. 编译器自动推到类型
    cout << funT(1,2) <<endl;
    // 2. 编译器自动推到类型
    cout << funT<>(1.1,2.1) <<endl;
    // 3. 设定T的类型为int
    cout << funT<int>(1.1,2.1) <<endl;

    cout << funT1<int,int,int>(1,2) <<endl;
    // cout << funT1(1,2) <<endl; // 报错
    return 0;
}