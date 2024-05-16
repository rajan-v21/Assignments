// 2)	Create a base class Animal. Declare pure virtual function “void makeSound()” in it. 			
// Define following sub classes for this class.
// A) Dog  b) Cat  c) Tiger	
// “Tiger” class will have one more function “hunting()”.
// create a global function “void perform() which accepts pointer of type Animal so that 
// it can invoke “makeSound()” function polymorphically. 
// Inside this function find out where exactly where “Tiger” is stored using  
// RTTI (dynamic_cast) , and invoke “hunting()” function along with “makeSound()” function.

#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void makeSound()=0;
};
class Dog:public Animal{
    public:
    void makeSound(){
        cout<<"Bark"<<endl;
    }
};
class Cat:public Animal{
    public:
    void makeSound(){
        cout<<"Meow"<<endl;
    }
};
class Tiger:public Animal{
    public:
    void makeSound(){
        cout<<"Roar"<<endl;
    }
    void hunting(){
        cout<<"Hunting"<<endl;
    }
};
void perform(Animal *a){
    a->makeSound();
    Tiger* t = dynamic_cast<Tiger*>(a);
    if(t){
        t->hunting();
    }
}
int main(){
    perform(new Dog());
    perform(new Cat());
    perform(new Tiger());
    return 0;
}