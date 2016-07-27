/*
 * TrackEntry.h
 *
 *  Created on: 27 Jul 2016
 *      Author: dylan
 */

#ifndef TRACKENTRY_H_
#define TRACKENTRY_H_

#include "../include/Vec3d.h"

class TrackEntry {
public:
	TrackEntry();
	TrackEntry(const std::string& in_string) {
		// in_string is a line in the csv input file. Parse the string into
		// a Vec3d object and a time float.
	}
	TrackEntry(const Vec3d& in_vec, const double in_t) {
		x = in_vec;
		t = in_t;
	}

private:
	Vec3d x;
	double t;
};

#endif /* TRACKENTRY_H_ */
