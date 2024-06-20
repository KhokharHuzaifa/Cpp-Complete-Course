// It can be used to replace multiple lines of code with a single line. It is often used to replace simple 
// if else statements
// Syntax
variable = (condition) ? expressionTrue : expressionFalse;

// Ins of writing:
// Example
int time = 20;if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}

// You can simply write:
// Example
int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;
