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