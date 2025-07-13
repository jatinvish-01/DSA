#include <iostream>
#include <queue>
using namespace std;

int main(){

      priority_queue<int> pq;
//    max-heap -> maximum value -> Highest Priority      

      pq.push(10);
      // 10
      pq.push(56);
      // 56, 10
      pq.push(78);
      // 78, 56, 10
      pq.push(14);
      // 78, 56, 14, 10

//    top() method -> Shows always Highest priority element
      cout << pq.top() << endl; // 78

      pq.pop();
      cout << pq.top() << endl; // 56

      cout << pq.size() << endl;

      if(pq.empty() == true){
            cout << "Pq is empty" << endl;
      }
      else{
            cout << "Pq is not empty" << endl;
      }

      return 0;
}