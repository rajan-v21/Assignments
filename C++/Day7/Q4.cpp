// 4)	Create a base class Cricket. Declare pure virtual function “void play()” in it. 			
// Define following sub classes for this class.                                                 		A) FiftyOver  b) Test  c) TwentyOver	
// “Test” class will have one more function “daywise_summary()”.  
// Create an array of pointer to “Cricket” class having 3 elements. 
// Store child class objects into this array.
// Now using  using  RTTI , find out where is  “Test”,  and call “daywise_summary()”  
// along with “play()” function.

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
int main(){
    Cricket *ptr[3]={new FiftyOver,new Test,new TwentyOver};
    
    for(int i=0;i<3;i++){
        Test *t=dynamic_cast<Test *>(ptr[i]);
        if(t!=NULL){
            t->daywise_summary();
        }
        ptr[i]->play();
    }
}