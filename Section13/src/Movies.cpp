#include "Movies.h"
#include <vector>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Movies::Movies() {
    movies = {};
}

Movies::Movies(std::vector<Movie> movies) {
    this->movies = movies;
}

void Movies::displayMovies() const {
    if (movies.size() == 0) {
        cout << "No movies to display" << endl;
    } else {
        for (Movie movie : movies) {
            cout << movie.getMovieName() << ", " << movie.getMovieRating() << ", " << movie.getWatchedCount() << endl;
        }
    }
}

void Movies::addMovie(Movie &movie) {
    movies.push_back(movie);
}

void Movies::incrementWatchedCount(string movieName) {
    for (Movie &movie : movies) {
        if (movie.getMovieName() == movieName) {
            movie.incrementWatchedCount();
        }
    }
}
