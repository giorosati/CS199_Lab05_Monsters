/*********************************************************************
** Program Filename: goblin.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-05
** Description: Goblin class header file CS199_400 Lab 5
*********************************************************************/

#ifndef GOBLIN_HPP
#define GOBLIN_HPP

class Goblin : public Monster
{
public:
	Goblin();			//default constructor
	~Goblin();			//deconstructor
	void attack();		//attack function prototype
};

#endif