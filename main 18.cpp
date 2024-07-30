#include <iostream>

using namespace std;

// checking for duplicate numbers in an array

int main() {
  //variable declaration
  int numbers[7] = {1,2,3,4,5,6,3};
  bool duplicateFound = false;

  //nested loop
  for(int i = 0; i < 7; i++){
    for(int j = i+1; j < 7; j++){
      if(numbers[i] == numbers[j]){
        duplicateFound = true;
        cout << "A duplicate is found" << numbers[i] << endl;
        break;//breaks from the current if statment loop
      }
    if(duplicateFound){
      break;
    }
  }
  
  }
  if(!duplicateFound){
    cout << "No duplicate found" << endl;
  }
  
return 0;
  
}