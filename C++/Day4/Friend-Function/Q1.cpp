// 1) class First
//    {
//       char str1[20];
//    };
//    class Second
//    {
//       char str2[20];
//    };
// write a friend function,which will create a  new string containing str1,str2 and also display it.

#include<bits/stdc++.h>
#include <iostream>
#include <cstring> // Include for strcpy() and strcat()

using namespace std;

// Forward declaration of Second
class Second;

class First {
    char str1[20];
public:
    First( char s1[20]) {
        strcpy(str1, s1);
    }
    friend void display(First f, Second s);
};

class Second {
    char str2[20];
public:
    Second( char s2[20]) {
        strcpy(str2, s2);
    }
    friend void display( First f,  Second s);
};

void display( First f,  Second s) {
    char combined[strlen(f.str1) + strlen(s.str2) + 1];
    strcpy(combined, f.str1);
    strcat(combined, " ");
    strcat(combined, s.str2);
    cout << combined << endl;
}

int main() {
    First f("Hello");
    Second s("World");
    display(f, s);
    return 0;
}
