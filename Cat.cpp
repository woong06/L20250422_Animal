#include "Cat.h"
#include <iostream>

ACat::ACat()
{
	std::cout << "고양이 생성" << std::endl;
}

void ACat::Move()
{
	std::cout << "할퀸다." << std::endl;
}

ACat::~ACat()
{
	std::cout << "고양이 소멸" << std::endl;
}

