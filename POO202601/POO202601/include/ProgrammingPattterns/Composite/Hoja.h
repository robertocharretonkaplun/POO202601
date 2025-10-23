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
		// Implementaci�n espec�fica de la hoja
		std::cout << "Operacion realizada en la hoja." << std::endl;
	}

};