#pragma once
#include "Prerequisites.h"
#include "ProgrammingPattterns\Composite\Carpeta.h"
#include "ProgrammingPattterns\Composite\Sistema.h"

class 
SistemaCarpeta : public Sistema, public Carpeta {
public:
	SistemaCarpeta()  = default;
	~SistemaCarpeta() = default;

	void agregarSistema(Sistema* sistema) {
		sistemas.push_back(sistema);
	}

	void mostrar() override {
		Carpeta::mostrar();
		std::cout << "Carpeta que contiene sistemas:" << std::endl;
		for (const auto& sistema : sistemas) {
			sistema->mostrar();
		}
	}

private:
	std::vector<Sistema*> sistemas;
};