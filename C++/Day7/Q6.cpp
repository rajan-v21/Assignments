// 6)Create a base class “Subject”.Declare pure virtual function “void maxmarks()” in it.
// Define following sub classes for this class. A) Maths b) History c) English.
// Define “maxmarks” in these classes. In main function, create array of pointer to Subject,  
// which will contain objects of these three sub classes. Using RTTI, find out where is 
// “History” and call its maxmarks() method.

#include<bits/stdc++.h>
using namespace std;

class Subject{
    public:
        virtual void maxmarks()=0;
};
class Maths:public Subject{
    public:
        void maxmarks(){
            cout<<"Maths"<<endl;
        }
};
class History:public Subject{
    public:
        void maxmarks(){
            cout<<"History"<<endl;
        }
};
class English:public Subject{
    public:
        void maxmarks(){
            cout<<"English"<<endl;
        }
};
int main(){
    Subject *s[3] = {new Maths(), new History(), new English()};
    for(int i=0;i<3;i++){
        if(typeid(*s[i])==typeid(History)){
            History *h = dynamic_cast<History *>(s[i]);
            h->maxmarks();
        }
        //Another way
        // if(dynamic_cast<History *>(s[i])){
        //     s[i]->maxmarks();
        // }
    }
}