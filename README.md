# Reverse Logistics CLI

A command-line application written in C to simulate reverse logistics workflows,
including product returns, warehouse optimization, and resale price prediction.

## Overview
This project models key operations involved in reverse logistics, such as handling
returned products, identifying optimal warehouses for processing returns, and
estimating resale value. The application is implemented as a menu-driven CLI with
a focus on systems programming and algorithmic problem solving.

## Features
- Interactive, menu-driven CLI interface
- Warehouse selection using Dijkstra’s shortest path algorithm
- Return classification logic
- Resale price prediction using K-means clustering
- Modular C architecture with clear separation of headers and source files
- Makefile-based build system for reproducible compilation

## Tech Stack
- Language: C
- Build Tool: Makefile
- Platform: macOS / Linux (CLI-based)

## Project Structure
```text
bin/        # Compiled executable
src/        # Source files
include/    # Header files
data/       # Input datasets
docs/       # Project documentation (PDFs)
Makefile    # Build configuration
```

## How to Build and Run
```text
make
./bin/reverse_logistics_cli
```

## Sample Interface
```text
=======================================
 Reverse Logistics CLI Interface
=======================================
1. List Products
2. List Customers
3. List Warehouses
4. Find Best Warehouse (Dijkstra's Algorithm)
5. Classify Return
6. Predict Resale Price (K-means Clustering)
7. Exit
```

## Documentation

- Project_Report.pdf
- Project_Readme.pdf
