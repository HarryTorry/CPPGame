#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void log_error(string what)
{
 ofstream text_file;
 text_file.open ("error_log.txt", ios::app);
 
 text_file << what << "\n";    
 text_file.close();    
}
