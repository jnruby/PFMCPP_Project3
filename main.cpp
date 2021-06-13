/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
#if false
struct CarWash
{

};
#endif
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


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
