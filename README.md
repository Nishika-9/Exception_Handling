Algorithm: 

A) Exception Handling

1. Start
2. Declare integer variables n and d to store the numerator and denominator, respectively.
3. Display "Enter numerator:"
4. Read an integer value into n using cin.
5. Display "Enter denominator:"
6. Read an integer value into d using cin.
7. Use a try-catch block for error handling:
a. Within the try block:
8. Check if d is equal to 0.
9. If d is 0, throw an exception with the message "Division by 0 is not possible."
10. If d is not 0, perform the division n/d and display the result.
b. In the catch block
11. Catch the exception as a pointer to a constant character string msg.
12. Display the error message msg, indicating that division by 0 is not possible.
13. End
