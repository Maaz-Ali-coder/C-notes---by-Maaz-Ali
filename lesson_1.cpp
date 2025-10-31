/* -------------------------- Lesson 1 --------------------------
Difference between code and comment:
------------------------------------
code: The actual instructions a programmer writes for the computer to execute. It must strictly follow C++ syntax rules (for cpp). This is the part that the compiler reads, translates, and turns into an executable program. If the syntax is wrong, the code will not compile.
comment: Human-readable text inside the source file that is completely ignored by the compiler. It is not executed.
Purpose: 1. Explain complex logic. 2. Document code functionality. 3. Temporarily disable code (commenting out). 4. Self-reminder for future work (TODOs).

comments types:
---------------
    * single line comment: //
    * multi line comment: /* and ends with * /
    * Inline (Code-Adjacent) Comments : A single-line comment placed after a statement on the same line.
    * comment code: we can comment code as well
    * comment out code: similarly we can comment out the code.
    * Self-Documentation 
*/

// this is single line comment

/*
I have wrote this line,
to demonstrate you that this is a multiline comment
*/


#include <iostream> // This is inline comment.

// code can be commented too. just place // before the code and it will be commented. If you want to comment out the code then remove the // and it will comment out it and will be used as a actual code.
// using namespace std; -> comment code

