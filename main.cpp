/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  
*/



/*
Thing 1) guitar store
5 properties:
    1)  amount of capos in stock
    2)  number of electric basses sold
    3)  number of ukeleles in stock
    4)  number of hours worked by repairperson
    5)  net sales of strings
3 things it can do:
    1)  appraise a guitar
    2)  rent a banjo
    3)  restring guitar
 */

/*
Thing 2) automatic coffee maker
5 properties:
    1)  weight of beans in hopper
    2)  amount of filters loaded
    3)  amout of water in carafe
    4)  temperature of thermostat in brewer
    5)  speed of the grinder
3 things it can do:
    1)  grind coffee beans
    2)  brew the coffee
    3)  beep when coffee is brewed
 */

/*
Thing 3) computer monitor
5 properties:
    1) percent brightness of the screen
    2) percent volume of the internal speaker
    3) how many external monitors are connected
    4) time until automatically turn off 
    5) amount of saturation 
3 things it can do:
    1) go to sleep
    2) turn on "movie" display mode
    3) calibrate colors 
 */

/*
Thing 4) riding lawnmower
5 properties:
    1)  which gear it is currently in
    2)  amount of gas
    3)  height of grass blade
    4)  speed of lawnmower
    5)  number of cycles until blade change
3 things it can do:
    1)  activate emergency brake
    2)  raise blade level
    3)  drive backwards
 */

/*
Thing 10)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */



/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
