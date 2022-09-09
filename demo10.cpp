#include <iostream>
int main()
{
    int x = 5 + 5;
    // Associativity
    /*
    Operator Description	Operator	Alternative
    Group 1 precedence, no associativity		
    Scope resolution	::	
    Group 2 precedence, left to right associativity		
    Member selection (object or pointer)	. or ->	
    Array subscript	[]	
    Function call	()	
    Postfix increment	++	
    Postfix decrement	--	
    Type name	typeid	
    Constant type conversion	const_cast	
    Dynamic type conversion	dynamic_cast	
    Reinterpreted type conversion	reinterpret_cast	
    Static type conversion	static_cast	
    Group 3 precedence, right to left associativity		
    Size of object or type	sizeof	
    Prefix increment	++	
    Prefix decrement	--	
    One's complement	~	compl
    Logical not	!	not
    Unary negation	-	
    Unary plus	+	
    Address-of	&	
    Indirection	*	
    Create object	new	
    Destroy object	delete	
    Cast	()	
    Group 4 precedence, left to right associativity		
    Pointer-to-member (objects or pointers)	.* or ->*	
    Group 5 precedence, left to right associativity		
    Multiplication	*	
    Division	/	
    Modulus	%	
    Group 6 precedence, left to right associativity		
    Addition	+	
    Subtraction	-	
    Group 7 precedence, left to right associativity		
    Left shift	<<	
    Right shift	>>	
    Group 8 precedence, left to right associativity		
    Less than	<	
    Greater than	>	
    Less than or equal to	<=	
    Greater than or equal to	>=	
    Group 9 precedence, left to right associativity		
    Equality	==	
    Inequality	!=	not_eq
    Group 10 precedence left to right associativity		
    Bitwise AND	&	bitand
    Group 11 precedence, left to right associativity		
    Bitwise exclusive OR	^	xor
    Group 12 precedence, left to right associativity		
    Bitwise inclusive OR	|	bitor
    Group 13 precedence, left to right associativity		
    Logical AND	&&	and
    Group 14 precedence, left to right associativity		
    Logical OR	||	or
    
    Group 15 precedence, right to left associativity		
    Conditional	? :	
    Group 16 precedence, right to left associativity		
    Assignment	=	
    Multiplication assignment	*=	
    Division assignment	/=	
    Modulus assignment	%=	
    Addition assignment	+=	
    Subtraction assignment	-=	
    Left-shift assignment	<<=	
    Right-shift assignment	>>=	
    Bitwise AND assignment	&=	and_eq
    Bitwise inclusive OR assignment	|=	or_eq
    Bitwise exclusive OR assignment	^=	xor_eq
    Group 17 precedence, right to left associativity		
    throw expression	throw	
    Group 18 precedence, left to right associativity		
    Comma	,
    */

    std::cout << (10 % 4) << std::endl; // Modulus operator
}