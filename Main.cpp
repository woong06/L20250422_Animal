#include <iostream>
#include <vector>
#include "Animal.h"
#include "Cat.h"
#include "Tiger.h"
#include "Cheetah.h"

using namespace std;

int main()
{
	AAnimal Animals;

	vector<AAnimal*> AnimalList;

	AnimalList.push_back(new AAnimal());
	AnimalList.push_back(new ACat());
	AnimalList.push_back(new ATiger());
	AnimalList.push_back(new ACheetah());

	for (auto Animal : AnimalList)
	{
		Animal->Move();
	}

	for (auto Animal : AnimalList)
	{
		delete Animal;
		Animal = nullptr;
	}
	return 0;
}
