#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include "warehouses.h"

double haversine(double lat1, double lon1, double lat2, double lon2);

int dijkstraFindBestWarehouse(Warehouse warehouses[], int count, double productLat, double productLon);

#endif