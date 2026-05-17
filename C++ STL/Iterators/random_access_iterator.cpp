#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
using namespace std;

int main(){

      std::vector<int> arr{10,20,30,40,50};
      
      // Traverse using iterator
      std::vector<int>::iterator it = arr.begin();

      while(it != arr.end()){
            // Write
            (*it) = (*it) + 6;

            // Read
            cout << *it << " ";

            // Forward moving
            it++;
      }
      cout << endl;

      std::vector<int>::iterator it = arr.end();

      // Backward moving
      while(it != arr.begin()){
            // pehle piche 
            it--;

            // than print
            cout << *it << " ";
      }
      cout << endl;

      // Random access 

      std::vector<int>::iterator it = arr.begin() + 3;
      cout << *it << endl; // 40
      
      return 0;
}