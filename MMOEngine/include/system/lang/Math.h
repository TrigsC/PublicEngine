/*
Copyright (C) 2007 <SWGEmu>. All rights reserved.
Distribution of this file for usage outside of Core3 is prohibited.
*/

#ifndef MATH_
#define MATH_

#include <math.h>

namespace sys {
  namespace lang {

	class Math {
	public:
		static const double PI = M_PI; 
		
		static double acos(double arg) {
			return ::acos(arg);	
		}

		static double sin(double arg) {
			return ::sin(arg);	
		}

		static double cos(double arg) {
			return ::cos(arg);	
		}
	};

  } // namespace lang
} // namespace sys

using namespace sys::lang;

#endif /*MATH_*/
