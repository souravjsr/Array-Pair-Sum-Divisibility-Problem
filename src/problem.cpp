/*
 * Author : Sourav Mukhejee
 * Problem Statement : http://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem/0
 * Version : 0.1
 * Status: In-Progress
 */
#include <iostream>
#include <vector>

using namespace std;
int main (int argc, char* argv[]){
  int num =0, val =0;
  cout << "Enter the number of elements: -->\n";
  cin >> num;
  vector<int> arr;
  for (int i=0; i <= num; i++){
      cin >> val;
      arr.push_back(val);
  }
  try{
  for (int i=0; i <= num+2; i++){
        cout << arr.at(i);
    }
  }
  catch(exception &e){
      cout  <<endl<< e.what() << " error"<<endl;
  }
  return 0;
}
