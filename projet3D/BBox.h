//
//  BBox.h
//  projet3D
//
//  Created by Julien Philip on 14/04/2015.
//  Copyright (c) 2015 Julien Philip. All rights reserved.
//

#ifndef projet3D_BBox_h
#define projet3D_BBox_h

#include "Vec3.h"

class BBox{
    public :
    inline BBox(){
        xL=0;
        yL=0;
        zL=0;
        coin=Vec3f(0,0,0);
    };
    inline BBox(float _xL,float _yL,float _zL,Vec3f _coin){
        xL=_xL;
        yL=_yL;
        zL=_zL;
        coin=_coin;
    };

    
    int maxAxis() {
        if (xL>yL && xL>zL) {
            return 0;
        }
        else if (yL>zL)
            return 1;
        else
            return 2;
    }
    
    
    float xL,yL,zL;
    Vec3f coin;
};







#endif
