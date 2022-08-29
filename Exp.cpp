#include<iostream>
using namespace std;
#include "Exp.h"

Exp::Exp() {
	base = 1;
	exp = 1;
}

Exp::Exp(int a) {
	base = a;
	exp = 1;
}

Exp::Exp(int a, int b) {
	base = a;
	exp = b;
}

int Exp::getValue() {
	int sum = 1;
	for (int i = 0; i < exp; i++)sum = sum * base;
	return sum;
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return exp;
}

bool Exp::equals(Exp b) {
	if (getValue() == b.getValue())return true;
	else return false;
}