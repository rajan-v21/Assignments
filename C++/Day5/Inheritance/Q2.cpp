// 2) class parent
// {
// 	public:
// 		disp1(),disp2(),disp3(),disp4()
// };
// class sub:private parent
// {
// 	public:
// 		disp5()
// };
// make sure u can do the following
// sub s(30);
// s.disp5();
// s.disp3();
// s.disp1();

#include<bits/stdc++.h>
using namespace std;

class parent{
    public:
        virtual void disp1(){
            cout<<"base disp1"<<endl;
        }
        void disp2(){
            cout<<"base disp2"<<endl;
        }
        void disp3(){
            cout<<"base disp3"<<endl;
        }
        void disp4(){
            cout<<"base disp4"<<endl;
        }
};
class sub:private parent{
    public:
        sub(int x){
            cout<<x<<endl;
        }
        void disp1(){
            cout<<"sub disp1"<<endl;
        }
        void disp3(){
            cout<<"sub disp3"<<endl;
        }
        void disp5(){
            cout<<"sub disp5"<<endl;
        }
        using parent::disp4;
};
int main(){
    sub s(30);
    s.disp5();
    s.disp3();
    s.disp1();
    s.disp4();
}