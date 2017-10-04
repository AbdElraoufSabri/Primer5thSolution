#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item item1, item2;
  std::cin >> item1 >> item2;

  if (item1.isbn() == item2.isbn())
    std::cout << (item1 + item2) << '\n';
  else
    std::cout << "Different ISBN" << '\n';

  return 0;
}
