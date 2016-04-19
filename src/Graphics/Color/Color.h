/*
 * Color.h
 *
 *  Created on: Oct 28, 2015
 *      Author: Admin
 */

#ifndef COLOR_COLOR_H_
#define COLOR_COLOR_H_
#include <stdint.h>
#include <algorithm>
#include "stdint.h"
#include "macros.h"

class Color {
public:
	float r;
	float g;
	float b;
	Color();
	Color(float r, float g, float b);
	virtual ~Color(){};

	static const Color Red;
	static const Color Green;
	static const Color Blue;
	static const Color Black;
	static const Color White;

	bool operator==(const Color& c) const;
	Color operator*(float f) const;
	Color operator/(float f) const;
	Color operator+(const Color &c) const;

	void clamp();
	Color clamped();

};


#endif /* COLOR_COLOR_H_ */
