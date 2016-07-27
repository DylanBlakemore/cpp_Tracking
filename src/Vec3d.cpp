/*
 * Vec3d.cpp
 *
 *  Created on: 27 Jul 2016
 *      Author: dylan
 */

#include "../include/Vec3d.h"

Vec3d Vec3d::operator+(const Vec3d& in_vec) {
	return Vec3d(this->x[0] + in_vec[0], this->x[1] + in_vec[1], this->x[2] + in_vec[2]);
}

Vec3d Vec3d::operator-(const Vec3d& in_vec) {
	return Vec3d(this->x[0] - in_vec[0], this->x[1] - in_vec[1], this->x[2] - in_vec[2]);
}

std::ostream& operator<<(std::ostream& out, const Vec3d& in_vec) {
	out << "\t" << in_vec.x[0] << "\t" << in_vec.x[1] << "\t" << in_vec.x[2];
	return out;
}

double& Vec3d::operator [](const int n) {
	if(n > 2 || n < 0)
		std::cerr << "Error : Index exceeds bounds\n";
	else
		return x[n];
}

const double& Vec3d::operator [](const int n) const {
	if(n > 2 || n < 0)
		std::cerr << "Error : Index exceeds bounds\n";
	else
		return x[n];
}

double Vec3d::norm() const{
	return sqrt(pow(x[0], 2) + pow(x[1], 2) + pow(x[2], 2));
}
