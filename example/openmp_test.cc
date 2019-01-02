#include <omp.h>

#include <iostream>

int main(int, char**) {
  std::cout << omp_get_max_threads() << "\n";
  return 0;
}
