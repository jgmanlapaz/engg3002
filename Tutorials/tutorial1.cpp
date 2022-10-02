// from Progamming in C++ for Engineering and Science
// this is a program that computes for fuel consumption

#include <iostream> // cin, cout, <<, >>
using namespace std;
int main(){
  int route; // route number
  cout << "Enter your route number: ";
  cin >> route;
  double miles, // miles traveled
    gallonsOfFuel, // gallons used
    unitFuelCost, // fuel cost per gallon
    otherOperatingCost; // other operating costs
  cout << "Enter:\n\ttotal miles traveled,"
    << "\n\tgallons of fuel used,"
    << "\n\tfuel cost per gallon, and"
    << "\n\tother operating costs (total):"
    << "\n\t---> ";
  
  cin >> miles >> gallonsOfFuel
    >> unitFuelCost >> otherOperatingCost;
  
  double milesPerGallon = miles / gallonsOfFuel,
    fuelCost = unitFuelCost * gallonsOfFuel,
    totalTripCost = fuelCost + otherOperatingCost,
    costPerMile = totalTripCost / miles;
  
  cout
    << "For Route #" << route << ":\n"
    << "\n\tMiles per gallon: " << milesPerGallon
    << "\n\tTotal cost: $" << totalTripCost
    << "\n\tCost per mile: $" << costPerMile
    << endl;
}