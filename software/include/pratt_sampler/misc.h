#ifndef __INCLUDE_SAMPLER_MISC_H_
#define __INCLUDE_SAMPLER_MISC_H_
#define __MISC_USE_GSL__ // use gnu sci. lib. in misc.cc
#include <complex>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <gsl/gsl_sf.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_complex.h>
#include <gsl/gsl_complex_math.h>
#include <gsl/gsl_poly.h>
#include <boost/math/special_functions/bessel.hpp>
#include "classdefs.h"
#include "constants.h"
#include "sf.h"
using namespace std;

// --------------------------------
// Some random functions -- not all are used, or are copied into the BEST directory
//

namespace Misc{
	void BoostToCM(FourVector &u,FourVector &p,FourVector &ptilde);
	void Boost(FourVector &u,FourVector &ptilde,FourVector &p);

	void Pause();
	void Pause(int seconds);
};

#endif
