#include <iostream>

int main();
void bubble_sort(int *a, int n);

int main() {
  int size;

  std::cout << "Enter size: ";
  std::cin >> size;

  std::cout << "Enter the " << size << " entries: " << std::endl;
  int array[size];
  for (int i {0}; i < size; i++){
    std::cin >> array[i];
  }

  std::cout << std::endl;

  std::cout << "ORIGINAL array:";
  for (int i {0}; i < size; i++){
    std::cout << array[i] << "  ";
  }

  bubble_sort(array, size);

  std::cout << std::endl;
  std::cout << std::endl;

  std::cout << "SORTED array:";
  for (int i {0}; i < size; i++){
    std::cout << array[i] << "  ";
  }
  
  return 0;
}

void bubble_sort (int *a, int n) {

  for (int i{0}; i < n; i++){
    for (int j{0}; j < (n - i - 1); j++) {
      if (a[j] > a[j+1]) {
        int tmp = a[j];
        a[j] = a[j+1];
        a[j+1] = tmp;
      }
    }
  }
}