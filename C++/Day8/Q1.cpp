// 1) Write a class (not a class template) and inside it create a function template as a 
// member function. Invoke it from main function.

#include<bits/stdc++.h>
using namespace std;

class Sample{
    public:
    template<class T>
    void fun(T x){
        cout<<"Value of x is: "<<x<<endl;
    }
};
int main(){
    Sample s;
    s.fun(10);
    s.fun(10.5);
    s.fun('a');
}