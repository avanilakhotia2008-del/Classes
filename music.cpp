
#include "Music.h"

Music::Music(string t, int y, string a, int d, string p)
    : Media(t, y) {
    artist = a;
    duration = d;
    publisher = p;
}

int Music::getDuration() const {
    return duration;
}

void Music::display() const {
    Media::display();

    cout << "Artist: " << artist << endl;
    cout << "Duration: " << duration << endl;
    cout << "Publisher: " << publisher << endl;
}
