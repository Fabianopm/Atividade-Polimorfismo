#include "Circulo.hpp"

Circulo::Circulo(int r) {

	raio_circulo = r;

}

float Circulo::CalculaArea() {

	area = 3.14 * pow(raio_circulo, 2);

	return area;

	
}