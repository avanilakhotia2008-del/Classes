"""
Avani Lakhotia
ADD DATE
ADD DESCRIPTION
"""


/*
  Avani Lakhotia

  Classes and Inheritance Assignment
  Media Database
*/

#include <iostream>
#include <vector>
#include <string>

#include "Media.h"
#include "VideoGames.h"
#include "Music.h"
#include "Movies.h"

using namespace std;

int main() {

    
    vector<Media*> database;

    
    for (Media* item : database) {
        delete item;
    }

    return 0;
}
