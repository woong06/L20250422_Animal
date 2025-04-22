#include "Cheetah.h"
#include <iostream>

ACheetah::ACheetah()
{
	std::cout << "치타 생성" << std::endl;
}

void ACheetah::Move()
{
	std::cout << "달린다." << std::endl;
}


ACheetah::~ACheetah()
{
	std::cout << "치타 소멸" << std::endl;
}
