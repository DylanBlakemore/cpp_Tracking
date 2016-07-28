//============================================================================
// Name        : cpp_Tracking.cpp
// Author      : Dylan Blakemore
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>

#include "../include/Vec3d.h"
#include "../include/TrackEntry.h"

/* Returns a vector of strings, with each entry being a line of the input csv file.
 *
 * 'filename' is the path to the csv file.
 */
std::vector<std::string> loadCSV(const std::string& filename) {
	std::ifstream csv_file(filename.c_str());

	std::string line;
	std::vector<std::string> line_vec;

	while(std::getline(csv_file, line)) {
		line_vec.push_back(line);
	}

	return line_vec;
}
/* Returns result of command line input.
 */
std::string getInput(const std::string prompt) {
	std:: cout << prompt;
	std::string input_str;
	std::cin >> input_str;

	return input_str;
}

int main() {
	std::string input_fname = getInput("Enter the path to the input .csv file: ");
	std::vector<std::string> csv_line_vec = loadCSV(input_fname);
	std::vector<TrackEntry*> entries_vec(csv_line_vec.size());

	return 0;
}
