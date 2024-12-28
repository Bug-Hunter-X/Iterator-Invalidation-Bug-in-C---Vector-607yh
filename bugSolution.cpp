#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec; 
  for (int i = 0; i < 10; ++i) {
    vec.push_back(i); 
  }

  for (auto it = vec.begin(); it != vec.end(); ) {
    if (*it == 5) {
      it = vec.erase(it); 
    } else {
      ++it; 
    }
  }

  for (int i = 0; i < vec.size(); ++i) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;
  return 0; 
} 