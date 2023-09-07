//
// Created by Symbolic on 2023/8/29.
//

#ifndef RAYTRACINGWEEKEND_RAY_H
#define RAYTRACINGWEEKEND_RAY_H

#include "vec3.h"

class ray {
    point3 orig;
    vec3 dir;
    double tm;

public:
    ray() {}
    ray(const point3 &origin, const vec3 &direction) : orig(origin), dir(direction), tm(0) {}
    ray(const point3 &origin, const vec3 &direction, double time = 0.0) : orig(origin), dir(direction), tm(time) {}
    point3 origin() const { return orig; }
    vec3 direction() const { return dir; }
    double time() const { return tm; }
    point3 at(double t) const {
        return orig + t * dir;
    }
};
#endif//RAYTRACINGWEEKEND_RAY_H
