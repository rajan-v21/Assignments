// 3) Write a class template, which can take 3 different type of arguments and print them.
// a class must have only one constructor and that is a constructor which will take 3 arguments.
// class must have disp function which will display the data.

#include<bits/stdc++.h>
using namespace std;

template<class T1, class T2, class T3>
class TemplateClass{
    T1 t1;
    T2 t2;
    T3 t3;
    public:
        TemplateClass(T1 t1, T2 t2, T3 t3){
            this->t1=t1;
            this->t2=t2;
            this->t3=t3;
        }
        void disp(){
            cout<<t1<<" "<<t2<<" "<<t3<<endl;
        }
};
int main(){
    TemplateClass<int, float, char> tc(10,20.5,'A');
    tc.disp();
}