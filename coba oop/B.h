#ifndef B_H
#define B_H

#include <iostream>
#include "A.h"

class B : public A{
	protected:
		int x;

	public:
		B();
		B(int c);
		void cetak();
};

#endif
