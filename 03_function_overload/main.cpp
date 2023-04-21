/*
 * 03 普通函数与模板函数重载
 * 
 * funT1和funT2都是函数模板与普通函数重载
 * funT3和funT4是函数模板与函数模板重载
 * 
*/

#include<iostream>
using namespace std;

// 有参普通函数与函数模板重载
int funT1(int a,int b){
    cout << "这是普通函数 funT1"<< endl;
    return a + b;
}
template<class T>
T funT1(T a,T b){
    cout << "这是模板函数 funT1" << endl;
    return a + b;
}

// 无参普通函数与函数模板重载
void funT2(){
    cout << "这是普通函数 funT2"<< endl;
}
template<class T>
void funT2(){
    cout << "这是模板函数 funT2"<< endl;
}

// 不同类型函数重载
template<class T>
void funT3(T a, T b){
    cout << "这是模板函数 funT3"<< endl;
}
template<class T>
void funT3(T *a, T *b){
    cout << "这是模板函数 *funT3"<< endl;
}

// 多参数函数重载
template<class T>
void funT4(T a, T b){
    cout << "这是模板函数 funT4(2参数)"<< endl;
}
template<class T>
void funT4(T a){
    cout << "这是模板函数 funT4(1参数)"<< endl;
}

int main()
{
    funT1(1,1); // 这是普通函数 funT1
    funT1(1.1,1.1); // 这是模板函数 funT1

    funT2(); // 这是普通函数 funT2
    funT2<int>(); // 这是模板函数 funT2

    int a = 1;
    int b = 2;
    funT3(a,b); // 这是模板函数 funT3
    funT3(&a,&b); // 这是模板函数 *funT3

    funT4(a); // 这是模板函数 funT4(1参数)
    funT4(a,a); // 这是模板函数 funT4(2参数)

    return 0;
}