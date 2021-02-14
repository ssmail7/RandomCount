//***************************************************************
// Written by Steven Smail for COP3331
//
// fileIOmain.cpp (Project 5)
//
// This program prompts the user for a filename to read (in this
// case "Random.txt"), counts the number of random values in the
// file, and returns the sum and average of the numbers.
//***************************************************************
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>using namespace std;int main(){
  ifstream inFile;
  string filename;
  int count{0};
  double number{0}, total{0};

  // Get the filename from the user
  cout << "Enter the filename: ";
  getline(cin, filename);

  // Open the file
  inFile.open(filename);

  // If the input file opened successfully, process it
  if(inFile)
  {
    while(inFile >> number)
    {
      total += number;
      count++;
    }

    cout << "Number of numbers: " << count << endl;
    cout << "Sum of the numbers: " << total << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Average of the numbers: "
         << total / count << endl;

    // Close the file
    inFile.close();
  }
  else
  {
    // Display an error message
    cout << "Error opening the file.\n";
  }
}