// 5) create an abstract class Shape with
// 	virtual void display()
// 	{   cout<<"display on the canvas"<<endl;}
// 	and
// 	pure virtual function (contract) void draw() 
// functions.
// now derive 3 classes from Shape
// 	Circle,Triangle and Rectangle
// in the main function create array of pointer to Shape class and store all the child class 
// objects addresses inside it. Traverse the array and invoke "display()" and "draw()" functions.

#include<bits/stdc++.h>
using namespace std;

class Shape{
    public:
        virtual void display(){   
            cout<<"display on the canvas"<<endl;
        }
        virtual void draw()=0;
};
class Circle:public Shape{
    public:
        void display(){
            cout<<"circle display"<<endl;
        }
        void draw(){
            cout<<"circle draw"<<endl;
        }
};
class Triangle:public Shape{
    public:
        void display(){
            cout<<"circle display"<<endl;
        }
        void draw(){
            cout<<"triangle draw"<<endl;
        }    
};
class Rectangle:public Shape{
    public:
        void draw(){
            cout<<"rectangle draw"<<endl;
        }
        void display(){
            cout<<"rectangle display"<<endl;
        }
};

int main(){
    Circle c;
    Triangle t;
    Rectangle r;
    Shape *s[3]={&c, &t, &r};
    for(int i = 0; i<sizeof(s); i++){
        s[i]->draw();
        s[i]->display();
    }
    
    return 0;
}