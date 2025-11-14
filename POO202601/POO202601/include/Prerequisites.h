#pragma once

// STD Library includes
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <mutex>
 
struct Fecha {
	int dia;
	int mes;
	int anio;

	void
	getFecha() {
		// Obtenemos la fecha actual del sistema
		time_t t = time(0);
		tm* now = localtime(&t);

		// Creamos la instancia de Fecha
		dia = now->tm_mday;
		mes = now->tm_mon + 1;
		anio = now->tm_year + 1900;

		// Usamos la función de la estructura
		std::cout << "Fecha actual: " << toString() << std::endl;
	}

	std::string toString() const {
		return std::to_string(dia) + "/" + std::to_string(mes) + "/" + std::to_string(anio);
	}

};


enum 
TRADE {
	TELECOMUNICACIONES = 1,
	RESTAURANTES = 2,
	FARMACIAS = 3,
	SUPERMERCADOS = 4
};