//
//  Vector3D.h
//  3DVectors
//
//  Created by Brett Hodges on 4/17/15.
//  Copyright (c) 2015 Brett Hodges. All rights reserved.
//

#ifndef _DVectors_Vector3D_h
#define _DVectors_Vector3D_h

using namespace std;

class Vector3D{
    
public:
    Vector3D();
    Vector3D(double x, double y, double z);
    Vector3D(Vector3D& v);
    double magnitude();
    double dot(Vector3D v);
    Vector3D normalize();
    Vector3D cross(Vector3D v);
    Vector3D operator+(const Vector3D& v);
    Vector3D operator-(const Vector3D& v);
    Vector3D operator*(const double s);
    friend ostream& operator<<(ostream& os, const Vector3D& v);
    
private:
    double x, y, z;
    
};

#endif
