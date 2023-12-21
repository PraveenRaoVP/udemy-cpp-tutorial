#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include "Movie.h"
#include <iostream>
using std::string;


class Movies {
    private: 
        std::vector<Movie> movies;
    public:
        Movies();
        Movies(std::vector<Movie> movies);
        void displayMovies() const;
            
        void addMovie(Movie &movie);
        void incrementWatchedCount(string movieName);
};

#endif // _MOVIES_H_