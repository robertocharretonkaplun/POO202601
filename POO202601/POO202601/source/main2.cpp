#include "Prerequisites.h"
#include "ProgrammingPattterns\Adapter\InterfazNueva.h"
#include "ProgrammingPattterns\Adapter\InterfazVieja.h"
#include "ProgrammingPattterns\Adapter\Adaptador.h"

int main() {
	// Crear una instancia de la interfaz vieja
	InterfazVieja* objetoViejo = new InterfazVieja();
	InterfazNueva* objetoNuevo = new Adaptador(objetoViejo);

	// Usar el objeto nuevo que adapta el objeto viejo
	objetoNuevo->metodoNuevo();

	// Liberar memoria
	delete objetoViejo;
	delete objetoNuevo;

	return 0;
}