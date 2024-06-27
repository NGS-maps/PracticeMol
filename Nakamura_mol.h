#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct atom_info
{
float x;
float y;
float z;
char  e;
} atom_info;

typedef struct bond_info
{
int fr;
int to;
int order;
} bond_info;
