// 4) Define a class , write two member functions 
// 	void disp1(){ //some code }
// 	void disp2(){ // some code }

// 	Try to call disp1   from    disp2.

#include<bits/stdc++.h>
using namespace std;

class Sample{
    public:
    void disp1(){
        cout<<"disp1"<<endl;
    }
    void disp2(){
        disp1();
        cout<<"disp2"<<endl;
    }
};

int main(){
    Sample s;
    s.disp2();
}