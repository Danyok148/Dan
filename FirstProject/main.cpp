
#include <iostream>

using namespace std;

int main() {
 const int size = 5;
 int arr[size] = { 1,2,3,4,5 };

 const int ROW = 2, COL = 5;
 int array2d[ROW][COL] = { {1,2,3,4,5},{6,7,8,9,10} };

 printf("El: %i\n", array2d[ROW - 1][COL - 1]);


 return 0;
}
