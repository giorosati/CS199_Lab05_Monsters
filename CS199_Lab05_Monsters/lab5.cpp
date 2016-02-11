/*********************************************************************
** Program Filename: lab5.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-05
** Description: C++ file with main() for CS199_400 Lab 5
*********************************************************************/

//includes
#include <cstdlib>
#include <iostream>
#include <string>
#include "monster.hpp"
#include "goblin.hpp"
#include "troll.hpp"
#include "dragon.hpp"
#include "icedragon.hpp"
#include "firedragon.hpp"

//usings
using std::cout;
using std::endl;
using std::cin;
using std::srand;
using std::rand;
using std::string;

int main()
{
	//initialize random number generator
	srand(1234);

	//create an array of 100 monster pointers
	Monster* monsterArray[100];

	//fill the array with 100 monsters, 20% chance for each type of monster
	for (int i = 0; i < 100; i++)
	{
		int num = rand() % 5;  //generates 0 to 4
		switch (num)
		{
		case 0: monsterArray[i] = new Goblin(); break;
		case 1: monsterArray[i] = new Troll(); break;
		case 2: monsterArray[i] = new Dragon(); break;
		case 3: monsterArray[i] = new IceDragon(); break;
		case 4: monsterArray[i] = new FireDragon(); break;
		}
	}

	//used for testing
	//for (int i = 0; i < 100; i++)
	//{
	//	//monsterArray[i] = new Goblin();
	//	//monsterArray[i] = new Troll();
	//	//monsterArray[i] = new Dragon();
	//	//monsterArray[i] = new IceDragon();
	//	monsterArray[i] = new FireDragon();
	//}

	//test array contents
	/*for (int i = 0; i < 100; i++)
	{
		cout << "array pos " << i << " is a " << monsterArray[i]->getTypeOf() << endl;
	}
	cin.get();*/

	//attack cycle
	for (int i = 0; i < 100; i++)
	{
		cout << "Monster " << i + 1 << ":" << endl;
		monsterArray[i]->attack();
		cout << endl;
		cout << endl;
	}

	//delete the objects
	for (int i = 0; i < 100; i++)
	{
		//cout << "deleting monster at array position " << i << endl;
		delete monsterArray[i];
	}
	cout << "press any key to continue" << endl;
	cin.get();

	return 0;
}