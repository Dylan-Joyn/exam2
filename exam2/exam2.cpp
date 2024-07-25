// exam2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Movie.h"
#include "City.h"
#include "Itinerary.h"
using namespace std;
int main()
{
   //Bee Movie (kindsa)
	Person director1("Steve", "Hickner", "1961");

	Person actor1("Jerry", "Seinfeld", "1954");
	Person actor2("Ryan", "Reynolds", "idk 1980");
	vector<Person>cast1 = { actor1, actor2 };

	Movie movie1("Bee Movie", director1, cast1, 91);
	//The Mask
	Person director2("Russell", "Chuck", "1958");

	Person actor3("Jim", "Carrey", "1962");
	Person actor4("Ryan", "Reynolds", "idk 1980");

	vector<Person>cast2 = { actor3, actor4 };

	Movie movie2("Mask", director2, cast2, 180);

	cout << movie1 << endl;
	cout << movie2 << endl;

	cout << "Is" << movie1.name << " " << "long?" << (Movie::isLongMovie(movie1.time) ? "Yes" : "No") << endl;
	cout << "Is" << movie2.name << " " << "long?" << (Movie::isLongMovie(movie2.time) ? "Yes" : "No") << endl;
	

	City city1("Bee Branch", 81, 24);
	City city2("Conway", 46.30, 20.45);
	City city3("Little Rock", 50.43 , 10.46);

	Itinerary itinerary1;
	itinerary1.addCity(city1);
	itinerary1.addCity(city2);

	Itinerary itinerary2;
	itinerary2.addCity(city3);

	Itinerary combinedItinerary = itinerary1 + itinerary2;

	cout << "Total distance of itenerary " << combinedItinerary.getDistance() << endl;

}


