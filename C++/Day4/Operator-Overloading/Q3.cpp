// 3) Given:
// class Module1
// {
// 	int duration;
// 	public:
// 		Module1(int k)
// 		{duration=k;}
// };

// class Module2
// {
// 	int duration;
// 	public:
// 		Module2(int k)
// 		{duration=k;}
// };		
	
// write a global function "check" which will take 2 modules (i.e. Module1 and Module2 ) and check whether Modules are same or not.
// call this "check" function from main function.	

#include<bits/stdc++.h>
using namespace std;

class Module2;
class Module1{
    int duration;
    public:
        Module1(int k){
            duration=k;
        }
        friend void check(Module1 m1,Module2 m2);
};
class Module2{
    int duration;
    public:
        Module2(int k){
            duration=k;
        } 
        friend void check(Module1 m1,Module2 m2);  
};

void check(Module1 m1,Module2 m2){

    if(m1.duration==m2.duration)
        cout<<"Modules are same"<<endl;
    else
        cout<<"Modules are not same"<<endl;
}

int main(){

    Module1 m1(5);
    Module2 m2(5);
    check(m1,m2);
}