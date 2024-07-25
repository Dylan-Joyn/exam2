#pragma once
#ifndef MOVIE_H
#define MOVIE_H
#include "Person.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Movie
{
public: //it no worky when this stuff is private
	int time;
	string name;
	Person director;
	vector<Person> cast;

	Movie(string n, Person d, vector<Person> c, int t);

	static bool isLongMovie(int min);

	friend ostream& operator<<(ostream& out, const Movie& movie);
};

#endif