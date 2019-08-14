/*Registers are faster than memory to access, 
so the variables which are most frequently used in a C program 
can be put in registers using register keyword. 
The keyword register hints to compiler that a given variable 
can be put in a register. It’s compiler’s choice to put it in
 a register or not. Generally, compilers themselves do 
 optimizations and put the variables in register.

1) If you use & operator with a register variable then 
compiler may give an error or warning (depending upon the 
compiler you are using), because when we say a variable is a 
register, it may be stored in a register instead of memory 
and accessing address of a register is invalid. 

2) register keyword can be used with pointer variables. 
Obviously, a register can have address of a memory location. 

3) Register is a storage class, and C doesn’t allow multiple 
storage class specifiers for a variable. 
So, register can not be used with static . 

4) There is no limit on number of register variables in a C
 program, but the point is compiler may put some variables in
  register and some not.
  
  
  
  5) stackoverflow geeks says it's better to avoid using register storage class
   because it's doens't provide the benefits that the old books claim it does
   
   from stackoverflow :
   How did you time this? In practice, register usually does nothing. 
   It's a piece of cruft from when compiler technology was extremely primitive and compilers couldn't figure out 
   register allocation themselves. It was supposed to be a hint to allocate a register to that variable and
    was useful for variables used very frequently.
    Nowadays, most compilers simply ignore it and allocate registers according to their own algorithms.
   
   
   */

  unsigned int array[10];    

int main()
{
    register int n;
    unsigned int a = 1, b = 2, c;

    for (n = 0; n < 10; ++n){
        c = a + b;
        b = a;
        a = c;
        array[n] = c;
    }
}