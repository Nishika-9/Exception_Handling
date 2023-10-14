Algorithm: Exception Handling

Start

Declare integer variables n and d to store the numerator and denominator, respectively.

Display "Enter numerator:"

Read an integer value into n using cin.

Display "Enter denominator:"

Read an integer value into d using cin.

Use a try-catch block for error handling:
a. Within the try block:

Check if d is equal to 0.
If d is 0, throw an exception with the message "Division by 0 is not possible."
If d is not 0, perform the division n/d and display the result.
b. In the catch block:

Catch the exception as a pointer to a constant character string msg.

Display the error message msg, indicating that division by 0 is not possible.

End
