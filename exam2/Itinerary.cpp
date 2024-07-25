#include "Itinerary.h"
#include <cmath>
#include <iostream>
using namespace std;
vector<City> Itinerary::getCities() const {
	return cities;
}

void Itinerary::addCity(const City& city) {
	cities.push_back(city);

}

double Itinerary::getDistance(const City& orig, const City& dest) {
	return sqrt(pow(orig.getLat() - dest.getLat(), 2) + pow(orig.getLong() - dest.getLong(), 2));

}

double Itinerary::getDistance() const {
	double totalDistance = 0.0;
	for (size_t i = 0; i < cities.size() - 1; ++i) {
		totalDistance += getDistance(cities[i], cities[i + 1]);
	}
	return totalDistance;
}

Itinerary Itinerary::operator+(const Itinerary& other)const {
	Itinerary combined = *this;
	for (const auto& city : other.getCities()) {
		combined.addCity(city);
	}
	return combined;
}
