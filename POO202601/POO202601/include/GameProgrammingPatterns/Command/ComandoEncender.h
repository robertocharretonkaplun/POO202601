#pragma once
#include "GameProgrammingPatterns\Command\Comando.h"
#include "GameProgrammingPatterns\Command\Luz.h"



class 
ComandoEncender : public Comando {
public:
	ComandoEncender(Luz& _luz) : luz(_luz) {}
	~ComandoEncender() = default;

	void 
	ejecutar() override { 
		luz.encender();
	}
	void 
	deshacer() override { 
		luz.apagar();
	}

private:
	Luz& luz;
};