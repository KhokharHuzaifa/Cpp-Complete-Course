#include<iostream>
using namespace std;
int main(){
// Use the else if statement for multiple conditions

// Syntax
if (condition) {
  // block of code to be executed if the condition is true
} else if(condition) {
  // block of code to be executed if the condition is true
}
else{
      // block of code to be executed if the condition is false
}

// Example
int time = 20;
if (time < 18) {
  cout << "Good evening.";
} else if(time > 18) {
  cout << "Good morning.";
}
else {
     cout << "Good night.";
}
// Outputs "Good morning."
}