 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
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



struct GuitarStore
{
    //amount of capos in stock
    int numCapos = 30;
    //number of electric basses sold
    int numBassesSold = 3;
    //number of ukeleles in stock
    int numUkeleles = 6;
    //number of hours worked by repairperson
    float weeklyRepairHours = 30.5f;
    //net sales of strings
    int netStringSales = 40;

    struct Guitar
    {
        std::string brand = "Cordoba";
        std::string model = "F7";
        float ageOfStrings = 2.6f;
        bool hasAStrap = false;
        bool inTune = true;

        void smash(bool repairable = false);
        void strum(int numberOfStrings = 6, bool usePick = false);
        int tremoloSpeed(int yearsOfPractice);
    };

    //appraise a guitar
    float assessGuitarValue( Guitar guitar );
    //rent a banjo
    float rentBanjo(bool isASchool);
    //restring guitar
    void restringGuitar( Guitar guitar );

    Guitar guitarOnLoan;
};

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
struct CoffeeMaker
{
    //weight of beans in hopper
    double gramsOfBeans = 120.66;
    //amount of filters loaded
    int numberOfFilters = 12;
    //amout of water in carafe
    double mlOfWater = 450.2;
    //temperature of thermostat in brewer
    double thermostatTemp = 97;
    //speed of the grinder
    int grinderSpeed = 4;

    //grind coffee beans
    void grindBeans(int grindSetting);
    //brew the coffee
    void brewCoffee(int coffeeTypeSelector, double brewVolume);
    //beep when coffee is brewed
    void beepAfterBrew(bool silentMode);
};
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
struct ComputerMonitor
{
    //percent brightness of the screen
    int brightness = 90;
    //percent volume of the internal speaker
    int volume = 0;
    //how many external monitors are connected
    int numberOfExternalConnections = 1;
    //time until automatically turn off 
    float timeUntilShutdown = 9.5f;
    //amount of saturation 
    int saturation = 55;

    //go to sleep
    void sleepMode(bool deepSleep);
    //turn on "movie" display mode
    void movieMode(int width, int height, bool rearProjection);
    //calibrate colors
    void calibrateColors(int colorThemeSetting);
};




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

struct RidingMower
{
    //which gear it is currently in
    int gearSelection = 3;
    //amount of gas
    float gasVolume = 4.3f;
    //height of grass blade
    float grassHeight = 3.4f;
    //speed of lawnmower
    int driveSpeed = 8;
    //number of cycles until blade change
    int bladeWearCycle = 30;

    struct Blade
    {
        std::string season = "Winter";
        std::string material = "steel";
        bool canBeSharpened = false;
        int sharpnessPercentage = 99;
        char recycleCode = 'D';

        int measureBladeRPM(int numberOfCuttingEdges);
        void selfDestruct();
        bool verifyBladeOrientation(bool bladeInstalled);
    };

    //activate emergency brake
    void emergencyBrake(bool deepSleep);
    //raise blade level
    void changeBladeLevel( Blade blade );
    //drive backwards
    void driveBackwards(int speed = 1);

    Blade extraSharpBlade;
};


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

struct ER
{
    //number of bandages in stock
    int numberBandages = 600;
    //number of admitted patients
    int numberPatients = 19;
    //time until next cleaning
    float timeUntilCleaning = 45.25f;
    //BPM on heartrate monitor
    int heartRateBPM = 72;
    //number of doctors on duty
    int doctorsOnDuty = 3;

    //stop bleeding
    void stopBleeding(std::string injuryType, int bloodLoss);
    //intake patient
    int admitPatient(bool atCapacity);
    //clean for next shift
};




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

struct ResearchLab
{
    //temperature of storage fridge
    double fridgeTemp = -14;
    //time remaining in PCR cycle
    double timeRemainingInPCR = 92;
    //amount of petri dishes
    int numberOfPetriDishes = 302;
    //number of finished experiments this week
    int finishedExperiments = 4;
    //percent full of hazmat bin
    int hazmatWasteLevel = 80;

    struct PetriDish
    {
        std::string growthMedium = "agar agar";
        bool containsHazardousMaterial = false;
        double overnightGrowthSize = 3;
        int dishSize = 5;
        bool smellsBad = true;

        void incubateDish(double incubatorTemp);
        void cleanDish(double autoclaveTemp);
        int countActiveCultures(std::string microscopeType);
    };

    //make vaccine
    void makeVaccine( PetriDish petridish );
    //test sample for yeast
    int countYeastCultures( PetriDish petridish );
    //dispose of pipettes
    void disposeOfPipette(bool requiresGloves);

    PetriDish highGrowthDish;
};


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

struct WaitingRoom
{
    //number of magazine subscriptions
    int numberOfSubscriptions = 12;
    //color temperature of mood lighting
    double lightingColorTemp = 4700;
    // toner lever of photocopier
    int tonerLevel = 40;
    //number of cups left in water dispenser
    int cupsInDispenser = 140;
    //channel selected on TV
    int tvChannel = 13;

    //issue insurance papers for signing
    void issueInsurancePapers(double repeatCustomerRewards);
    //admit patient for appoitment
    int admitPatient();
    //switch room to nightime ambience
    void changeToNightAmbience(bool subwooferConnected);
};


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

struct OperatingRoom
{
    //sharpness setting of scalpel sharpener (1-9)
    int scalpelSharpness = 9;
    //music volume
    float musicVolume = 32.44f;
    //O2 pressure in tank (psi)
    float o2Pressure = 42.2f;
    //temperature of cauterization iron
    float cauterizeTemp = 323.23f;
    //number of clean masks
    int numberOfCleanMasks = 34;

    //remove appendix from patient
    void removeAppendix();
    //suture a head wound
    void sutureHeadWound();
    //restart heart beating
    int restartHeart(float defribrillatorVoltage);
};

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
 struct Cafeteria
 {
    //gallons of jello remaining
    int gallonsOfJello = 6;
    //temperature of hot plate
    double hotPlateTemp = 66;
    //percentage of clean vs dirty dishes
    double cleanVsDirty = 23;
    //pressure of CO2 at soda machine
    double co2Psi = 24;
    //number of coffee mugs
    int numberOfCoffeeMugs = 42;

    //switch from lunch to dinner shift
    void lunchToDinner();
    //serve green beans
    void serveGreenBeans(bool dishAvailable, std::string secretIngredient = "cumin");
    //clean dishes
    void cleanDishes(double waterPressure);
 };
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
struct Hospital
{
    //ER
    ER er;
    //research lab
    ResearchLab researchLab;
    //waiting room
    WaitingRoom waitingRoom;
    //operating room
    OperatingRoom operatingRoom;
    //cafeteria
    Cafeteria cafeteria;

    //resuscitate patient
    void resuscitatePatient(int BPM = 12);
    //administer anesthetic
    void administerAnesthetic();
    //schedule new appointment
    double scheduleAppointment(bool hasID = true);
};

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
