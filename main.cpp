// lab3
// Vincet Gabb
//
// 09/10/2020
 #define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
 #include "doctest.h"

#include <string>
using std::string;
using namespace std;

// COMPLETE EACH OF THE FOLLOWING FUNCTIONS

// Return a greeting: "Nice to meet you, NAME."
// If name param is empty string, return "Nice to meet you."
string greet(string name) {

if (name != "") {

  cout << "Nice to meet you, " << name << ".";

} else {

  return "Nice to meet you.";

}
return 0;
}


// Return true if denominator is a factor of numerator.
// Return false otherwise.
bool isFactor(int numerator, int denominator) {

  if ((numerator / denominator) % 2 == 0) {
  
  return true;

  } else {
  
 return false;
} 

}

// Given an initial value, .compute how many quarters, dimes, nickels, and
// pennies would be given as change
void makeChange(unsigned int initialValue, unsigned int &quarters,
                unsigned int &dimes, unsigned int &nickels,
                unsigned int &pennies) {

      int left_Over;

      quarters = initialValue / 25;
      left_Over = initialValue % 25;

      dimes = left_Over / 10;
      left_Over = left_Over % 10;

      nickels = left_Over / 5;
      left_Over = left_Over % 5;

      pennies = left_Over;

  return ;
}

// Convert a Celsius temperature to a Fahrenheit temperature.
double celsiusToFahrenheit(double celsiusTemp) {

return (celsiusTemp * 9 / 5) + 32;

}

// Convert a Fahrenheit temperature to a Celsius temperature.
double fahrenheitToCelsius(double fahrenheitTemp) {

return (fahrenheitTemp - 32) * 5 / 9;

}

//
// Unit test. Do not alter.
//

 TEST_CASE("Function implementations") {
   CHECK_EQ(greet(""), string("Nice to meet you."));
   CHECK_EQ(greet("Jane"), string("Nice to meet you, Jane."));

   CHECK_EQ(isFactor(100, 25), true);
   CHECK_EQ(isFactor(100, 24), false);

   unsigned int quarters, dimes, nickels, pennies;
   makeChange(41, quarters, dimes, nickels, pennies);
   CHECK_EQ(quarters, 1);
   CHECK_EQ(dimes, 1);
   CHECK_EQ(nickels, 1);
   CHECK_EQ(pennies, 1);
   makeChange(0, quarters, dimes, nickels, pennies);
   CHECK_EQ(quarters, 0);
   CHECK_EQ(dimes, 0);
   CHECK_EQ(nickels, 0);
   CHECK_EQ(pennies, 0);

   CHECK_EQ(celsiusToFahrenheit(0.0), doctest::Approx(32.0));
   CHECK_EQ(celsiusToFahrenheit(100.0), doctest::Approx(212.0));

   CHECK_EQ(fahrenheitToCelsius(32.0), doctest::Approx(0.0));
   CHECK_EQ(fahrenheitToCelsius(212.0), doctest::Approx(100.0));
 }
