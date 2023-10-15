#include "format.h"

#include <iomanip>
#include <iostream>
#include <string>

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {
  long hours = seconds / 3600;
  long remainder = seconds % 3600;
  long minutes = remainder / 60;
  long sec = remainder % 60;

  std::stringstream sstream;
  sstream << std::setfill('0');

  sstream << std::setw(2) << hours << ':' << std::setw(2) << minutes << ':'
          << std::setw(2) << sec;

  return sstream.str();
}
