// 1) class Hour
// {
// 	private:
// 		int hr;
// 	public:
// 		parameterized constructor
// 		disp method
// }
// class Minute
// {
// 	private:
// 		int mnt;
// 	public:
// 		parameterized constructor
// 		disp method
// }

// write a program to convert minutes to hours.
// (Use operator= for conversion.)

#include<bits/stdc++.h>
using namespace std;
class Hour{
    private:
        int hr;
    public:
        Hour(int h){
            hr = h;
        }
        void disp(){
            cout<<hr<<" hours"<<endl;
        }
        int getHour(){
            return hr;
        }
};
class Minute{
    private:
        int min;
    public:
        Minute(int m){
            min = m;
        }
        void disp(){
            cout<<min<<" minutes"<<endl;
        }
        int getMinute(){
            return min;
        } 
        operator Hour(){
            return Hour(min/60);
        }
};

int main(){
    Hour h(12);
    Minute m(120);
    h.disp();
    m.disp();
    h = m;
    h.disp();
    return 0;   
}