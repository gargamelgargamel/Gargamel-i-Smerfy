#include "matka.h"
#include <iostream>
#include <ctime>

class SMERF : public MATKA {
public:
friend class GARGAMEL;
SMERF(int, int);
~SMERF();
}

SMERF::SMERF(int in_limitX, int in_limitY) {
	limitX = in_limitX;
	limitY = in_limitY;
	init();
	alive = 1;
	}
	
