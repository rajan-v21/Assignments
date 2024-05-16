// 3)	Create a base class Cricket. Declare pure virtual function “void play()” in it. 			
// Define following sub classes for this class.
// A) FiftyOver  b) Test  c) TwentyOver	
// “Test” class will have one more function “daywise_summary()”.
// create a global function “void doit() which accepts reference of type Cricket so that 
// it can invoke “play()” function polymorphically. 
// Inside this function find out where exactly where “Test” is stored using  
// RTTI (dynamic_cast) , and invoke “daywise_summary()” function along with “play()” function. 
// [ handle bad_cast exception ]

#include<bits/stdc++.h>
using namespace std;

class Cricket{
    public:
        virtual void play()=0;
};
class FiftyOver:public Cricket{
    public:
        void play(){
            cout<<"FiftyOver"<<endl;
        }
};
class Test:public Cricket{
    public:
        void play(){
            cout<<"Test"<<endl;
        }
        void daywise_summary(){
            cout<<"daywise_summary"<<endl;
        }
};
class TwentyOver:public Cricket{
    public:
        void play(){
            cout<<"TwentyOver"<<endl;
        }
};
void doit(Cricket &c){
    try{
        //Test *t=dynamic_cast<Test*>(&c); 
        //if(t!=NULL)
        //    t->daywise_summary();
        //another way
        Test &t=dynamic_cast<Test&>(c);
        if(&t!=NULL)
            t.daywise_summary();
        c.play();
    }
    catch(bad_cast e){
        cout<<e.what()<<endl;
    }
}
int main(){
    FiftyOver f;
    Test t;
    TwentyOver tw;
    doit(f);
    doit(t);
    doit(tw);
}