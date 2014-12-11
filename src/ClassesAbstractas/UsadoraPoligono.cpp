/*
 * UsadoraPoligono.cpp
 *
 *  Created on: 10/12/2014
 *      Author: javi
 */

#include "UsadoraPoligono.h"
#include <cstddef>
namespace ejemplos {

UsadoraPoligono::UsadoraPoligono() {
	// TODO Auto-generated constructor stub
	_poligono = NULL; // En C++11 nullptr;

}

UsadoraPoligono::~UsadoraPoligono() {
	// TODO Auto-generated destructor stub
}

void UsadoraPoligono::set_poligono(Poligono* p) {
	_poligono = p;
}

float UsadoraPoligono::calcula_area() {
	/* Llamamos a la función area() del Poligono, UsadoraPoligono no conoce
	 * el objeto que recibe, pero sabe que tiene un método que se llama area()
	 */
	return _poligono->area();
}

} /* namespace ejemplos */
