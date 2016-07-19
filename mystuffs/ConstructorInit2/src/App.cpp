/*
 * App.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: prasanna
 */

#include "App.h"

App::App() :
x(1),y(2),z(3)
{

}

App::App(int aa, int bb, int cc):
		x(aa),y(bb),z(cc),pp(40)
	{

	}

int App::getX(void)
{
	return x;
}

int App::getY(void)
{
	return y;
}

int App::getZ(void)
{
	return z;
}

int App::getpp(void)
{
	return pp;
}

App::~App() {

}

