//The three programming constructs
    //1. Sequential logic: by default. 
    //2. Conditional logic (if -else can also be called a decision)
    //3. Iteration logic (loops)
    //3. nesting and stacking

    //8 bits = 1 byte (a byte is a char or character in cpp)

//we have coding systems: ASCII, unicode, ebcdic (original coding system that ibm created)

//google "ascii wiki" to see what it stands for and see some examples

//when assigning a value for a variable if we do it twice then the first one will get replaced with the newest variable
    //numChars = 5
    //numChars = 3
    //If we want an output then the 5 will get ignored and the three will be the output



/* 5 MIN NOTES FROM LECTURE 8/25
Data Hierarchy

Bit 0 / 1 (false / true)
8 bits = 1 byte (char or character) (Ascii , Unicode, EBCDIC by IBM)
many bytes = field(s)
many fields = record
many records = file
many files = DataBase
many DBs = DataWarehouse (Massive online storage) (Knowledge Base)

What are the 3 basic Programming constructs
1. Sequential (step by step instructions)

2. Conditional (Selectional / Decisional) (IF-THEN-ELSE statement)

3. Iterational (Repetitional repeating) (looping)

A. Nesting
B. Stacking
*/





    /*  5 MIN NOTES FROM LECTURE 8/27
Convert Binary to Base 10
Convert Base 10 to Binary
Convert Hex to Base 10
Convert Hex to Binary
Convert Binary to Hex

173  =  1 * 10^2 + 7 * 10^1 + 3 * 10^0


100111 = 1 * 2^5 + 0 * 2^4 + 0 * 2^3 + 1 * 2^2 + 1 * 2^1 + 1 * 2^0 
			32   +  0      + 0       +    4    +   2  +       1
			
173    =  10101101
128
 45
 32
 13
  8
  5
  4
  1
  
0123456789ABCDEF     	0000	0
A = 10					0001	1
B = 11					0010	2
C = 12					0011	3
D = 13						...
E = 14					1010	10 A
F = 15					1011	11 B
							...
						1111	15 F

173 base 16 (or hex) =  1 * 16^2 + 7 * 16^1 + 3 * 16^0
256
112
  3
371

A1 = 161 = 10100001


1110 1001  = E9

0110 1001  = 69

1001	= 9  = 1*2^3 + 1 * 2^0
*/

//use cout << fixed << setprecision(numOfdecimals) << m_pi << endl; ///this will format our float number

//for constants use this format
    // const double NAME_OF_VARIABLE;

//use static_cast<double>(variable) to type cast