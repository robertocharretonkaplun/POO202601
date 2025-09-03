#include "Prerequisites.h"

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
	Character pepe(150);
	pepe.getHealth();
	std::cout << pepe.getHealth() << std::endl;
	pepe.setHealth(-50);
	std::cout << pepe.getHealth() << std::endl;

	if (pepe.getHealth() <= 0) {
		std::cout << "El pepe, murio." << std::endl;
		pepe.rebirth();
	}

	std::cout << "Hello World!" << std::endl;
	return 0;
}