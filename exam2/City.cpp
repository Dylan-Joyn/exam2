#include "City.h"
using namespace std;
#include <cmath>

City::City(string n, double lat, double lon) :name(n), latitude(lat), longitude(lon) {}

string City::getName() const {
	return name;

}

double City::getLat() const {
	return latitude;

}
double City::getLong() const {
	return longitude;

}

