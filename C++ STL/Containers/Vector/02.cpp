#include <iostream>
#include <vector>
using namespace std;

int main(){

      vector<int> marks;

      marks.push_back(10);
      marks.push_back(20);
      marks.push_back(30);
      marks.push_back(40);
      marks.push_back(30);
      marks.push_back(40);

      // cout << marks.capacity() << endl; // 8

      marks.insert(marks.begin(), 50);
      cout << "Size: " << marks.size() << endl;

      marks.erase(marks.begin(), marks.end());
      cout << "Size: " << marks.size() << endl;


      cout << marks[0] << endl;


      cout << marks[0] << endl; // ----
//                                     ----- Both are same
      cout << marks.at(0) << endl;// --

      cout << "Size: " << marks.size() << endl;

      marks.pop_back();

      cout << "Size: " << marks.size() << endl;

      cout << marks.front() << endl;
      cout << marks.back() << endl;


// Swapping the values of two vector

      vector<int> first;
      vector<int> second;

      first.push_back(10);
      first.push_back(11);
      first.push_back(12);
      first.push_back(13);

      second.push_back(100);
      second.push_back(200);
      second.push_back(300);
      second.push_back(400);

      first.swap(second);

      cout << first[0] << ", " << first[1] << ", " << first[2] << ", " << first[3] << endl;


// for each loop

      for(int i : first){
            cout << i << " ";
      }
      cout << endl;

      for(int i : second){
            cout << i << " ";
      }

      return 0;
}