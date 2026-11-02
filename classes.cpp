/*
  Avani Lakhotia

  DATE

  This is an assingment to practice classes and inheritance
*/

#include <iosstream>

using namespace std;

class media {
public:
  void myMethod(){


  }
};

class video_games : public media {
public:
  string title;
  int year;
  int rating;
  string publisher;

};

class music : public media {
public:
  string title;
  int year;
  int duration;
  string artist;
  string publisher;

};

class movies : public media{
public:
  string title;
  int year;
  int rating;
  string director;
  int duration;

};






int main()
{





  return 0;

}
