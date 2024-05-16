#pragma once
class fruit {
public:
	// constructor
	fruit() {
		price = 200; many = 2; day = 12; // default values
	}
	fruit(float n, int p, int q) {
		price = p;
		many = n;
		day = q;
	}
	// member data
	int many;
	float price;
	int day;
	// member function
	float show();
	float bigtotal();
};
