# Data-Structures-Practice
This repository contains all the programs for 100 Days of Code. I will post the questions here and also include the link to the solution. **The programs are in C language.**

# Questions : 
## Day 1

**1.** Write a program to define stacks using arrays. 
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Stack%20array.c) for solution.
       
**2.** Write a program to convert and display the binary form of the number.
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Binary%20no.%20stack.c) for solution.
       
**3.** Write a program to test whether a string of opening and closing paranthesis is well formed or not.
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Balanced%20equation.c) for solution.

**4.** Write a program to determine if the input character string is of the form 'xCy' where x is a string consisting of letters 'A' and 'B' and y is the reverse of x. 
       eg. if x="ABBABA", y must be equal to "ABABBA". At each point you may read only the next character of the string. 
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/xCy.c) for solution.
       
**5.** Write a program to copy one stack into another. 
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Copy%20stack.c) for solution.
       
## Day 2

**1.** Write a program to define queues using arrays. 
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Queue%20Array.c) for solution.
       
**2.** Write a program to convert an infix expression to postfix expression.
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/postfix.c) for solution.
       
**3.** Write a program to convert an infix expression to prefix expression.
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/prefix.c) for solution.

**4.** Write a program to implement Circular Queue.
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/CircularQueue.c) for solution.
       
**5.** Write a program to implement Deque. 
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Deque.c) for solution.
       
## Day 3

**1.** Write a program to design a method for keeping two stacks within a single linear array $[spacesize] so that neither stack overflows until all the memory is used and an entire stack is never shifted to a differnt location within the array. Write C routines push1, push2, pop1,pop2 to manipulate the two stacks (Hint: Two stacks grow towards eachother) 
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/2%20Stack%20Array.c) for solution.
       
**2.** The Bashemin Parking garage contains a single lane that holds up ten cars. There is only a single entrance / exit to the garage at one end of the lane. If the customer arrives to pickup a car that isnot nearest to the exit, all cars blocking its path are moved out, then the customer's car is driven out and the other cars are restored in the same lines. Each input line contains an 'A' for arrival or 'D' for departure, and a license plate number. Cars are assumed to arrive and depart in the order specified by the input. The program should print a message whenever a car arrives or departs. When a car arrives, the message should specify whether ot not there is room for the car in the garage. If there is no room, the car leaves without entering the garage. When a car departs the message should include the nmber of times that the car was moved out of the garage to allow other cars to depart. 
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Bashemin%20Parking.c) for solution.
       
**3.** You're now a baseball game point recorder.

Given a list of strings, each string can be one of the 4 following types:

Integer (one round's score): Directly represents the number of points you get in this round.
"+" (one round's score): Represents that the points you get in this round are the sum of the last two valid round's points.
"D" (one round's score): Represents that the points you get in this round are the doubled data of the last valid round's points.
"C" (an operation, which isn't a round's score): Represents the last valid round's points you get were invalid and should be removed.

Each round's operation is permanent and could have an impact on the round before and the round after.
You need to return the sum of the points you could get in all the rounds.

Example 1:
       ```Input: ["5","2","C","D","+"]
       Output: 30
       Explanation: 
       Round 1: You could get 5 points. The sum is: 5.
       Round 2: You could get 2 points. The sum is: 7.
       Operation 1: The round 2's data was invalid. The sum is: 5.  
       Round 3: You could get 10 points (the round 2's data has been removed). The sum is: 15.
       Round 4: You could get 5 + 10 = 15 points. The sum is: 30.```
       
Example 2:
       ```Input: ["5","-2","4","C","D","9","+","+"]
       Output: 27
       Explanation: 
       Round 1: You could get 5 points. The sum is: 5.
       Round 2: You could get -2 points. The sum is: 3.
       Round 3: You could get 4 points. The sum is: 7.
       Operation 1: The round 3's data is invalid. The sum is: 3.  
       Round 4: You could get -4 points (the round 3's data has been removed). The sum is: -1.
       Round 5: You could get 9 points. The sum is: 8.
       Round 6: You could get -4 + 9 = 5 points. The sum is 13.
       Round 7: You could get 9 + 5 = 14 points. The sum is 27.```

Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Game%20Point%20Recorder.c) for solution.

## Day 4

**1.** Write a program for stack implementation of Linked List. 
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Stack_ll.c) for solution.
       
**2.** Write a program for queue implementation of Linked List.
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Queue_ll.c) for solution.
       
**3.** Write a program to implement Doubly Linked List.
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/DLL.c) for solution.

**4.** Write a program to implement Circular Linked List.
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Circular_ll.c) for solution.
       
**5.** Write a program to implement Circular Sorted Linked List. 
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/CSLL.c) for solution.
       
## Day 5

**1.** Write a program to implement Bubble Sort. 
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Bubble%20Sort.c) for solution.
       
**2.** Write a program to implement Insertion Sort.
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Insertion%20Sort.c) for solution.
       
**3.** Write a program to implement Merge Sort.
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Merge%20Sort.c) for solution.

**4.** Write a program to implement Min_Max.
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Min_Max.c) for solution.
       
**5.** Write a program to implement Modified Bubble Sort. 
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Modified%20Bubble%20Sort.c) for solution.

**6.** Write a program to implement Quick Sort.
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Quick%20Sort.c) for solution.
       
**7.** Write a program to implement Shaker Sort. 
       Click [**here**](https://github.com/Anagha-2000/Data-Structures-Practice/blob/master/Shaker%20Sort.c) for solution.
       
       
       


       
       






