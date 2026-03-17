#ifndef __MORLOC_MATH_HPP__
#define __MORLOC_MATH_HPP__

#include <cmath>

// Constants

double morloc_pi() {
    return M_PI;
}

double morloc_e() {
    return M_E;
}

// Trigonometric

template <typename A>
A morloc_sin(A x) {
    return std::sin(x);
}

template <typename A>
A morloc_cos(A x) {
    return std::cos(x);
}

template <typename A>
A morloc_tan(A x) {
    return std::tan(x);
}

template <typename A>
A morloc_asin(A x) {
    return std::asin(x);
}

template <typename A>
A morloc_acos(A x) {
    return std::acos(x);
}

template <typename A>
A morloc_atan(A x) {
    return std::atan(x);
}

template <typename A>
A morloc_atan2(A y, A x) {
    return std::atan2(y, x);
}

// Hyperbolic

template <typename A>
A morloc_sinh(A x) {
    return std::sinh(x);
}

template <typename A>
A morloc_cosh(A x) {
    return std::cosh(x);
}

template <typename A>
A morloc_tanh(A x) {
    return std::tanh(x);
}

template <typename A>
A morloc_asinh(A x) {
    return std::asinh(x);
}

template <typename A>
A morloc_acosh(A x) {
    return std::acosh(x);
}

template <typename A>
A morloc_atanh(A x) {
    return std::atanh(x);
}

// Exponential and logarithmic

template <typename A>
A morloc_exp(A x) {
    return std::exp(x);
}

template <typename A>
A morloc_log2(A x) {
    return std::log2(x);
}

template <typename A>
A morloc_log10(A x) {
    return std::log10(x);
}

// Roots

template <typename A>
A morloc_sqrt(A x) {
    return std::sqrt(x);
}

// Rounding

template <typename A>
A morloc_round(A x) {
    return std::round(x);
}

template <typename A>
A morloc_ceil(A x) {
    return std::ceil(x);
}

template <typename A>
A morloc_floor(A x) {
    return std::floor(x);
}

// Sign

template <typename A>
A morloc_sign(A x) {
    return (x > A(0)) - (x < A(0));
}

#endif
