#ifndef TRIG_UTILITIES
#define TRIG_UTILITIES

	#include "trig_fixed.h"

	#define PI   3.141592653589793238462643383279502884197169399375105820
	#define PI_2 1.570796326794896619231321691639751442098584699687552910

	TRIG_FIXED_TYPE double_to_fixed(double);
	double fixed_to_double(TRIG_FIXED_TYPE);
#endif
