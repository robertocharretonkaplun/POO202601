#include "Prerequisites.h"
#include "GameProgrammingPatterns\Strategy\Player.h"
#include "GameProgrammingPatterns\Strategy\MeleeAttackStrategy.h"
#include "GameProgrammingPatterns\Strategy\RangedAttackStrategy.h"
#include "GameProgrammingPatterns\Strategy\MagicAttackStrategy.h"

int main() {
	Player player;
	// Usar estrategia de ataque cuerpo a cuerpo
	player.SetStrategy(std::make_unique<MeleeAttackStrategy>());
	int meleeDamage = player.Attack(50);
	std::cout << "Melee Attack Damage: " << meleeDamage << std::endl;
	// Usar estrategia de ataque a distancia
	player.SetStrategy(std::make_unique<RangedAttackStrategy>());
	int rangedDamage = player.Attack(50);
	std::cout << "Ranged Attack Damage: " << rangedDamage << std::endl;
	// Usar estrategia de ataque mágico
	player.SetStrategy(std::make_unique<MagicAttackStrategy>());
	int magicDamage = player.Attack(50);
	std::cout << "Magic Attack Damage: " << magicDamage << std::endl;


	return 0;
}