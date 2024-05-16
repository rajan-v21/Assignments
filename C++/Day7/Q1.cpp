// 1)	Create a base class Weapon. Declare pure virtual function “void attack()” in it. 			
// Define following sub classes for this class.
// A) Gun  b) Sword  c) Rifle		
// “Rifle” class will have one more function “Chambering ()”.
// create an array of pointer to Weapon having 3 elements.
// In this array , store  the instances of child classes.
// Traverse the array , find out where exactly “Rifle”  is stored using  RTTI (dynamic_cast), 
// and invoke “Chambering ()” function along with “attack()” function.

#include<bits/stdc++.h>
using namespace std;

class Weapon{
    public:
        virtual void attack()=0;
};
class Gun:public Weapon{
    public:
        void attack(){
            cout<<"Gun Attack"<<endl;
        }
};
class Sword:public Weapon{
    public:
        void attack(){
            cout<<"Sword Attack"<<endl;
        }
};
class Rifle:public Weapon{
    public:
        void attack(){
            cout<<"Rifle Attack"<<endl;
        }
        void chambering(){
            cout<<"Rifle chambering"<<endl;
        }
};
int main(){
    Weapon *ptr[3]={new Gun,new Sword,new Rifle};
    for(int i=0;i<3;i++){
        Rifle* rf = dynamic_cast<Rifle*>(ptr[i]);
        if(rf){
            rf->chambering();
        }
        ptr[i]->attack();
    }
}