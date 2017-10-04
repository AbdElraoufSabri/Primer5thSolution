#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item item, temp;
  int count = 0;
  if (std::cin >> item) {
    ++count;
    while (std::cin >> temp) {
      if (temp.isbn() == item.isbn()) {
        ++count;
      } else {
        std::cout << "ISBN : " << item.isbn() << " occured " << count
                  << ((count > 1) ? " times" : " time") << '\n';
        item = temp;
        count = 1;
      }
    }
  }

  return 0;
}
