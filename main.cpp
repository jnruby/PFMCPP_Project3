/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
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
Thing 5) ER
5 properties:
    1) number of bandages in stock
    2) number of admitted patients
    3) time until next cleaning
    4) BPM on heartrate monitor
    5) number of doctors on duty
3 things it can do:
    1) stop bleeding
    2) intake patient
    3) clean for next shift
 */

/*
Thing 6)  research lab
5 properties:
    1) temperature of storage fridge
    2) time remaining in PCR cycle
    3) amount of petri dishes
    4) number of finished experiments this week
    5) percent full of hazmat bin
3 things it can do:
    1) make vaccine
    2) test sample for yeast
    3) dispose of pipettes
 */

/*
Thing 7) waiting room
5 properties:
    1) number of magazine subscriptions
    2) color temperature of mood lighting
    3) toner lever of photocopier
    4) number of cups left in water dispenser
    5) channel selected on TV
3 things it can do:
    1) issue insurance papers for signing
    2) admit patient for appoitment
    3) switch room to nightime ambience
 */

/*
Thing 8) operating room
5 properties:
    1) sharpness setting of scalpel sharpener (1-9)
    2) music volume
    3) O2 pressure in tank (psi)
    4) temperature of cauterization iron
    5) number of clean masks
3 things it can do:
    1) remove appendix from patient
    2) suture a head wound
    3) restart heart beating
 */

/*
Thing 9) cafeteria
5 properties:
    1) gallons of jello remaining
    2) temperature of hot plate
    3) percentage of clean vs dirty dishes
    4) pressure of CO2 at soda machine
    5) number of coffee mugs
3 things it can do:
    1) switch from lunch to dinner shift
    2) serve green beans
    3) clean dishes
 */

/*
Thing 10) hospital
5 properties:
    1) ER
    2) research lab
    3) waiting room
    4) operating room  
    5) cafeteria
3 things it can do:
    1) resuscitate patient
    2) administer anesthetic
    3) schedule new appointment
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
