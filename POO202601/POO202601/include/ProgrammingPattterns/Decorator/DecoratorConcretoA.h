#pragma once
#include "Prerequisites.h"
#include "ProgrammingPattterns\Decorator\Decorator.h"

class 
DecoratorConcretoA : public Decorator {
public:
	DecoratorConcretoA(Componente* _componente) : Decorator(_componente) {}
	~DecoratorConcretoA() = default;

	void 
	operacion() override {
		Decorator::operacion();
		std::cout << "DecoratorConcretoA: Agregando funcionalidad A." << std::endl;
	}
};