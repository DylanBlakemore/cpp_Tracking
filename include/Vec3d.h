/*
 * Vec3d.h
 *
 *  Created on: 27 Jul 2016
 *      Author: dylan
 */

#ifndef VEC3D_H_
#define VEC3D_H_

#include <cmath>
#include <iostream>

class Vec3d {
	// overloaded friend operators
	friend std::ostream& operator<<(std::ostream& out, const Vec3d& in_vec);

public:
	// Constructors
	Vec3d() {
		for(int i = 0; i < 3; i++)
			x[i] = 0;
	}

	Vec3d(const double x_in[3]) {
		for(int i = 0; i < 3; i++)
			x[i] = x_in[i];
	}

	Vec3d(const double x_in, const double y_in, const double z_in) {
		x[0] = x_in;
		x[1] = y_in;
		x[2] = z_in;
	}

	// overloaded operators
	Vec3d operator+(const Vec3d& in_vec);
	Vec3d operator-(const Vec3d& in_vec);
	double& operator[](const int n);
	const double& operator[](const int n) const;

	double norm() const;

private:
	double x[3];
};

#endif /* VEC3D_H_ */
