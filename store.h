#pragma once
#include "fruit.h"
class store {
public:
	store() {};
	store(int a, int b, int c, int g, float d, float e, float f, float h, int i, int j, int k, int l) {
		apple = fruit(a, d, i);
		pear = fruit(b, e, j);
		peach = fruit(c, f, k);
		mango = fruit(g, h, l);
	}
	fruit apple, pear, peach, mango;
	float total();
};