// 1) class Number
//    {
//        int num;
//    }
// In the main function,
// Number n1(8),n2(4),n3(20),n4(6),n5;
// n5=n1-n2
// n5=n3/n4;
// n5=n1*n3

#include<bits/stdc++.h>
using namespace std;

class Number{
    int num;
    public:
        Number(){
            num=0;
        }
        Number(int n){
            num = n;
        }
        Number operator-(Number n){
            cout<<num-n.num<<endl;
            return Number(num-n.num);
        }
        Number operator/(Number n){
            cout<<num/n.num<<endl;
            return Number(num/n.num);
        }
        Number operator*(Number n){
            cout<<num*n.num<<endl;
            return Number(num*n.num);
        }
};

int main(){
    Number n1(8),n2(4),n3(20),n4(6),n5;
    n5=n1-n2;
    n5=n3/n4;
    n5=n1*n3;
    return 0;
}