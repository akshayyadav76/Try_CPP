// C++ has a rich set of Operators
 //  unary, binary ,ternary,


/********Operators************
 
         1. ***assignment***      
                        =
                          
         2. ***arithmetics***
          
                    * + addition
                    * - subtraction
                    * * multiplication
                    *  / divition
                    * % moduls  
                    * + - * / operators are overloded to work with multiple types such as int double etc
                    * % only for integers
                    
         3. increment/decrement
         
          *  increment ++
          * decrement --
         *  increments and decrements its operand by 1
         *  can we used with integers float pointers
         * prefix ++num
         * postfix num++
          don't overuse this operator
          alert never use it twice in a same variable in a same statement
         
         4. ***relational***
               
                * < less than
                * <= less than or equal to
                * > greater than 
                * >= greater than or equal to
                * <=> three way comparison (C++20)
                
         5. ***logical***
          
         * C++ has three logical operator
         * ! nagativ
         * &&  logical and
         * ||    logical or
          
         6. ***member access***
           
            * member access operators allow access to the members of their operands
            * -operator-                    -operator name-                -example-                       -description-
            *    []                              array subscript                    a[b]                    access the bth element of array a
            *    *                              pointer dereference              *a                 dereference the pointer a to access the object or function it refers to
            *    &                              address of                           &a                create a pointer that refers to the object or function a
            *    .                              member access                    a.b                access member  b of struct or union a
            *   ->                  member access through pointer        a->b             access member b of struct or union pointed to by a
           
           
        * 7.***Compound Assignment Operators***
         
        * Compound assignment operators modify the current value of a variable by performing an operation on it. 
        * They are equivalent to assigning the result of an operation to the first operand:
        *+=
        *-=
        * *=
        * /=
        * %=
        * >>=
        * <<=
        * &=
        * ^=
        * |=
         
          * 
          8.  ***Precedence of operators***
      
           * A single expression may have multiple operators. For example: x = 5 + 7 % 2;
           * In C++, the above expression always assigns 6 to variable x, because the % operator has a higher precedence than the + operator, 
           * and is always evaluated before.
           * From greatest to smallest priority, C++ operators are evaluated in the following order:
      
  Level	Precedence group	   Operator	                Description	                             Grouping
    1	           Scope	                   ::	                  scope qualifier	                             Left-to-right
    2	Postfix (unary)	           ++ --      	 postfix increment / decrement	             Left-to-right
                                              ()	           functional forms
                                              []	           subscript
                                             . ->            	member access
                                            
    3	Prefix (unary)	                ++ --	          prefix increment / decrement            	Right-to-left
                                            ~ !	             bitwise NOT / logical NOT
                                            + -	             unary prefix
                                            & *	             reference / dereference
                                         new delete	     allocation / deallocation
                                            sizeof	          parameter pack
                                          (type)	             C-style type-casting
   4	 Pointer-to-member	   .* ->*	                  access pointer	                          Left-to-right
   5	 Arithmetic: scaling	       * / %	            multiply, divide, modulo	                    Left-to-right
   6  	 Arithmetic: addition	     + -	              addition, subtraction                       	Left-to-right
   7	 Bitwise shift	                << >>	              shift left, shift right	                    Left-to-right
   8	Relational	                   < > <= >=	    comparison operators                   	Left-to-right
   9	  Equality                    	== !=              	equality / inequality	                     Left-to-right
  10	  And	                                   &	                    bitwise AND	                        Left-to-right
  11	Exclusive or	                      ^	                    bitwise XOR                       	Left-to-right
  12	Inclusive or	                      |                        	bitwise OR                          	Left-to-right
  13	 Conjunction	                      &&	                      logical AND	                       Left-to-right
  14	Disjunction	                      ||                         	logical OR                        Left-to-right
  15	Assignment-level expressions	= *= /= %= += -=
                                                  >>= <<= &= ^= |=	assignment / compound assignment	    Right-to-left
                                                  ?:	                        conditional operator
  16	Sequencing	                        ,	                       comma separator	                             Left-to-right

         *others

*/

#include<iostream>

int main(){
    
    std::cout <<" hello world.... \n";
    return 0;
    
    }
