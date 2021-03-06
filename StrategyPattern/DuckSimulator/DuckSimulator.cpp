// DuckSimulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "MallarDuck.h"
#include "ModelDuck.h"
#include "FlyRocketPowered.h"

int main()
{
    std::cout << "This is a Duck SIMULATOR!!!!" << std::endl;
	
	MallarDuck mallar;

	mallar.display();
	mallar.performFly();
	mallar.performQuack();

	ModelDuck modelDuck;

	modelDuck.display();
	modelDuck.performFly();
	modelDuck.setFlyBehavior(new FlyRocketPowered()); // Modify flybehavior dynamically
	modelDuck.performFly();

}
