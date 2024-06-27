#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "mol.h"

float calc_distance(int n_atom, int n_bond, atom_info *atoms)
 {
 float dx,dy,dz,distance;
 dx = ###;
 dy = ###;
 dz = ###;
 distance= #######;
 return distance;
 }

int main(int argc, char **argv)
 {
 int i,j;
 int n_atom;
 int n_bond;
 atom_info *atoms;
 bond_info *bonds;
 char buff[512];

 FILE *infile;                                // Open Input mol File
 infile = fopen(argv[1],"r");
 if(infile == NULL)
  {
  printf("Failed to open input file %s\n",argv[1]);
  return 1;
  }

 fgets(buff,132,infile);                      // First Line
 sscanf(buff,"%d %d",&n_atom,&n_bond);        // Read number of atoms and bonds
 
 atoms =   (###)malloc(###);
 bonds =   (###)malloc(###);
 if((atoms == NULL) || (bonds == NULL))
  {
  printf("Failed to allocate memory\n");
  return 1;
  }

 for(i=0;i<n_atom;i++)                         // Read Atom Information
  {
  fgets(buff,132,infile);
  sscanf(buff,"%f %f %f %c",&atoms[i].x,###,###,###);
  }

 for(i=0;i<n_bond;i++)                         // Read Bond Information
  {
  fgets(buff,132,infile);
  sscanf(buff,"%d %d %d",&bonds[i].fr,###);
  }

 int n_c = 0;                                   // Number of Carbon
 int n_h = 0;                                   // Number of Hydrogen
 int n_n = 0;                                   // Number of Nitrogen
 int n_o = 0;                                   // Number of Oxigen
 int n_p = 0;                                   // Number of Phosphorus
 int n_s = 0;                                   // Number of Sulfur

 for(i=0;i<n_atom;i++)                          // Output Formula
  {
  ##############;
  ##############;
  ##############;
  }

 float distance;
 for(i=0;i<n_bond;i++)                          // Calculate bond distances and list of bonds
  {
  distance = calc_distance(##,##,atoms);
  printf(###########);
  }

 }
