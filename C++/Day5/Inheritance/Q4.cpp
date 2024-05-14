// 4)Define three classes A, B, C carrying one integer member in each of them. 
// Let C be derived from A and B. Write constructors and destructors in each of these classes 
// that prompt some message from each class. Also the constructor of C should accept 
// three values, one for its own member and other two for A and B. The C constructor should 
// see that the two values goes to respective constructors of A and B. What is the order in 
// which constructors and destructors get called upon? How can you change this order?

#include<bits/stdc++.h>
using namespace std;

class A{
    int num_A;
    public:
        A(int x){
            num_A = x;
            cout<<"constructor A"<<num_A<<endl;
        }
        ~A(){
            cout<<"destructor A"<<endl;
        }
};
class B{
    int num_B;
    public:
        B(int x){
            num_B = x;
            cout<<"constructor B"<<num_B<<endl;
        }
        ~B(){
            cout<<"destructor B"<<endl;
        }
};
class C: public A, public B{
    int num_C;
    public:
        C(int x, int y, int z):A(x),B(y){
            num_C = z;
            cout<<"constructor C"<<num_C<<endl;
        }
        ~C(){
            cout<<"destructor C"<<endl;
        }
};
int main(){
    C c(1,2,3);
    return 0;
}