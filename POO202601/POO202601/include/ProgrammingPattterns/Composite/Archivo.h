#pragma once

class 
Archivo {
public:
	Archivo()  = default;
	~Archivo() = default;

	virtual void mostrar() {
		std::cout << "Mostrando Archivo." << std::endl;
	}
};