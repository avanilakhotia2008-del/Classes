
#include "Media.h"

Media::Media(string t, int y) {
    title = t;
    year = y;
}

void Media::display() const {
    cout << "Title: " << title << endl;
    cout << "Year: " << year << endl;
}

Media::~Media() {
}
