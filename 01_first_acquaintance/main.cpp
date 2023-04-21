/*
 * 01 模板初识
 * 
 * 所谓函数模板，实际就是写一个通用函数，返回值和参数的类型都是可变的，用一个特定格式的变量来指定
 * 然后调用此函数的时候，编译器会根据参数的数据类型，自动推导类型，从而达到函数在不同的类型参数下可复用的目的
 * 这个通用函数，就是函数模板
 * 
 * template<class T> T是一个变量名，可以使用class，也可以使用typename
 * 参数可以有多个
*/

#include<iostream>
using namespace std;

template<class T>
T funT(T a,T b){
    return a+b;
}

int main()
{
    cout << funT(1,2) <<endl;
    cout << funT(1.1,2.1) <<endl;
    return 0;
}