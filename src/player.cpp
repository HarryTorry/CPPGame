#include <iostream>
#include <string>
using namespace std;

class player
{			
 public:
	     player (); // Constructer
		 ~player (); // Destructer 
		 
		 // VARIABLES THAT EACH OBJECT HAS
 		 std::string name;
 	     int resources;
 	     bool hasBarracks;
          
 	     // FUNCTIONS THAT EACH OBJECT HAS
 		 void print() const;
 		 std::string getName() const;
 		 int getResources() const;
 		 void newBarracks(bool value);
};

// The constructer and destructer
player::player() { name="unnamed player"; resources = 50;};
player::~player( ) {};

// The functions and what they do
string player::getName() const { return name; }
int player::getResources() const { return resources; }
void player::print() const { cout << "Name: " << name << endl << "Resources: " << resources << endl << endl; }
void player::newBarracks(bool value) { hasBarracks = value; }
