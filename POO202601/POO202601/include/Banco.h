#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"
#include "UsarioBancario.h"
class 
Banco {
public:
	Banco() = default;
	~Banco() = default;

	UsuarioBancario
	nuevoUsuario(CuentaBancaria cuenta) {
		UsuarioBancario usuario(cuenta);
		return usuario;
	}

	// Metodo para acceder a la transferencia protegida de la clase base
	void
	realizarTransferencia(UsuarioBancario& cuentaOrigen, 
												UsuarioBancario& cuentaDestino, 
												double monto, 
												int noRef) {
		if (monto > 0 && monto <= cuentaOrigen.getCuenta().consultarSaldo()) {
			cuentaOrigen.getCuenta().consultarSaldo() -= monto;
			cuentaDestino.getCuenta().consultarSaldo() += monto;
			std::cout << "Transferencia de " << monto << " de la cuenta "
				<< cuentaOrigen.getCuenta().getNumeroCuenta() << " a la cuenta " 
				<< cuentaDestino.getCuenta().getNumeroCuenta()
				<< " realizada con exito." << " Numero de Referencia: " << noRef << std::endl;
		}
		else {
			std::cout << "Error en la transferencia: monto invalido o saldo insuficiente." << std::endl;
		}
	}
private:

};