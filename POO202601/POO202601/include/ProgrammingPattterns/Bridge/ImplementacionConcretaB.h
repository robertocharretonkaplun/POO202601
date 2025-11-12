#pragma once
#include "Prerequisites.h"
#include "ProgrammingPattterns\Bridge\Implementacion.h"

class ImplementacionConcretaB : public Implementacion
{
public:
	ImplementacionConcretaB() = default;
	~ImplementacionConcretaB() = default;

	void operacion() override {
		std::cout << "ImplementacionConcretaB: operacion() ejecutada." << std::endl;
	}
};