#include "Cat.h"
#include <iostream>

ACat::ACat()
{
	std::cout << "����� ����" << std::endl;
}

void ACat::Move()
{
	std::cout << "������." << std::endl;
}

ACat::~ACat()
{
	std::cout << "����� �Ҹ�" << std::endl;
}

