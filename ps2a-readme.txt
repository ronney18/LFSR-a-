Name: Ronney Sanchez
Course: COMP2040 Computing 4
Assignment: PS2a
Date: 9/28/18

The representation I used for my register bits was a string of bits. I know that
a string is an array of characters with a NULL terminator at the end. I used a
string of bits with a maximum size of 32 as my seed and a tap integer as my tap 
bit location. I initialized the seed string and my tap position in my
constructor.

I selected this kind of bit register because it is easier for me to do the 
string manipulation with the "erase" and "push_back" function. 

I then did a step function where it does the XOR operation between
the left-most-bit and the tap bit. Since the seed is a string, I used the 
".erase" and ".push_back" function to shift the string to the left with the 
new bit at the end and return the XOR result back to the user.

I then did a generate function where it calls the step function k times and adds
the results k times.

In my Boost testing file, I am testing two additional cases for my bit register.
I am testing a small bit register and a 32 bit register with different tap 
position and different patterns of 0s and 1s. I am testing the expected output
for each step function calls to determing if my generated output matches
the expected output. I also do the same for both of them with the generate 
function I calculate the expected results on paper first, then I check with
Boost to see if my generated output matches of what I have on paper.

With my LFSR and Boost, it looks like my code is working properly without any 
errors on Boost. Boost is a very useful tool for unit testing. 
