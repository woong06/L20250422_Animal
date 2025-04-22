#pragma once
#include "Animal.h"
class ACat : public AAnimal
{
public:
	ACat();
	virtual void Move() override;
	virtual ~ACat() override;
};

