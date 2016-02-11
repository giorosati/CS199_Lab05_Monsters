/*********************************************************************
** Program Filename: icedragon.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-05
** Description: IceDragon class header file CS199_400 Lab 5
*********************************************************************/

#ifndef ICEDRAGON_HPP
#define ICEDRAGON_HPP

#include "monster.hpp"
#include "dragon.hpp"

class IceDragon : public Dragon
{
public:
	IceDragon();				//default constructor
	~IceDragon();				//deconstructor
	void attack();				//attack function prototype
};

#endif