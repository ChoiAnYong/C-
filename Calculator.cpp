#include<iostream>
#include"Calculator.h"
using namespace std;

void Add::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}
int Add::calculate() {
	return a + b;
}

void Sub::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}
int Sub::calculate() {
	return a - b;
}

void Mul::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}
int Mul::calculate() {
	return a * b;
}

void Div::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}
int Div::calculate() {
	return a / b;
}