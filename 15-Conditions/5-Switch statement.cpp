// Use the switch statement to select one of many code blocks to be executed.

// Syntax

switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

// The switch expression is evaluated once
// The value of the expression is compared with the values of each case
// If there is a match, the associated block of code is executed
// The break and default keywords are optional, and will be described later in this chapter
// The example below uses the weekday number to calculate the weekday name:

// Example 

int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
// Outputs "Thursday" (day 4)

// A break can save a lot of execution time because it "ignores" the execution of all the rest of the code in the 
// switch block.

// The default keyword specifies some code to run if there is no case match:

// Example 

int day = 4;
switch (day) {
  case 6:
    cout << "Today is Saturday";
    break;
  case 7:
    cout << "Today is Sunday";
    break;
  default:
    cout << "Looking forward to the Weekend";
}
// Outputs "Looking forward to the Weekend"
