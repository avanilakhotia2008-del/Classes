
#include "VideoGames.h"

VideoGames::VideoGames(string t, int y, string p, int r)
    : Media(t, y) {
    publisher = p;
    rating = r;
}

int VideoGames::getRating() const {
    return rating;
}

void VideoGames::display() const {
    Media::display();

    cout << "Publisher: " << publisher << endl;
    cout << "Rating: " << rating << endl;
}
