/*
 * 03 普通函数与模板函数重载
 * 
 * funT1和funT2都是函数模板与普通函数重载
 * funT3和funT4是函数模板与函数模板重载
 * 
*/

#include<iostream>
#include<cxxabi.h>
using namespace std;

template<class T1,class T2 = int>
void funT1(T1 a,T2 b=1){
    cout << abi::__cxa_demangle(typeid(a).name(),0,0,0)<< endl;
    cout << abi::__cxa_demangle(typeid(b).name(),0,0,0) << endl;
}

int main()
{
    funT1(1); // int int
    

    return 0;
}