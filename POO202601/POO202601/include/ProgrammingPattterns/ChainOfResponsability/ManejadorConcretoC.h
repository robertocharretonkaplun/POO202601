#pragma once
#include "Prerequisites.h"
#include "ProgrammingPattterns\ChainOfResponsability\Manejador.h"

class
ManejadorConcretoC : public Manejador {
public:
	ManejadorConcretoC(Manejador* _siguiente, const std::string _name) : Manejador(_siguiente, _name) {}
	~ManejadorConcretoC() = default;

	void manejarPeticion(int peticion) override {
			std::cout << "ManejadorConcretoC manejó la petición: " << peticion << std::endl;
	}

};