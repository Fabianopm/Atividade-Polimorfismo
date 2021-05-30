#include "Triangulo.hpp"
#include "Retangulo.hpp"
#include "Circulo.hpp"
//#include "FormaGeometrica.hpp"


int main() {

	Circulo c(9);

	Triangulo t(6, 3);

	Retangulo r(7, 3);

	cout << "\nArea do Circulo: " << c.CalculaArea() << endl;

	cout << "\nArea do Trinagulo: " << t.CalculaArea() << endl;

	cout << "\nArea do Retangulo: " << r.CalculaArea() << endl;





}