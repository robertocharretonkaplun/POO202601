#include "Prerequisites.h"
#include "ProgrammingPattterns/Composite/Composite.h"
#include "ProgrammingPattterns\Composite\Hoja.h"

int main() {
	Hoja* hoja1 = new Hoja();
	Hoja* hoja2 = new Hoja();
	Composite* composite = new Composite();

	composite->add(hoja1);
	composite->add(hoja2);
	composite->operacion();

	delete hoja1;
	delete hoja2;
	delete composite;


	return 0;
}