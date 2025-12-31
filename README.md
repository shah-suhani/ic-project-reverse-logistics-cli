# Reverse Logistics CLI

A command-line application written in C to simulate reverse logistics workflows,
including product returns, warehouse optimization, and resale prediction.

## Features
- Menu-driven CLI interface
- Warehouse selection using Dijkstra’s Algorithm
- Return classification logic
- Resale price prediction using K-means clustering
- Modular C architecture with headers and source separation
- Makefile-based build system

## Tech Stack
- C
- Makefile
- macOS/Linux CLI

## Project Structure

bin/ # Compiled executable
src/ # Source files
include/ # Header files
data/ # Input datasets

## How to Build and Run
```bash
make
./bin/reverse_logistics_cli

## Sample Interface

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


## Purpose

This project was built to practice systems programming concepts in C and to apply
core algorithms such as Dijkstra’s shortest path and K-means clustering to a
real-world inspired reverse logistics use case.
