#include <iostream>
#include <string>
#include "headers.h"


using namespace std;

int main(int argc, char argv[])
{
 player our_player;
 ai enemy;
 
 our_player.newBarracks(false);
 our_player.print();

 cin.get();	

}
