#pragma once
#include "Prerequisites.h"
#include "ProgrammingPattterns/Decorator/Componente.h"

class 
Composite : public Componente {
public:
	Composite()  = default;
	~Composite() = default;

	void
	operacion() override {
		std::cout << "Operacion realizada en el componente compuesto." << std::endl;
		for (auto child : children) {
			child->operacion(); // Delegar la operaci�n a los hijos
		}
	}

	void
	add(Componente* component) {
		children.push_back(component);
	}

private:
	std::vector<Componente*> children; // Hojas o componentes hijos

};