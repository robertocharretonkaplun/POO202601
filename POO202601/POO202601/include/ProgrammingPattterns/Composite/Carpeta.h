#pragma once

class
Carpeta {
public:
	Carpeta() = default;
	~Carpeta() = default;

	virtual void mostrar() {
		std::cout << "Mostrando carpeta." << std::endl;
	}
};