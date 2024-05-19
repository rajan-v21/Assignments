// 6) define a function template which can take any type of pointer as an argument and by 
// dereferencing it , display the data. Now overload this function template, for int pointer.
// Call these functions (function templates and normal function) from main by passing 
// address of various different variables.

#include<bits/stdc++.h>
using namespace std;

template<class t>
void fun(t *p)
{
    cout<<*p<<endl;
}
void fun(int *p){
    cout<<*p<<endl;
}
int main(){
    int a=10;
    fun(&a);
    float b=10.5;
    fun(&b);
    char c='a';
    fun(&c);
}