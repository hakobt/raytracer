#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray {
  public:
    ray() {}
    ray(const point3& origin, const vec3& direction): orig(origin), dir(direction) {}
    
    const point3& origin() const { return orig; }
    const vec3& dir() const { return dir; }
    
    point3 at(double t) const {
      return origin + t*dir;
    }
    
  private:
    point3 orig;
    vec3 dir;
};

#endif