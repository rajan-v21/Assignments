// 5) create a class Base with "int num1" ,parameterized constructor and destructor. 
// Derive class Sub1 from Base with "int num2" ,parameterized constructor and destructor. 
// Now derive class Sub2 from Sub1 with "int num3" ,parameterized constructor and destructor.
// in the main function create the object of Sub1 and notice constructor and destructor invocation.

#include<bits/stdc++.h>
using namespace std;
class Base{
    int num1;
    public:
        Base(int n){
            num1 = n;
            cout<<"base constructor"<<endl;
        }
        ~Base(){
            cout<<"base destructor"<<endl;
        }
};
class Sub1:public Base{
    int num2;
    public:
        Sub1(int n,int m):Base(n){
            num2 = m;
            cout<<"sub1 constructor"<<endl;
        }
        ~Sub1(){
            cout<<"sub1 destructor"<<endl;
        }
};
class Sub2:public Sub1{
    int num3;
    public:
        Sub2(int n,int m,int o):Sub1(n,m){
            num3 = o;
            cout<<"sub2 constructor"<<endl;
        }
        ~Sub2(){
            cout<<"sub2 destructor"<<endl;
        }
};
int main(){
    Sub1 s1(10,20);
}