// 1)class base
// {
// 	public:
// 		base(char *ptr)
// 		{}
// };
// class sub:public base
// {};
// Following statements should be possible
// sub s;
// sub *s1=new sub(40);
// sub *s2=new sub('a',4.5);

#include<bits/stdc++.h> 
using namespace std;

class base{
    public:
        base(char *ptr)
        {}
};
class sub:public base{
    public:
        sub():base("constructor"){}
        sub(int x):base("constructor"){
            cout<<"in parameterized constructor "<<x<<endl;
        }
        sub(char x,double y):base("constructor"){
            cout<<"in parameterized constructor "<<x<<" "<<y<<endl;
        }
};

int main(){
    sub s;
    sub *s1=new sub(40);
    sub *s2=new sub('a',4.5);
    delete s1;
    delete s2;

    return 0;
}