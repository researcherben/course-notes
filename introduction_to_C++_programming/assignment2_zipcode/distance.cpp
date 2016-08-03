#include <cmath>

#define PI 3.14159265
#define RADIUS_OF_EARTH 3963.1           // radius of earth in miles

inline double toRadians (double degrees) {
    return degrees * PI / 180.0;
}

//  Compute distance in miles between two points on Earth, with
//  coordinates specified in degrees. 
//  Note: West longitudes and South latitudes have negative values

double globeDistance (double lat1, double long1, double lat2, double long2) {

    double a1 = toRadians(lat1);
    double b1 = toRadians(long1);

    double a2 = toRadians(lat2);
    double b2 = toRadians(long2);

    return acos( cos(a1) * cos(b1) * cos(a2) * cos(b2) +
                 cos(a1)*  sin(b1)*  cos(a2)*  sin(b2) + 
                 sin(a1) * sin(a2) ) * RADIUS_OF_EARTH;
}