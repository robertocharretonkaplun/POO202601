#pragma once
#include "Prerequisites.h"
#include "ProgrammingPattterns/AbstractFactory/FabricaAbstracta.h"
#include "ProgrammingPattterns/AbstractFactory/ProductoA1.h"
#include "ProgrammingPattterns/AbstractFactory/ProductoB1.h"

class
FabricaConcreta : public FabricaAbstracta {

	ProductoA* 
	crearProductoA() const override {
		return new ProductoA1();
	}
	ProductoB* 
	crearProductoB() const override {
		return new ProductoB1(); 
	}
};
