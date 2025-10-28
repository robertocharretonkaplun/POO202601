#pragma once
#include "Prerequisites.h"
#include "ProgrammingPattterns\Composite\Archivo.h"
#include "ProgrammingPattterns\Composite\Sistema.h"

class 
SistemaArchivo : public Sistema, public Archivo {
public:
	SistemaArchivo(const std::string _nombre) : nombre(_nombre) {}
	SistemaArchivo()  = default;
	~SistemaArchivo() = default;
	void mostrar() override {
		Archivo::mostrar();
		std::cout << "Archivo en el sistema -> " << nombre << std::endl;
	}



private:
	std::string nombre = "archivo.docxs";
};