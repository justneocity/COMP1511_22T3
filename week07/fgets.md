# How fgets() works:
A short explanation on fgets()!

## What is fgets()?
- fgets() reads from a stream and stores up to n characters into a character array
- In 1511 we are just focusing on stdin (standard input - which is your terminal)

## Arguments:
fgets(char \*str, int n, FILE\* stream)
1.	Character array 
2.	maximum number of characters to be read (including the final null-character)
    1.  This is usually length of the array
3.	Stream to read in from (stdin in this course)

## Return Type:
- If successfully read: returns string read
- If EOF reached (CTRL D on keyboard): returns NULL

## How does fgets() work? (for stdin)
1.	Type in characters in terminal
2.	Fgets stops scanning when: (whichever comes first)
    1.	(n-1) characters are read
    2.	the newline character is read
    3.	or the end-of-file is reached

Note: fgets() stores the characters, new line AND the null character in the char array.

## Example!
char str[100];

fgets(str, 100, stdin);
- reads characters into array names str
- can read max 100 characters
- reads from stdin (standard input)
