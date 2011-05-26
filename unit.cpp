#include <iostream>
#include <string>
using namespace std;

class unit
{			
 public:
	     unit (int unitType, int x, int y); // Constructer
		 ~unit (); // Destructer 
		 
		 // VARIABLES THAT EACH OBJECT HAS
 		 std::string name;
 	     int health;
 	     int damage;
 	     int x, y;
   
 	     // FUNCTIONS THAT EACH OBJECT HAS
 		 std::string getName() const;
 		 int getHealth() const;
 		 int getDamage() const;
 		 void setHealth(int _health);
 		 void setDamage(int _damage);
 		 int getX() const;
	     int getY() const;
};

// The constructer and destructer
unit::unit(int _unitType, int _x, int _y) 
{ 
  switch (_unitType)
  {
   case 1: name="Infantry Lvl1"; 
   		   health = 30;
   		   damage = 5;
   		   break;
   		   
   case 2: name="Infantry Lvl2"; 		
   		   health = 50;
   		   damage = 10;
   		   break;
   		   
   case 3: name="Infantry Lvl3"; 
           health = 75;
           damage = 20;
           break;
           
   default: cout << "There's an error somewhere while making some units!" << endl;
  			break;		 
  }             
  x = _x;
  y = _y;
};
unit::~unit( ) {};

// The functions and what they do
string unit::getName() const { return name; }
int unit::getHealth() const { return health; }
int unit::getDamage() const { return damage; }
void unit::setHealth(int _health) { health = _health; }
void unit::setDamage(int _damage) { damage = _damage; }
int unit::getX() const { return x; }
int unit::getY() const { return y; }








