#pragma once

#include "map/map.h"
#include <vector>

typedef boost::geometry::model::d2::point_xy<double> Point;

std::vector<Point> get_overlap_intersections(const Map &);