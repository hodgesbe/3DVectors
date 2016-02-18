//
//  main.cpp
//  3DVectors
//
//  Created by Brett Hodges on 4/17/15.
//  Copyright (c) 2015 Brett Hodges. All rights reserved.
//

#include <iostream>
#include <math.h>
#include "Vector3D.h"

using namespace std;

//Null Constructor
Vector3D::Vector3D(){
    x = 0;
    y = 0;
    z = 0;
}

//Constructs a 3D Vector
Vector3D::Vector3D(double x, double y, double z){
    this->x = x;
    this->y = y;
    this->z = z;
}

//Clones a 3D Vector
Vector3D::Vector3D(Vector3D& v){
    x = v.x;
    y = v.y;
    z = v.z;
}

//Calculates the magnitude of a vector a returns as a double
double Vector3D::magnitude(){
    return sqrt((this->x*this->x)+(this->y*this->y)+(this->z*this->z));
}

//Calculates the Dot Product of a vector and returns as a double
double Vector3D::dot(Vector3D v){
    return (this->x*v.x)+(this->y*v.y)+(this->z*v.z);
}

//Calculates and returns the Normalized vector
Vector3D Vector3D::normalize(){
    Vector3D v1 (this->x/this->magnitude(), this->y/this->magnitude(), this->z/this->magnitude());
    return v1;
}

//Calculates the cross product of two vectors and returns it as a new vector
Vector3D Vector3D::cross(Vector3D v){
    Vector3D v1 ((this->y*v.z)-(this->z*v.y), (this->z*v.x)-(this->x*v.z), (this->x*v.y)-(this->y*v.x));
    return v1;
}

//Overloads the "+" operator allowing addition of vectors
Vector3D Vector3D::operator+(const Vector3D& v){
    Vector3D v1 (this->x+v.x ,this->y+v.y, this->z+v.z);
    return v1;
}

//Overloads the "-" operator allowing for subtraction of vectors
Vector3D Vector3D::operator-(const Vector3D& v){
    Vector3D v1 (this->x-v.x, this->y-v.y, this->z-v.z);
    return v1;
}

//Overloads the "*" operator allowing for scalor multiplication
Vector3D Vector3D::operator*(const double s){
    Vector3D v1 (this->x*s, this->y*s, this->z*s);
    return v1;
}

//Overloads the redirect operator to print 3D vectors
ostream& operator<<(ostream& os, const Vector3D& v){
    os<<"["<<v.x<<", "<<v.y<<" ,"<<v.z<<"]"<<endl;
    return os;
}


int main(int argc, const char * argv[]) {
   
    
    Vector3D x (1, 2, 3);
    Vector3D y (4, 5, 6);
    Vector3D u (x);
    Vector3D nullVect;
    
    cout<<x+y;
    cout<<x-y;
    cout<<x*5;
    cout<<x.magnitude()<<endl;
    cout<<x.dot(y)<<endl;
    cout<<x.cross(y);
    cout<<y.normalize();
    cout<<y.magnitude();
    
    
    return 0;
}
