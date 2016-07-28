/*
 * TrackEntry.h
 *
 *  Created on: 27 Jul 2016
 *      Author: dylan
 */

#ifndef TRACKENTRY_H_
#define TRACKENTRY_H_

#include "../include/Vec3d.h"

#include <sstream>
#include <stdlib.h>

class TrackEntry {
public:
	TrackEntry() {
		x = Vec3d(0,0,0);
		t = 0;
	}
	TrackEntry(const std::string& in_string) {
		// in_string is a line in the csv input file. Parse the string into
		// a Vec3d object and a time float.
		std::stringstream ss(in_string);
		std::string s_value;
		double x_vals[3];
		unsigned int dim = 0;

		while(std::getline(ss, s_value, ',')) {
			if(dim > 3)
				break;
			else if(dim == 3)
				t = atof(s_value.c_str());
			else
				x_vals[dim] = atof(s_value.c_str());
			dim++;
		}

		x = Vec3d(x_vals);
	}
	TrackEntry(const Vec3d& in_vec, const double in_t) {
		x = in_vec;
		t = in_t;
	}

	Vec3d getPosition() const {return x;}
	double getTimestamp() const {return t;}

private:
	Vec3d x;
	double t;
};

#endif /* TRACKENTRY_H_ */
