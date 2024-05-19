// 5) define a class "Emp" with "private int data=100"  
// write a function template,which can accept anything as an argument and display it.
// It can also accept "Emp" class object as an argument and display it 
// ( Hint:- insertion operator overloading )

#include<bits/stdc++.h>
using namespace std;

class Emp{
    int data=100;
    public:
    template<class T>
    void disp(T t){
        cout<<t<<endl;
    }
    friend ostream& operator<<(ostream&, Emp&);
};
ostream& operator<<(ostream& os, Emp& e){
    return os<<e.data<<endl;
}
int main(){
    Emp e1;
    e1.disp(10);
    Emp e2;
    e2.disp(e1);
}
