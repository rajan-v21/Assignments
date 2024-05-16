// devpro.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "Base1.h"
#include "Base2.h"
#include<iostream>
using namespace std;

// TODO: This is an example of a library function
Base1::Base1() :memberBase1(0) {
	cout << "In base1 default constructor"<<endl;
}
void Base1::funBase1() {
	cout << "In Base1 method" << memberBase1 << endl;
}

Base2::Base2() :memberBase2(0) {
	cout << "In base2 default constructor" << endl;
}
void Base2::funBase2() {
	cout << "In base2 method" << memberBase2 << endl;
}
