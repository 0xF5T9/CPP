#include "item.h"

int item::CountCreatedItem = 0;

void wooden_sword::ShowStats() {
	std::cout << "ID: " << this->ID << std::endl;
	std::cout << "Name: " << this->Name << std::endl;
	std::cout << "Attack Damage: " << this->AttackDamage << std::endl;
	std::cout << "Attack Speed: " << this->AttackSpeed << std::endl;
}

void stone_sword::ShowStats() {
	std::cout << "ID: " << this->ID << std::endl;
	std::cout << "Name: " << this->Name << std::endl;
	std::cout << "Attack Damage: " << this->AttackDamage << std::endl;
	std::cout << "Attack Speed: " << this->AttackSpeed << std::endl;
}

void iron_sword::ShowStats() {
	std::cout << "ID: " << this->ID << std::endl;
	std::cout << "Name: " << this->Name << std::endl;
	std::cout << "Attack Damage: " << this->AttackDamage << std::endl;
	std::cout << "Attack Speed: " << this->AttackSpeed << std::endl;
}