#include <iostream>
#include <string>
#include <algorithm>

//using namespace std;

int main() {
  string arr[3] = {"mint", "mini", "mineral"}; 
  int size = sizeof(arr)/sizeof(*arr);
  // The longest common prefix of an empty array is "".
  if (size == 0){
    printf("Longest common prefix:");
  }
    // The longest common prefix of an array containing 
    // only one element is that element itself.
  else if (size == 1){
    printf( "Longest common prefix: %d",arr[0]);
  }
  else{
    // Sort the array
    qsort(arr, arr + size);
    int length = arr[0].size();
    string result = "";
    // Compare the first and the last string character
    // by character.
    for(int i = 0; i < length; i++){
      // If the characters match, append the character to the result.
      if(arr[0][i] == arr[size-1][i]){
        result += arr[0][i];
      }
      // Else stop the comparison.
      else{
        break;
      }
    }
    printf("Longest common prefix: %d" ,result); 
  }
  return 0;
}
