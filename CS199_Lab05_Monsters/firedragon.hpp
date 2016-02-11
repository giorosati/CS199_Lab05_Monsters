/*********************************************************************
** Program Filename: firedragon.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-05
** Description: FireDragon class header file CS199_400 Lab 5
*********************************************************************/

#ifndef FIRERAGON_HPP
#define FIRERAGON_HPP

#include "monster.hpp"
#include "dragon.hpp"

class FireDragon : public Dragon
{
public:
	FireDragon();				//default constructor
	~FireDragon();				//deconstructor
	void attack();				//attack function prototype
};

#endif