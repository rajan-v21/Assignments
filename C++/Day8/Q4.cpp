// 4) Write a class template, which can take 3 different type of arguments.
// Do not define any constructor for this class template.
// class must have 3 setter methods and 3 getter methods.

#include<bits/stdc++.h>
using namespace std;


template<class T1, class T2, class T3>
class TemplateClass
{
    T1 t1;
    T2 t2;
    T3 t3;
    public:
    void set1(T1 t1){
        this->t1=t1;
    }
    void set2(T2 t2){
        this->t2=t2;
    }
    void set3(T3 t3){
        this->t3=t3;
    }
    T1 get1(){
        return t1;
    }
    T2 get2(){
        return t2;
    }
    T3 get3(){
        return t3;
    }
};
int main(){
    TemplateClass<int, float, char> tc;
    tc.set1(10);
    tc.set2(10.5);
    tc.set3('A');
    cout<<tc.get1()<<" "<<tc.get2()<<" "<<tc.get3();
}