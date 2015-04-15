//
//  Ray.h
//  my_ray_tracer
//
//  Created by Alexandre on 14/04/2015.
//  Copyright (c) 2015 Alexandre. All rights reserved.
//

#ifndef __my_ray_tracer__Ray__
#define __my_ray_tracer__Ray__

#include <stdio.h>
#include "Vec3.h"
#include "tiny_obj_loader.h"
#include "BBox.h"
#include "kdTree.h"
#include <float.h>

class Ray {
public:
    Vec3f origin;
    Vec3f direction;
    
    Ray(Vec3f _origin, Vec3f _direction)
    : origin(_origin), direction(_direction){}
    
    Vec3f rayTriangleIntersection (Vec3f o, Vec3f w,float p0,float p1,float p2);
    Vec3f raySceneIntersection();
    bool rayBBoxIntersection(const BBox& box,const float& t0,const float& t1);
    void raySceneIntersectionKdTree(const kdTree& tree, const std::vector<tinyobj::shape_t> & shapes,Triangle& triIntersect,Vec3f& b, float& t);
    float evaluateResponse(Vec3f intersection);
    
};

#endif /* defined(__my_ray_tracer__Ray__) */
