#pragma once
#include "Cat.h"
#include <iostream>

class ATiger : public ACat
{
public:
	ATiger();
	virtual void Move() override;
	virtual ~ATiger() override;
};

