// 2)write a number class with
// int num;
// void disp(){}

// u should be able to do following

// number n1(20);
// int k=-n1;

// n1+=5;
// n1.disp()

// number n2(35);
// if(n1!=n2)
// {   some message }
// number n3(12);
// if(n3 < n1)
// {   some message }
// number n4;
// n4=n2*n3;

#include<bits/stdc++.h>
using namespace std;
class Number{
    private:
        int num;
    public:
        Number(){
            num = 0;
        }
        Number(int n){
            num = n;
        }
        void disp(){
            cout<<num<<endl;
        }
        operator int(){
            return -num;
        }
        Number operator+=(Number n){
            num+=n.num;
            return *this;
        }
        bool operator!=(Number n){
            return num!=n.num;
        }
};
int main(){
    Number n1(20);
    int k=-n1;
    cout<<k<<endl;
    n1+=5;
    n1.disp();
    Number n2(35);
    if(n1!=n2)
        cout<<"n1 and n2 are not equal"<<endl;
    Number n3(12);
    if(n3 < n1)
        cout<<"n3 is less than n1"<<endl;
    Number n4;
    n4=n2*n3;
    n4.disp();  
}