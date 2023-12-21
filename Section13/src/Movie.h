#ifndef _MOVIE_H_
#define _MOVIE_H_
#include<iostream>

using std::string;

class Movie {
    private: 
        string movieName;
        string movieRating;
        int watchedCount;

    public:
        Movie();
        Movie(string movieName, string movieRating, int watchedCount);
        string getMovieName() const ;
        string getMovieRating() const;
        int getWatchedCount() const;
        void setMovieName(string movieName);
        void setMovieRating(string movieRating);
        void setWatchedCount(int watchedCount);
        void incrementWatchedCount();
};

#endif // _MOVIE_H_