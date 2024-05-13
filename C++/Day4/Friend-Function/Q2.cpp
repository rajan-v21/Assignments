// 2) 
// class First
// {
// 	int a;
// };
// class Second
// {
// 	public:
// 		void fun1(){}
// 		void fun2(){}
// 		void fun3(){}
// };

// Above code is incomplete.
// Make sure that all the member functions of "Second" will access "a".

#include<bits/stdc++.h>
using namespace std;

class First{
    int a;
    public:
    First(int x){
        a = x;
    }
    friend class Second;
};

class Second{
    public:
    void fun1(First f){
        cout<<"fun1"<<f.a<<endl;
    }
    void fun2(First f){
        cout<<"fun2"<<f.a<<endl;
    }
    void fun3(First f){
        cout<<"fun3"<<f.a<<endl;
    }
};

int main(){
    First f(10);
    Second s;
    s.fun1(f);
    s.fun2(f);
    s.fun3(f);
}
