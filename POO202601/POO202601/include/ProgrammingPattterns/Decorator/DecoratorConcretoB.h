#pragma once
#include "Prerequisites.h"
#include "ProgrammingPattterns\Decorator\Decorator.h"

class
DecoratorConcretoB : public Decorator {
public:
	DecoratorConcretoB(Componente* _componente) : Decorator(_componente) {}
	~DecoratorConcretoB() = default;

	void
	operacion() override {
		Decorator::operacion();
		std::cout << "DecoratorConcretoB: Agregando funcionalidad B." << std::endl;
	}
};