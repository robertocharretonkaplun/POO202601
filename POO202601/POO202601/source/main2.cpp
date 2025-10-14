#include "Prerequisites.h"
#include "ProgrammingPattterns\Builder\Builder.h"
#include "ProgrammingPattterns\Builder\BuilderConcreto.h"
#include "ProgrammingPattterns\Builder\Director.h"
int main() {
	Builder* builder = new BuilderConcreto();
	Director* director = new Director(builder);
	
	director->construct();
	//director->show();
	
	Producto* producto = builder->getProducto();
	producto->show();
	
	delete producto;	
	delete director;
	delete builder;
	return 0;
}