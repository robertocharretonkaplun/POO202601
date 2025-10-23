#pragma once
#include "Prerequisites.h"
#include "ProgrammingPattterns\Decorator\Componente.h"

class 
Hoja : public Componente {
public:
	Hoja()  = default;
	~Hoja() = default;

	void 
	operacion() override {
		// Implementación específica de la hoja
		std::cout << "Operacion realizada en la hoja." << std::endl;
	}

};