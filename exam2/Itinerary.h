#pragma once
#ifndef ITENRARY_H
#define ITENRARY_H
#include "City.h"
#include <cmath>
#include<vector>
#include<string>
using namespace std;

class Itinerary
{
private:
	vector<City>cities;
public:
	void addCity(const City& city);
	vector<City>getCities()const;

	static double getDistance(const City& orig, const City& dest);
	double getDistance()const;
	Itinerary operator+(const Itinerary& other)const;
};

#endif;