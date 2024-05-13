// 2) class sample
//    {
// 	private:
// 		char ch;
// 	public:
// 		sample(char ch)
// 		{
// 			this->ch=ch;
// 		}
//   };

// given above class.

// write a global function "display" which will access "ch" directly and display it.
// call this function from main function.

#include<bits/stdc++.h>
using namespace std;

class Sample{
    char ch;
    public:
    Sample(char ch){
        this->ch=ch;
    }
    friend void display(Sample s);
};
void display(Sample s){
    cout<<s.ch<<endl;
}

int main(){
    Sample s('a');
    display(s);
}