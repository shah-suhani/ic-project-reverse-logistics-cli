#ifndef CLI_H
#define CLI_H

#include "products.h"
#include "customers.h"
#include "warehouses.h"

void processReturnClassification();

void displayMenu();

void processMenu(Product products[], int productCount,
                 Customer customers[], int customerCount,
                 Warehouse warehouses[], int warehouseCount);

            

#endif 
