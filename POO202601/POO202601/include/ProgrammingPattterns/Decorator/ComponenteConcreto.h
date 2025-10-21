#pragma once
#include "Prerequisites.h"
#include "ProgrammingPattterns\Decorator\Componente.h"

class 
ComponenteConcreto : public Componente {
public:
	ComponenteConcreto()  = default;
	~ComponenteConcreto() = default;
	
	void 
	operacion() override {
		std::cout << "ComponenteConcreto: Realizando operacion concreta." << std::endl;
	}

};
