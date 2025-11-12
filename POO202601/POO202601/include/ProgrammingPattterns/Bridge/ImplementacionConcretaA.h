#pragma once
#include "Prerequisites.h"
#include "ProgrammingPattterns\Bridge\Implementacion.h"

class ImplementacionConcretaA : public Implementacion
{
public:
	ImplementacionConcretaA()  = default;
	~ImplementacionConcretaA() = default;

	void operacion() override {
		std::cout << "ImplementacionConcretaA: operacion() ejecutada." << std::endl;
	}
};