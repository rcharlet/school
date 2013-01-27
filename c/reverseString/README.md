
ReverseString
======

This is a simple, small demonstration program. This code will take a string
and reverse it. The string must be a legal C string that fits in memory 
boundaries and has a null termination.

The trick of the thing is that you move half-way through the string swapping
characters from the back to the front. Once you are halfway, you have done
enough swaps. For odd length strings, you don't need to swap the middle char
with anything.
