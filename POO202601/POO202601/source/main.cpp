#include "Prerequisites.h"
#include "Inventory.h"
#include "Rectangulo.h"
#include "Estudiante.h"
#include "Banco.h"
#include "UsarioBancario.h"
// Crear un clase Character
class
Character {
public:
	Character() = default;

	Character(int health) : m_health(health) {}

	void
	rebirth() {
		if (!isCharacterAlive && m_health <= 0 ) {
			std::cout << "El Character a revivido en el Spawn Point" << std::endl;
			isCharacterAlive = true;
		}
	}

	int 
	getHealth() const {
		return m_health;
	}

	void
	setHealth(int health) {
		m_health = health;
	}

private:
	bool isCharacterAlive = false;

protected:
	int m_health;
};

// This function is in charge of being the entry point of the app.
int 
main() {
	Inventory inventory;
	inventory.addItem("Pocion de Vida", 5);
	inventory.addItem("Elixir de Mana", 3);
	inventory.addItem("Diamante", 64);

	inventory.useItem("Pocion de Vida", 2);
	inventory.showInventory();


	Rectangulo rect(4.0, 5.0);
	std::cout << "Rectangulo - Ancho: " << rect.getAncho() << ", Alto: " << rect.getAlto() << std::endl;
	std::cout << "Area: " << rect.area() << std::endl;
	std::cout << "Perimetro: " << rect.perimetro() << std::endl;

	Fecha fecha;
	fecha.getFecha();

	Estudiante estudiante[5];
	estudiante[0].setEstudiante("Juan Perez", 20);
	estudiante[1].setEstudiante("Maria Gomez", 22);
	estudiante[2].setEstudiante("Carlos Ruiz", 19);
	estudiante[3].setEstudiante("Ana Torres", 21);
	estudiante[4].setEstudiante("Luis Fernandez", 23);

	for (int i = 0; i < 5; ++i) {
		estudiante[i].informacion();
	}

	Banco Santander;
	UsuarioBancario Ariana = Santander.nuevoUsuario(CuentaBancaria("Ariana", 0001, 5000.0));
	UsuarioBancario Ana = Santander.nuevoUsuario(CuentaBancaria("Ana", 0002, 3000.0));


	std::cout << "Antes de la transferencia:" << std::endl;


	std::cout << "Realizando la transferencia:" << std::endl;
	Santander.realizarTransferencia(Ana, Ariana, 1500.0, 1709);
	Santander.realizarCompra(Ariana, "Shampoo", 245.0, 1809); // Esto debe de dar cashBack (Compras en comercios = 1%)

	std::cout << "Despues de la transferencia:" << std::endl;


	std::cin.get();
	return 0;
}