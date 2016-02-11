/*********************************************************************
** Program Filename: dragon.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-05
** Description: Dragon class header file CS199_400 Lab 5
*********************************************************************/

#ifndef DRAGON_HPP
#define DRAGON_HPP

#include "monster.hpp"

class Dragon : public Monster
{
public:
	Dragon();					//default constructor
	~Dragon();					//deconstructor
	virtual void attack();		//attack function prototype
};

#endif