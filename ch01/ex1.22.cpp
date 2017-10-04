#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item item, temp;
  std::cin >> item;

  while (std::cin >> temp) {
    if (temp.isbn() == item.isbn())
      item += temp;
    else{
      std::cout << "sum = " << item << '\n';
      item = temp;
    }
  }
  return 0;
}
