// 5) Define a class with constructor and  member function
// 	create object, call member function
// 	now create a reference to that object, and using that reference try to call member function

#include<bits/stdc++.h>
using namespace std;
class Sample{
    public:
    Sample(){
        cout<<"constructor"<<endl;
    }
    void disp(){
        cout<<"disp"<<endl;
    }
};
int main(){
    Sample s;
    s.disp();
    Sample &s1=s;
    s1.disp();
}