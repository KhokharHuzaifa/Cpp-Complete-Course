// As with compa operators, you can also test for true (1) or false (0) values with logical operators.

// Logical operators are used to determine the logic between variables or values

&& 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10	
|| 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4	
!	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)

if(10>5 && 5<10){
    // then do something...
}

if(10>5 || 5<10){
    // then do something...
}

if(!10>5){
    // then do something...
}
