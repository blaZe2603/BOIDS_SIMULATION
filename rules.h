#pragma once


#include "particle.h"


void cohesion(Boid boid_array[],BoidNeighbor boid_neighbors[][MAX_PARTICLES],int boid_neighbour_count[]);
void allignment(Boid boid_array[], BoidNeighbor boid_neighbors[][MAX_PARTICLES], int boid_neighbor_count[]);
void seperation(Boid boid_array[], BoidNeighbor boid_neighbors[][MAX_PARTICLES], int boid_neighbor_count[],BoidNeighbor boid_protected_neighbors[][MAX_PARTICLES],int boid_protected_neighbors_count[]);
