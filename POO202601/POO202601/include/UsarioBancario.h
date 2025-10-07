#pragma once
#include "Prerequisites.h"
#include "CuentaBancaria.h"

class 
UsuarioBancario {
public:
	UsuarioBancario(CuentaBancaria cuenta) {
		m_cuenta = cuenta;
		m_nombreUsuario = m_cuenta.m_propietario;
		m_antiguedad.getFecha();
		m_cashBack = m_cuenta.consultarSaldo() * 0.01; // 1% por defecto
		m_uniquePoints = 5;
	}

	~UsuarioBancario() = default;

	void
	setCashBack(double monto) {
		m_cashBack += monto;
	}

	CuentaBancaria&
	getCuenta() {
		return m_cuenta;
	}

private:
	CuentaBancaria m_cuenta;
	std::string m_nombreUsuario;
	std::vector<int> m_historialTransacciones;
	Fecha m_antiguedad;
	double m_cashBack; // 1% 3% 5%
	int m_uniquePoints;
};