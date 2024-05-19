// 2)write a class template , which can take any generic type display it and return the size 
// of type passed.
// (hint : in this class template write two functions void disp() and int size() ).

#include<bits/stdc++.h>
using namespace std;

template <typename T>

class TemplateClass
{
    T t;
    public:
    TemplateClass(T t){
        this->t=t;
    }
    void disp()
    {
        cout<<"Value is: "<<t<<endl;
        cout<<"Size is: "<<size()<<endl;
    }
    int size()
    {
        return sizeof(t);
    }
};
int main(){
    TemplateClass<int> tc(10);
    tc.disp();
    TemplateClass<char> tc('A');
    tc.disp();
}