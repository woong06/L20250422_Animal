#include "Animal.h"
#include <iostream>

AAnimal::AAnimal()
{
	std::cout << "동물 생성" << std::endl;
}

void AAnimal::Move()
{
	std::cout << "움직인다" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "동물 소멸" << std::endl;
}


