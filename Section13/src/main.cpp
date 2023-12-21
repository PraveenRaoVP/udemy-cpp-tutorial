#include<iostream>
#include<vector>
#include "Movies.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main() {
    cout << "Welcome to Movie Management Application!" << endl;
    static Movies movies;
    while(1) {
        cout << "1. Add movie" << endl;
        cout << "2. Display movies" << endl;
        cout << "3. Increment watched count" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        switch(choice) {
            case 1: {
                cout << "Enter movie name: ";
                string movieName;
                cin >> movieName;
                cout << "Enter movie rating: ";
                string movieRating;
                cin >> movieRating;
                cout << "Enter watched count: ";
                int watchedCount;
                cin >> watchedCount;
                Movie movie(movieName, movieRating, watchedCount);
                movies.addMovie(movie);
                break;
            }
            case 2: {
                movies.displayMovies();
                break;
            }
            case 3: {
                cout << "Enter movie name: ";
                string movieName;
                cin >> movieName;
                movies.incrementWatchedCount(movieName);
                break;
            }
            case 4: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
            }
        }
    }
    return 0;
}