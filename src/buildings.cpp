#include <iostream>
#include <string>
using namespace std;


class building
{			
 public:
	     building (std::string _parent, int BUILDING_TYPE, int x, int y); // Constructer
		 ~building (); // Destructer 
		 
		 // VARIABLES THAT EACH OBJECT HAS
 		 std::string parent;
 		 std::string name;
 		 int bType;
 	     int health;
 	     int bLevel;
 	     int x, y;
 	     
 	     
 	     // FUNCTIONS THAT EACH OBJECT HAS
 		 void print() const;
 		 std::string getParent() const;
	     int getHealth() const;
	     int getLevel() const;
	     void levelUp();
	     int getX() const;
	     int getY() const;
	     

};

// The constructer and destructer
building::building(std::string _parent, int _building, int _x, int _y) 
{ 
  parent = _parent;
  x = _x;
  y = _y;
  bLevel = 1;
  
  switch (_building)
  {
   case 1: name="HeadQuarters"; 
   		   health = 300;
   		   bType = 1;
   		   break;
   		   
   case 2: name="Factory"; 		
   		   health = 30;
   		   bType = 2;
           break;
   		   
   case 3: name="Barracks"; 
           health = 100;
           bType = 3;
           break;
           
   default: cout << "There's an error somewhere while making some buildings!" << endl;
  			break;		 
  }

};
building::~building() {};

// The functions and what they do
string building::getParent() const { return parent; }
int building::getHealth() const { return health; }
void building::print() const { cout << "Parent: " << parent << endl<< "Name: " << name << endl 
                                    << "Health: " << health << endl << "Level: " << bLevel << endl 
                                    << "X Value: " << x << " || Y Value: " << y << endl;}
int building::getLevel() const { return bLevel; }
void building::levelUp() { if (bLevel < 3) bLevel++; } 
int building::getX() const { return x; }
int building::getY() const { return y; }
