// 1) 
// class course{};
// class DacCourse:public course{};
// you should be able to say following
// course *c=new course;
// c->fees(); // course version should be called
// c=new DacCourse;
// c->fees();  // DacCourse version should be called

#include<bits/stdc++.h>
using namespace std;

class course{
    public:
        void fees()
        {
            cout<<"fees is 1000"<<endl;
        }
};
class DacCourse:public course{
    public:
        void fees()
        {
            cout<<"fees is 2000"<<endl;
        }
};
int main(){
    course *c=new course;
    c->fees();
    c=new DacCourse;
    c->fees();
}