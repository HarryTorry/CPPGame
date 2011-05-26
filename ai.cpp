#include <iostream>
#include <string>
using namespace std;

class ai
{			
 public:
	     ai (); // Constructer
		 ~ai (); // Destructer 
		 
		 // VARIABLES THAT EACH OBJECT HAS
 		 std::string name;
 	     int resources;
 	     
 	     // FUNCTIONS THAT EACH OBJECT HAS
 		 void print() const;
 		 std::string getName() const;
	     int getResources() const;
};

// The constructer and destructer
ai::ai() { name="Arti"; resources = 50;};
ai::~ai() {};

// The functions and what they do
string ai::getName() const { return name; }
int ai::getResources() const { return resources; }
void ai::print() const { cout << "Name: " << name << endl << "Resources: " << resources << endl << endl; }
