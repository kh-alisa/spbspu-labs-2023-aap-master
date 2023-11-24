#ifndef MATRIX_FUNCS_HPP
#define MATRIX_FUNCS_HPP
#include <cstddef>
#include <fstream>

namespace psarev
{
  size_t inputMatrix(std::ifstream& in, int* matrix, size_t cap, size_t counter);
  bool isTriMatrix(int* matrix, int rows, int cols);
}
#endif
