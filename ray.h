//
// Created by Symbolic on 2023/8/29.
//

#ifndef RAYTRACINGWEEKEND_RAY_H
#define RAYTRACINGWEEKEND_RAY_H

#include "vec3.h"

class ray {
    point3 orig;
    vec3 dir;

public:
    ray() {}
    ray(const point3 &origin, const vec3 &direction) : orig(origin), dir(direction) {}
    point3 origin() const { return orig; }
    vec3 direction() const { return dir; }
    point3 at(double t) const {
        return orig + t * dir;
    }
};
#endif//RAYTRACINGWEEKEND_RAY_H
