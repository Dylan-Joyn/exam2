#include "Movie.h"
using namespace std;

Movie::Movie(string n, Person d, vector<Person> c, int t ):name(n), director(d), cast(c), time(t){}

bool Movie::isLongMovie(int min) {
	return min > 135;
}

ostream& operator<<(ostream& out, const Movie& movie) {
	out << "Movie: " << movie.name << endl << "Director:" << movie.director.getFirstName()
		<< " " << movie.director.getLastName() << endl << "Runtime: " << movie.time << " minutes"
		<< endl << "Cast: " << endl;
	for (const auto& actor : movie.cast){
		out<<"Actors: "<< actor.getFirstName() << " " << actor.getLastName() << " Birtday: "
		<<actor.getDateOfBirth()<<endl;
		}
	return out;
}

