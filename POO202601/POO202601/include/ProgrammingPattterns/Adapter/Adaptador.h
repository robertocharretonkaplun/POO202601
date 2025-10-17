#pragma once
#include "Prerequisites.h"
#include "ProgrammingPattterns\Adapter\InterfazNueva.h"
#include "ProgrammingPattterns\Adapter\InterfazVieja.h"

class 
Adaptador : public InterfazNueva {
public:
	Adaptador(InterfazVieja* _interfazVieja) : interfazVieja(_interfazVieja) {}
	~Adaptador() = default;

	void 
	metodoNuevo() override {
		std::cout << "Adaptando metodo nuevo a metodo viejo." << std::endl;
		interfazVieja->metodoViejo();
	}

private:
	InterfazVieja* interfazVieja;
};
