#include "Movie.h"
#include <vector>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;


Movie::Movie() {
    movieName = "";
    movieRating = "";
    watchedCount = 0;
}

Movie::Movie(string movieName, string movieRating, int watchedCount) {
    this->movieName = movieName;
    this->movieRating = movieRating;
    this->watchedCount = watchedCount;
}

string Movie::getMovieName() const {
    return movieName;
}

string Movie::getMovieRating() const {
    return movieRating;
}

int Movie::getWatchedCount() const {
    return watchedCount;
}

void Movie::setMovieName(string movieName) {
    this->movieName = movieName;
}

void Movie::setMovieRating(string movieRating){
    this->movieRating = movieRating;
}

void Movie::setWatchedCount(int watchedCount) {
    this->watchedCount = watchedCount;
}

void Movie::incrementWatchedCount() {
    watchedCount++;
}

