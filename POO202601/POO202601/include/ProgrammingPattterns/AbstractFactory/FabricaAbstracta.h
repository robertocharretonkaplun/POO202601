#pragma once
#include "Prerequisites.h"
class ProductoA;
class ProductoB;

// F�brica abstracta
class 
FabricaAbstracta {
public:
	virtual ProductoA* 
	crearProductoA() const = 0;
	virtual ProductoB* 
	crearProductoB() const = 0;
	virtual 
		~FabricaAbstracta() = default;
};
