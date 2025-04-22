#pragma once
#include "Cat.h"
class ACheetah : public ACat
{
public:
	ACheetah();
	virtual void Move() override;
	virtual ~ACheetah() override;
};

