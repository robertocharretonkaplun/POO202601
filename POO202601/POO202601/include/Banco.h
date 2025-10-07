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

	double cashback(TRADE comercio, double _monto) {

		double retorno = 0.0;
		switch (comercio) {
		case TELECOMUNICACIONES:
			retorno = _monto * 0.01; // 1% de cashback
			break;
		case RESTAURANTES:
			retorno = _monto * 0.02; // 2% de cashback
			break;
		case FARMACIAS:
			retorno = _monto * 0.03; // 3% de cashback
			break;
		case SUPERMERCADOS:
			retorno = _monto * 0.01; // 1% de cashback
			break;
		default:
			retorno = 0.0;
			break;
		}

		return retorno; 
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

	void
	realizarCompra(UsuarioBancario& cuentaOrigen, 
								 const std::string & producto, 
								 double monto, 
								 int noRef) {
		if (monto > 0 && monto <= cuentaOrigen.getCuenta().consultarSaldo()) {
			cuentaOrigen.getCuenta().consultarSaldo() -= monto;
			std::cout << "Compra del articulo: " << producto << " Costo: $" << monto << 
				" Numero de Referencia: " << noRef << std::endl;

			cuentaOrigen.setCashBack(cashback(SUPERMERCADOS, monto));
			std::cout << "Ganaste CashBack por tu compra aplicado: $" << cashback(SUPERMERCADOS, monto) << std::endl;
		}
		else {
			std::cout << "Error en la transferencia: monto invalido o saldo insuficiente." << std::endl;
		}
	}

private:

};