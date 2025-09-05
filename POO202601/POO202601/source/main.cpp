#include "Prerequisites.h"
#include "Inventory.h"

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


	std::cout << "Hello World!" << std::endl;
	std::cin.get();
	return 0;
}