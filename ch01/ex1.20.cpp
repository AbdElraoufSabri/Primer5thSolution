#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item;
    while (std::cin >> item) {
      std::cout << "Entered item : " << item << '\n';
    }
    
    return 0;
}
