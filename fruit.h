#pragma once
class fruit {
public:
	// constructor
	fruit() {
		price = 200; many = 2; // default values
	}
	fruit(float p, int n) {
		price = n;
		many = p;
	}
	// member data
	int many;
	float price;
	int size;
	// member function
	float show() {
		return price * many;
	}
	int big_total() {
		return  many * size * price;
	}

};