#ifndef FormaGeometrica_hpp
#define FormaGeometrica_hpp

#include <iostream>
#include<cmath>
using namespace std;

class FormaGeometrica {

public:

	FormaGeometrica();

	virtual float CalculaArea() = 0;


protected:

	float area;


};




#endif
