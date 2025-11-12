#pragma once
#include "Prerequisites.h"
#include "ProgrammingPattterns\ChainOfResponsability\Manejador.h"

class
	ManejadorConcretoB : public Manejador {
public:
	ManejadorConcretoB(Manejador* _siguiente, const std::string _name) : Manejador(_siguiente, _name) {}
	~ManejadorConcretoB() = default;

	void manejarPeticion(int peticion) override {
		if (peticion >= 0 && peticion < 20) {
			std::cout << "ManejadorConcretoB manejó la petición: " << peticion << std::endl;
		}
		else {
			Manejador::manejarPeticion(peticion);
		}
	}

};