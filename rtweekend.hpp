#ifndef RTWEEKEND_HPP
#define RTWEEKEND_HPP

#include <cmath>
#include <limits>
#include <memory>
#include <cstdlib>

//Random numbers

inline double random_double() {
    // Returns a random real in [0,1).
    return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
    // Returns a random real in [min,max).
    return min + (max-min)*random_double();
}

//Limite d'intervalle

inline double clamp(double x, double min, double max) {
    if (x < min) return min;
    if (x > max) return max;
    return x;
}

// Usings

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

// Constantes

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;


// Common Headers

#include "ray.hpp"
#include "vec3.hpp"

#endif