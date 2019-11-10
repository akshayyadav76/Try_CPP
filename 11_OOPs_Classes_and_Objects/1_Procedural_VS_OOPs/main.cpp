/*
                     **********Procedural Programming**********
    It has top down approch      
* Procedural programming is pretty much what we've been doing up to this point excpet vector and string 

The focus of procedural programming is the function we modularize our programs by creating many functions 
that each specify aprocess or action in the program.So procedural programs are basically a collection of functions 

In procedural programming we declare our data separate from the functions and then wherever we need to function to process 
or use our data we pass in the data to the function.
If you recall our  Section Function that's exactly what we did.


There's absolutely nothing wrong with procedural programming and in many cases you have to use it since
not all languages support object oriented features procedural programming is also fairly easy to learn

since we're pretty good at breaking up a task into subtasks which is exactly what procedural programming is all about.


However procedural programming has some limitations one of the limitations with procedural programming
is that the functions need to know about the structure of the data. This may not sound like a big deal.
But suppose we have a program with hundreds of functions and many of those functions expect a specific
data structure as an argument. If the structure or format for that data structure being passed around changes then this would affect
many many functions. These functions might even have to be modified to handle the new format of the data.
 
This could have a ripple effect in the program and the amount of effort needed to change and then test all of the updated functions 
could be substantial.

In future If you work on very very large projects so you will see the decision was made not to upgrade a data structure
because the changes needed in the rest of the program would be too expensive in programmer and testing time.


The real limitation is to procedural programming really begin to show as programs become larger and
more complex as procedural programs get larger and larger they become more difficult to understand since
the number of connections in the program becomes very hard to trace by hand.
This leads to a problem maintaining the software extending the program and finding and fixing bugs.


Also reusing functions and data structures that we wrote for one program in another program becomes
much more difficult since after time we end up with code whose behavior isn't that easy to visualize.
Finally the code becomes more fragile and easier to break.
That means that when we add new functionality or fix a bug.The chances of introducing another bug is high.
This happens more often than you would think.And it happens more in large procedural programs than 
it happens in large object oriented programs.

*/ 



/*  ******************Object Oriented Programming**************


Object oriented is all about modeling your software in terms of classes and objects.


These classes and objects modeled real world entities in your problem domain.
So if you're writing an application that allows users to store edit and manipulate images like a photos
on a PC then your classes might be album photo slide show location and so forth 

Why is this such a big deal and how is it different from procedural programming.
Because it's all about abstraction as our programs grow more and more complex.

The fact that objects contain data and operations that work on that data is called encapsulation and
it's an extension of the abstract data type in computer science.


Now the data and the operations are together in the class where they belong and not spread across many
functions each passing of receiving data encapsulation is another mechanism used by object oriented


Remember if you have a small program that won't be around for any significant amount of time maybe it's
an internal program that you use to automate something then Object-Oriented Programming might be overkill.
A simple procedural or scripting program may be perfectly appropriate generally object oriented programming
has a steep learning curve than procedural programming C++ in particular is considered one of the most
difficult programming languages to learn.
Also there are many Object-Oriented languages out there and while they all support classes and objects
and so forth the way that they support them can be quite different not only syntactically but also in
behavior.
It usually takes more upfront design time in order to write an object oriented program.
 
In fact large object oriented programs sometimes go through significant upfront design.
Finally Object-Oriented programs tend to be larger in size than non object oriented programs and can
sometimes be slower and more complex since are so much more going on behind the scenes.
This can be especially true with object oriented languages that use a virtual machine.
However the great news is that among Object-Oriented languages C++ is probably the most efficient language out there.

 */ 


/*   ******Concept of OOps**********
  
                (1) Class 
 * blueprint from which object created 
 * it is user define data type 
 * it cantain only variables  and functions 
 * can hide data and functions
 * prevides a public interface
  
  
 * example 
 * Account,Employee 
 * std::vector,std::string etc
  
  
           (2) Object
* created from class 
* representes a specific instance of a class
* can create many, many objects
* each has its own identity
* each can use the defined class methods 

* example Account objcets
* Freank's account is na instance of an Account 
* Jim's account is an instance of an account 
* Each has its own balance, can make deposits, withdrowals,etc.
     
  
 */ 






#include<iostream>

int main(){
    
    std::cout <<" hello world.... \n";
    return 0;
    
    }
