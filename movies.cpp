
#include "Movies.h"

Movies::Movies(string t, int y, string d, int dur, int r)
    : Media(t, y) {
    director = d;
    duration = dur;
    rating = r;
}

int Movies::getRating() const {
    return rating;
}

void Movies::display() const {
    Media::display();

    cout << "Director: " << director << endl;
    cout << "Duration: " << duration << endl;
    cout << "Rating: " << rating << endl;
}
