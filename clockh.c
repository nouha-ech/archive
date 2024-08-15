#include <stdio.h>;
#include <time.h>;

  clock_t debut = clock();
    tri_fusion(t, 0, 8);
    clock_t fin = clock();
    double temps = (double)((fin - debut)/CLOCKS_PER_SEC);
    printf("le temps ecoule est %f sec \n",temps);

