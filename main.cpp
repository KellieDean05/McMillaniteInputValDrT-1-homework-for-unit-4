/*
	Input Validation with Ref Functions 
	A cleaner way to do input validation
	Validating input, an essential process.
	Source: http://stackoverflow.com/questions/514420/how-to-validate-numeric-input-c
	Keeping Dr. McMillan from breaking my code, defend against "dark side of the force",
	and/or legitimate user error. 
	//Try and Catch blocks are used in error checking
	Teacher: Dr. Tyson McMillan 
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;

int main()
{
   // how counters work
int counter = 0; // starting point
double n = 0.0;
while(n != -1.0) // exit
{
cout << "\n Please enter n (-1 to exit.): " ;
n = validateDouble(n);
// perform calculations
/// increment counter
counter++; // add 1 to counter
}
cout << "This program ran. " << counter ;
cout << "times.";

/* part 2 hints
 1. Ask user for the stopping point
 2. Loop from 1...n all new outputs on a new line.
 my how I love for loops for this.
 3. Look at the for loop code we wrote within the last 2 weeks.
 4. append the appropriate suffix 
5. think controlling output
  IF conditions and for loops working together.
  If a n ends in 3,. generally append rd to the number 33rd, 103rd.
  What does that mean in code?
  LET i be my index for my for loop counter.
 for(int i = 1; i <= n; i++)
  {
    if ((i %10) == 3) this number ends in 3
    {
      cout << i << "rd" << endl;
    }
  else if( ((i % 10) == 4 )|| ( (i%10 == 5) ) // this number ends in 4 // 
    {
    cout << i << "th" << endl;
    }
  
  else if ((i % 10) == 2) // this number ends in 2
    {
    cout << i << "nd" << endl;  
    } 
  
  }


*/
//unit 2 assignment: do not allow unput of 0. 
/* double number3 = 0.0;
    // 0 || 2 make this program loop forever.
  
    do
    {
    cout << "Please enter number3 (not 0 or 2): ";
    cin >> number3;
    }
    While(number == 0 || number3 == 2); 
  
  



// 0 && 2 make this program exit.
  
  do
  {
    cout << "Please enter number3 (0 AND 2 exit the program.) : ";
    cin >> number3;
    }
    while (number3 != 0 && number3 != 2); // DeMorgans law





*/

   
    return 0;
}
