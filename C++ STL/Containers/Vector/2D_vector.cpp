#include <iostream>
#include <vector>
using namespace std;

int main(){

      vector <vector<int>> arr(4, vector<int>(4, 0)); // create 2d vector
      int totalRows = arr.size(); // size of row
      int totalCol = arr[0].size(); // size of column

      cout << totalRows << " ";
      cout << totalCol << " ";

      // printing 2d vector of different size of columns

      vector<vector<int>> brr(4);

      brr[0] = vector<int>(4);
      brr[1] = vector<int>(2);
      brr[2] = vector<int>(5);
      brr[3] = vector<int>(3);

      int totalRowCol = brr.size();

      // int toalColCount = brr[i].size(); print column size using loop

}