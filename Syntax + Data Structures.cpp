// Syntax + Data Structures.cpp : This file contains the 'main' function. Program execution begins and ends there.

//C++ SYNTAX PRACTICE BY RENZ CARILLO, ROADMAP WAS PULLED OF FROM LINKEDIN LEARNING (C++ ESSENTIAL TRAINING), SIDE LESSON WERE FROM YOUTUBE VIDEOS

#include <iostream>
#include <string>
#include <typeinfo>
#include <stdio.h>

using std::string;

//LESSON 2.4 - IDENTIFIER
int //DATATYPE
a //IDENTIFIER
= 1; //VALUE

//THIS COULD ALSO BE TYPED IN A SINGLE LINE
//int a = 1;

//ASSIGNMENT IS NOT ALLOWED IN GLOBAL, NOTHING IS EXECUTED ON GLOBAL THUS INITIALIZATION ARE THE ONLY ONES ALLOWED
/*int a;
a = 5*/

//LESSON 2.5 - DEFINING VARIABLES
//int bbbbb; //DECLARATION
int b = 2; //INITIALIZATION

//LESSON 2.6 - POINTERS
//IT IS BEST PRACTICE TO ADD p AT THE FRONT OF THE NAME OF POINTER VARIABLE e.g. pVariable
int* c = &b; //c NOW HOLDS THE MEMORY ADDRESS OF b

//THIS COULD ALSO BE TYPED AS:
/* 
int* c;
c = &b; //YOU DON'T HAVE TO TYPE THE POINTER OPERATOR AGAIN AT INITIALIZATION
*/

//*c = 3; //THE POINTER HAS BEEN DEREFERENCED AND NOW THE VALUE OF c AND b IS 3, NO ASSIGNMENT IS ALLOWED ON GLOBAL SCOPE

//LESSON 2.7 - REFERENCES
//YOU WOULD HAVE THE SAME MEMORY ADDRESS WITH REFERENCE
int d = 4;
int& e = d; //e IS NOW AN ALIAS OF D, EVERY CHANGE YOU MADE ON e WOULD ALSO OCCUR TO d

//LESSON 2.8 - PRIMITIVE ARRAYS
//ARRAY COULD BE ANY DATA TYPE, IT COULD BE int, float, double, char, etc.
void sampledArray() {
    int dArray[2]; //ARRAY COULD BE DECLARED IN A MULTI LINE AND ALSO A SINGLE JUST LIKE BELOW
    dArray[0] = 1; //1ST INDEX ELEMENT WOULD ALWAYS START TO 0 WHEN SELECTING IT
    dArray[1] = 2; //2ND INDEX ELEMENT WOULD BE 1 WHEN SELECTING IT
    int nArray[] = { 1,2,3 }; //ARRAY WITH BLANK NUMBER INSIDE '[]' IS POSSIBLE
    int array[4] = { 1,2,3,4 }; //ARRAY COULD ALWAYS BE ACCESSED AS IF IT WERE A POINTER
    *array = 1; //THIS IS EQUAL TO THE SYNTAX BELOW
    array[0] = 1; //THIS IS EQUAL TO THE SYNTAX ABOVE
    int* f = array; //THIS IS A POINTER, YOU DONT NEED '&' WHEN ASSIGNING A POINTER TO AN ARRAY |WHEN SELECTING THE WHOLE ARRAY LIKE THIS, IT WOULD MEAN SELECTING THE 1ST INDEX ELEMENT
        * f = 2; //FIRST ELEMENT OF THE array WOULD CHANGE INTO 2, SINCE THIS POINTER POINTS TO THE 1ST INDEX ELEMENT
    f = f + 1; //IT WILL MOVE TO THE NEXT INDEX OF ARRAY, THIS f POINTER NOW POINTS TO 2ND INDEX
    f = f + 2; //THIS f POINTER NOW POINTS TO THE 3RD INDEX
    *(f + 3) = 5; //WE ARE GETTING THE ADDRES OF 4TH INDEX THEN DEREFERENCING IT THUS ASSIGNING THE 4TH INDEX A VALUE OF 5
}
//LESSON 2.9 - PRIMITIVE STRING
//STRING IS JUST AN ARRAY OF CHARACTERS
char sampleTextString[] = "this is a string"; //THE " ", IS A STRING LITERAL IT AUTOMATICALLY ADDS NULL OPERATOR 
char sampleTextString1[] = { 's','t','r','i','n','g','\0' }; //THIS COULD BY TYPED JUST LIKE A NORMAL ARRAY BUT THEN YOU HAVE TO ADD 0 AT THE END AND IT'S KINDA HASSLE TO DO IT THIS WAY

//LESSON 2.10 - CONDITIONALS
//POSSIBLE COMBINATIONS: IF | IF , ELSE IF | IF, ELSE | IF, ELSE IF, ELSE | IF, ELSE IF, ELSE IF
void sampleConditionals() {
    int a = 1, b = 2, c = 0;
    if (a < b) { //IF CONDITION IS TRUE 
        c = 1;  //THEN DO THIS
    }
    else if (a > b) { //IF ABOVE CONDITION IS NOT TRUE BUT THIS IS TRUE
        c = 2;       //THEN DO THIS
    }
    else {      //IF NOTHING OF THE CONDITION ABOVE IS TRUE
        c = 3;  //THEN DO THIS
    }
}

//LESSON 2.11 - BRANCHING CONDITIONALS (SWITCH STATEMENT)
void sampleSwitch() {
    int number = 0;
    const int equalTo1 = 1; //SWITCH CASES NEEDS TO BE CONSTANT 
    const int equalTo2 = 2;
    const int equalTo3 = 3;

    switch (number) {
    case equalTo1:  //IF number IS EQUAL TO equalTo1 | (number == equalTo1) | THIS IS EQUIVALENT TO WRITING case 1:
        number = 1; //THEN DO THIS 
        std::cout << "value of number is" << number << std::endl; //AND THIS
        break; //ADD BREAK STATEMENT SO IF THE CONDITION ABOVE IS TRUE, IT WILL STOP LOOPING
    case equalTo2:  //IF number IS EQUAL TO equalTo2 | (number == equalTo2)
        number = 2; //THEN DO THIS 
        std::cout << "value of number is" << number << std::endl; //AND THIS
        break; //ADD BREAK STATEMENT SO IF THE CONDITION ABOVE IS TRUE, IT WILL STOP LOOPING
    case equalTo3:  //IF number IS EQUAL TO equalTo2 | (number == equalTo3)
        number = 3; //THEN DO THIS 
        std::cout << "value of number is" << number << std::endl; //AND THIS
        break; //ADD BREAK STATEMENT SO IF THE CONDITION ABOVE IS TRUE, IT WILL STOP LOOPING
    default: //THIS IS THE EQUIVALENCE OF ELSE IN IF STATEMENTS
        number = 4;
        std::cout << "nothing else is true, this is the default response" << std::endl;
    }
}

//LESSON 2.12 - LOOPING WITH WHILE AND DO
void sampleWhileAndDoLoop() { //WHILE LOOP IS WHEN YOU DO NOT CLEARLY KNOW THE LIMITS (FUTURE)
    int a = 0;
    int b = 0;
    int maxCount = 5;

    while (a < maxCount) { //THE LOOP WOULD NEVER STOP UNTIL IT BECOMES FALSE
        if (a == 3) { break; } //IF a ACHIEVED A VALUE OF 3, break THE LOOP
        if (a == 1) { 
            a = a + 1;
            continue;
            }//IF a ACHIEVED A VALUE OF 1, SKIP THE 1
            
        std::cout << "value of a is " << a << std::endl;
        a = a + 1; //THIS IS EQUAL TO a++
    }
    //do-while EXECUTES FIRST BEFORE STARTING THE WHILE LOOP, THIS IS THE MAIN DIFF WITH while LOOP
    do {
        b++; //THIS IS EQUAL TO b = b + 1;
        std::cout << "value of b is " << b << std::endl;
    } while (b < maxCount);
}

//LESSON 2.13 - ITERATING WITH FOR
void sampleForLoop() { //FOR LOOP IS USED AS ITERATION WHEN YOU CLEARLY KNOW THE LIMITS (PAST)
    for (int i = 0; i <= 10; i++) { //for ((initialization);(condition);(increment))
        std::cout << "value of i is " << i << std::endl; //DO THIS UNTIL THE CONDITION BECOMES FALSE
    }
    char stringAB[] = "string";
    int maxElements = sizeof(stringAB) / sizeof(*stringAB); //COUNT HOW MANY INDEX ELEMENTS INSIDE THE ARRAY
    for (int i = 0;i <= maxElements; i++) { //LOOP UNTIL NUMBER OF MAX ELEMENTS HAS BEEN REACHED
        std::cout << "value of string is " << stringAB[i] << std::endl; //DO THIS UNTIL CONDITION IS FALSE
    }
}

//LESSON 2.14 - RANGE BASED FOR LOOP - NOT RECOMMENDABLE, NOT GOOD ANYWAYS
void sampleRangeBasedForLoop() {
    const int arraySize = 5;
    double array[arraySize] = { 1.1,2.2,3.3,4.4,5.5 };
    for (int i = 0; i < arraySize; i++) {
        std::cout << array[i] << std::endl;
    }
    //THE SAMPLE FOR LOOP ABOVE WOULD HAVE THE SAME EQUIVALENCE WITH THE RANGE BASED FOR LOOP BELOW
    //RANGE BASED FOR LOOP IS JUST LIKE A SHORTEN WAY TO DO THE SAME THING ABOVE, USE IT RARELY
    for (double f : array) {
        std::cout << f << std::endl;
    }
}

    //LESSON 2.15 - STRUCTURES
    struct sampleStruct { //THIS IS DEFAULT PUBLIC, THIS IS THE ONLY DIFFERENCE IT HAS COMPARED TO CLASS
        int a;
        int b;
        int c;
    }; //YOU COULD NAME THE OBJECT HERE AT THE LAST BRACKET e.g. '}s1;'
    void main0() {
        sampleStruct s1;
        s1.a = 1; //INITIALIZING A VALUE ON STRUCT sampleStruct
        s1.b = 2; //INITIALIZING A VALUE ON STRUCT sampleStruct
        s1.c = 3; //INITIALIZING A VALUE ON STRUCT sampleStruct
    }

    //LESSON 2.16 - FUNCTIONS
    //FUNCTION IS USED TO DO SOMETHING OR RETURN SOMETHING OR BOTH
    void sampleFunctionWithoutParameters() { //FUNCTION COULD STILL HAVE PARAMETERS EVEN IF IT IS VOID
        std::cout << "this is a sample function" << std::endl;
    }
    double sampleFunctionWithParameters(int& a, double* b) {
        double result;
        result = a + (*b); //INCASE YOU'RE WONDERING WHY B HAS '*', IT'S BECAUSE I DEREFERENCED IT SINCE IT IS A POINTER VARIABLE
        return (result);
    }

    //LESSON 2.17 - CLASSES
    class sampleClass { //CLASS IS DEFAULT PRIVATE
        int a = 1; //THIS IS DEFAULT PRIVATE SINCE THIS IS A CLASS, THIS VARIABLE IS ONLY ACCESSIBLE WITHIN THE CLASS
    public: //ANYTHING BELOW THESE WOULD BE ACCESSIBLE TO EVERYONE
        int incrementOne() {
            int result;
            result = a + 1;
            return (result);
        }
    };

    //LESSON 2.18 - USING STDOUT
    void sampleSTDCout() {
        //cout IS BASICALLY USED TO PRINT MESSAGE, IT IS THE SAME WITH printf AND puts
        std::cout << "print" << std::endl; //THIS IS EQUAL TO BELOW
        puts("print"); //THIS IS EQUAL TO ABOVE
        printf("print"); //THIS IS EQUAL TO ABOVE
    }

    //LESSON 2.19 - CHALLENGE (COUNT ELEMENTS) - HERE IS MY ANSWER
    const char string0123[] = "This is a null-terminated string.";

    void main1() {
        int count = 0;
        for (;string0123[count];count++) { //ANY STRING VALUE IS TRUE BEFORE IT REACHES NULL OPERATOR | 0,NULL,FALSE ARE CONSIDERED FALSE
            ; //DO NOTHING
        }
        printf("The number of characters is: %d\n", count); //PRINT THE AMOUNT OF COUNT

        //NOTE: SERIOUSLY, THIS IS NON-SENSE YOU COULD JUST sizeof(string)/sizeof(string[0]) TO COUNT THE NO. OF ELEMENTS INSIDE THE ARRAY, NO NEED FOR LOOP
    }

    //LESSON 3.2 - 3.3 - INTEGER TYPES AND INTEGER SIZES
    void integerTypes() {
        char a = 1; //-128 to 127 or 0 to 255
        short int b = 12; //THIS COULD ALSO BE WRITTEN AS 'short' 
        int c = 123; //-32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
        long int d = 1234; //-9223372036854775808 to 9223372036854775807
        long long int e = 12345;
        //THEY ALSO HAVE UNSIGNED EQUIVALENT | UNSIGNED MEANS POSITIVE DIGITS ONLY
        unsigned char aa = 1; //0 to 255
        unsigned short int bb = 12; //0 to 65,535
        unsigned int cc = 123; //0 to 65,535 or 0 to 4,294,967,295
        unsigned long int dd = 1234; //0 to 18446744073709551615
        unsigned long long int ee = 12345;
    }

    //LESSON 3.5 - FLOATING POINT TYPES
    void sampleFloatAndDouble() {
        //FLOAT AND DOUBLE JUST HAVE DECIMAL POINTS, THAT'S IT
        double f= 1.1;
        double d= 1.2345;
        long double dd= 1.2345678;
        //THESE HAS NO UNSIGNED DATATYPES
    }

    //LESSON 3.6 - CHARACTERS AND STRINGS
    void sampleCharAndStrings() {
        const char* sample = "this is a string"; //THIS IS THE SAME JUST LIKE THE INITIALIZATION FROM BELOW | DON'T USE THIS, IT IS CONFUSING
        const char* sample1 = "this is a string"; //AGAIN THIS IS THE SAME AS ABOVE AND BELOW BUT THIS ONE WOULD PRODUCE SEGMENTATION FAULT WHEN YOU CHANGE THE VALUE OF THE ARRAY | MUST ALWAYS BE A CONST
        char sample2[] = "this is a string1"; //THIS IS THE SAME JUST LIKE THE INITIALIZATION FROM ABOVE | THIS IS THE BEST CHOICE AMONG THE 3, BUT THE BEST USE IS THE ONE BELOW
        //TO USE STRING 
        //STEP 1: ADD '#include<string>' AT THE HEADER
        //STEP 2: ADD 'using std::string;' AT THE HEADER | THIS IS OPTIONAL BUT USE THIS FOR SIMPLICITY
        string sample3 = "this is again a string"; //USE THIS!! DO NOT USE THE INITIALIZATION FROM ABOVE
    }

    //LESSON 3.7 - CHARACTER ESCAPE SEQUENCES
    void sampleCharacterEscapeSequences() {
        std::cout << "\n , \' , \" " << std::endl; //TO USE ' or " JUST ADD A BACKSLASH '\'
    }

    //LESSON 3.8 - QUALIFIERS
    void sampleQualifiers() {
        static int a = 1; //THE QUALIFIER IS STATIC, IT RETAINS THE VALUE LIKE A GLOBAL VARIABLE EXCEPT ITS LOCAL
        const int b = 1; //THE QUALIFIER IS CONST, THE VALUE CANNOT BE CHANGED ANYMORE
        //THERE ARE A LOT MORE BUT THEY'RE NOT IMPORTANT ANYWAYS, ATLEAST FOR NOW
    }

    //LESSON 3.9 - REFERENCES
    //PRACTICAL USE OF REFERENCE BELOW:
    void sampleReferences(int& a) { //THIS IS LIKE int &a = i | VARIABLE a IS NOW AN ALIAS OF i
        a = 2; //EVERY CHANGES MADE IN VARIABLE a WOULD ALSO OCCUR to VARIABLE i SINCE THEY HAVE THE SAME MEMORY ADDRESS
    }
    //THIS samplePointers HAS THE SAME EQUIVALENCE AS ABOVE
    void samplePointers(int* a) {
        *a = 2; //DEREFERENCING IT
    }

    void main2() {
        int i = 1;
        sampleReferences(i); //THIS IS FOR REFERENCES
        samplePointers(&i); //THIS IS FOR POINTERS
        std::cout << "value i is now: " << i << std::endl; //THIS WOULD PRINT 2 SINCE THE VALUE OF i HAS BEEN CHANGED WHEN THE sampleReferences() HAS BEEN CALLED
    }

    //LESSON 3.10 - STRUCTURED DATA
    struct sampleStructCoder { //EVERYTHING INSIDE ARE DEFAULT PUBLIC UNLESS YOU STATE 'private:'
        int age;
        string name;
        double favNumber;

        sampleStructCoder(int a,string b,double c) {
            age = a;
            name = b;
            favNumber = c;
        }
    };

    void main3() {
        //sampleStructCoder Coder; //THIS COULD BE INITIALIZED LIKE THIS OR BELOW
        sampleStructCoder Coder = { 20,
        "EstarabusbuspapaW",
        3.15 }; //THIS COULD BE INITIALIZED LIKE THIS BUT BELOW IS MUCH BETTER, WITH THIS INITIALIZATION WE'RE CALLING THE PARAMETERIZED CONSTRUCTOR
        Coder.age = 19;
        Coder.name = "Estarabusbuspapao";
        Coder.favNumber = 3.14;
        std::cout << Coder.name << " is " << Coder.age << " years old, His favorite number is " << Coder.favNumber << std::endl;

        sampleStructCoder* pointerCoder = &Coder; //POINTER TO ANOTHER STRUCTURE
        pointerCoder->age = 21; //ADD '->' TO DEREFERENCE STRUCT POINTERS
        pointerCoder->name = "Wapapsubsubaratse"; //ADD '->' TO DEREFERENCE STRUCT POINTERS
        pointerCoder->favNumber = 6.9; //ADD '->' TO DEREFERENCE STRUCT POINTERS
        std::cout << pointerCoder->name << " is " << pointerCoder->age << " years old, His favorite number is " << pointerCoder->favNumber << std::endl;

    }

    //LESSON 3.12 - ENUMERATIONS
    //WITH ENUMS,STRUCT,CLASS,UNIONS - YOU ARE LIKE CREATING YOUR OWN DATATYPE
    enum class sampleEnums { //THIS COULD ONLY CONTAIN INTEGERS
        A, //THE VALUE OF THIS IS AUTOMATICALLY ASSIGNED TO 0 IF NOT SPECIFIED
        B, //THE VALUE WOULD BE INCREMENTED FROM THE PREVIOUS VALUE IF IT IS NOT SPECIFIED | VALUE OF THIS IS 1
        C = 5, //VALUE OF THIS IS 5
        D, //THE VALUE WOULD BE INCREMENTED FROM THE PREVIOUS VALUE IF IT IS NOT SPECIFIED | VALUE OF THIS IS 6
        E //VALUE OF THIS IS 7
    };



    void main4() {
        sampleEnums samEnums = sampleEnums::A; //BEST PRACTICE TO USE ENUM CLASS AT ALL TIMES
    }


    //LESSON 3.13 - UNIONS
    //UNIONS WILL STORE EVERY VARIABLE IN THE SAME MEMORY ADDRESS, MUCH LIKE REFERENCE, EXCEPT YOU COULD USE DIFFERENT DATA TYPES
    union sampleUnions {
        int a; //4 BYTES OR 32 BITS
        char b; //1 BYTE OR 8 BITS
        double c; //SINCE THIS HAS THE HIGHEST AMOUNT OF BYTES, EVERYTHING WOULD BE STORED IN HERE | 8 BYTES
    };

    void main5() {
        sampleUnions unionAddress; //ASSIGNING sampleUnions TO AN OBJECT WHICH IS unionAddress
        unionAddress.a = 4; //VARIABLE b, AND c WOULD CHANGE ITS VALUE TO ALSO 4 SINCE THEY FUNCTION LIKE A REFERENCE, ANY CHANGES MADE ON ANY ONE OF THE UNION CHANGED EVERY OTEHR VARIABLE WITHIN THE UNION
    }

    //LESSON 3.14 - DEFINING WITH TYPEDEF
    //THIS IS TO CREATE YOUR OWN NAME FOR THE EXISTING DATATYPE
    void sampleTypedef() {
        typedef int integerger; //I HAVE RENAMED THE int DATATYPE INTO integerger
        integerger a = 1;
        std::cout << "value of a is " << a << std::endl;
    }

    //LESSON 3.15 - VOID TYPE
    //void SIMPLY MEANS TO RETURN NOTHING, int RETURNS INTEGER VALUE
    void sampleVoid(void) { //YOU COULD INPUT void INSIDE A PARAMETER FUNCTION BUT IT'S NOT IMPORTANT THO, IT'S BETTER TO LEAVE IT BLANK BUT I DIDN'T LEAVED IT BLANK TO ILLUSTRATE
        std::cout << "this is a void function" << std::endl;
        //return 3; //THIS IS ILLEGAL, YOU CAN'T DO THIS
    }

    //LESSON 3.16 - AUTO TYPE
    void sampleAuto() {
        auto a = 1; //SINCE THE VALUE IS 1, THE DATATYPE WOULD AUTOMATICALLY BE AN INTEGER
        auto b = 1.23; //SINCE THE VALUE HAS DECIMAL POINTS, THE DATATYPE WOULD AUTOMATICALLY BE FLOAT OR DOUBLE IDK THIS IS NOT IMPORTANT ANYWAYS
        auto c = true; //SINCE THE VALUE HAS TRUE/FALSE, THE DATATYPE WOULD AUTOMATICALLY BE BOOLEAN
    }

    //LESSON 3.17 - UNAMBIGUOUS NULL POINTER CONSTANT
    void sampleNullPointer() {
        //ASSIGNING POINTER WITH NULL VALUES IS A GOOD PRACTICE WHEN YOU STILL DON'T KNOW WHAT TO ASSIGN INTO IT
        int* pointerSample = NULL; //
    }

    //LESSON 3.18 - (CHALLENGE) - A LIBRARY CARD STRUCTURE
    struct catalog {
        string Title;
        //char Title[]; //YOU CAN'T DO THIS, IF YOU'RE GONNA ONLY INITIALIZE IWTHOUT ANY VALUES YOU MUST SET A SIZE OF THE ARRAY
        string Author;
        string Publisher;
        string Subject;
        int ISBN{}; //IF NO CONSTRUCTOR IS GOING TO INITIALIZE IT, ALWAYS ADD '{}'
        double DeweyDecimal{};
        string YearPublished;
        string YearAcquired;
        int QtyInStock{};

    }catalogCard;

    void main6() {
        catalogCard.Title = "C++ The Book";
        catalogCard.Author = "Joe Biden";
        catalogCard.Publisher = "Donald Trump";
        catalogCard.Subject = "C++";
        catalogCard.ISBN = 123456;
        catalogCard.DeweyDecimal = 123.456;
        catalogCard.YearPublished = "January 05 1927";
        catalogCard.YearAcquired = "March 09 1942";
        catalogCard.QtyInStock = 63;
        std::cout << "The Title of the book is " << catalogCard.Title << std::endl;
        std::cout << "The Author of the book is " << catalogCard.Author << std::endl;
        //TINATAMAD NAKONG I-TYPE LAHAT
    }

    //LESSON 4.1 - 4.3 - COMMON OPERATORS | COMPOUND ASSIGNMENT OPERATORS | INCREMENT AND DECREMENT OPERATORS
    void sampleCommonOperators() {
        int a = 12; //THIS ONE USES COPY OPERATOR '=' | THIS IS USE TO ASSIGN VALUES
        int b = 24;
        int c = a + b; //THIS ONE USES ADDITION OPERATOR '+' | THIS IS USED FOR ADDITION
        // - SUBRATRACTION, * MULTIPLICATION, / DIVISION, % REMAINDER
    }

    void sampleCompoundAssignmentOperators() {
        int a = 1;
        int b = 2;
        b += a; //THIS MEANS b = b + a; | THE ANSWER WOULD BE b = 3;
        // YOU COULD ALSO TRY DIFFERENT COMMON OPERATORS e.g. -= , *= , /=, %=
    }

    void sampleIncrementAndDecrementOperators() {
        int a = 1;
        int b = 2;
        // a++ | DO NOTHING YET, BUT ADD + 1 AT NEXT, ++a | ADD THE + 1 NOW
        std::cout << "value of a is " << a++ << std::endl; //THIS WOULD PRINT 1 | THIS MEANS PRINT FIRST BEFORE ADDING 1
        std::cout << "value of a is " << a++ << std::endl; //THIS WOULD PRINT 2 SINCE 1 WAS ALREADY ADDED FROM THE PREVIOUS STATEMENT
        std::cout << "value of b is " << ++b << std::endl; //THIS WOULD PRINT 3 | THIS MEANS PRETTY MUCH THE SAME THINGS EXCEPT IT ADDS 1 FIRST BEFORE IT PRINTS
    }

    //LESSON 4.4 - COMPARISON (RELATIONAL) OPERATORS
    void sampleComparisonOperators() {
        int a = 1;
        int b = 2;
        double c = 1234.56;
        char d = 'a';
        if (a > b) { //THIS IS '>' GREATER THAN OPERATOR | IF a IS GREATER THAN b 
            d = 'a';                                    //THEN EXECUTE THIS LINE
        }
        else if (a < b) { //THIS IS '<' LESS THAN OPERATOR
            d = 'b';
        }
        else if (a == b) { //THIS IS '==' EQUAL TO OPERATOR | IF a IS EQUAL TO b THEN EXECUTE BELOW
            d = 'c';
        }
        else if (a != b) { //THIS IS '!=' NOT EQUAL TO OPERATOR | IF a IS NOT EQUAL TO b THEN EXECUTE BELOW
            d = 'd';
        }
        //YOU COULD ALSO DO <= | LESS THAN OR EQUAL TO, >= | GREATER THAN OR EQUAL TO, etc.
    }

    //LESSON 4.5 - LOGICAL OPERATORS
    void sampleLogicalOperators() {
        int a = 1; //THIS IS EQUALS TO TRUE SINCE IT IS NON ZERO
        bool b = false; //THIS IS OBVIOUSLY A FALSE
        int c = 1;

        if (a && b) { //IF a AND b IS TRUE EXECUTE BELOW | a IS TRUE SINCE IT HAS VALUE, b IS FALSE SO THIS WILL NOT EXECUTE
            c = 2;
        }
        else if (a || b) { //IF a OR b IS TRUE THEN EXECUTE BELOW | THIS WILL EXECUTE SINCE ONE OF THEM IS TRUE
            c = 3;
        }
        else if (a && !b) { //IF a AND not b (OPPOSITE OF B) THEN EXECUTE BELOW | IF ABOVE WEREN'T TRUE THEN THIS WOULD EXECUTE SINCE BOTH STATEMENTS ARE TRUE
            c = 4;
        }
    }

    //LESSON 4.6 - BITWISE OPERATORS 
    void sampleBitwise() {
        unsigned int a = 10; //BINARY VALUE: 01010
        unsigned int b = 20; //BINARY VALUE: 10100
        unsigned long c = a | b; //GET THE BINARY VALUE OF a AND b THEN  | SINCE THIS IS AN OR '|', ITS BINARY VALUE WOULD BE: 11110, WHICH EQUATES TO 30
        //&(AND) - BOTH VALUES HAS TO BE 1 TO GET OUTPUT 1 IN BINARY | e.g. c = a & b | BINARY VALUE IS 00000 WHICH IS 0
        //^(XOR) - ONLY ONE OF THE OUTPUT MUST BE 1 TO GET OUTPUT OF 1 IN BINARY | e.g. c = a ^ b | BINARY VALUE IS 11110 WHICH WOULD EQUATE TO 30
        //!(NOT) - THIS IS ONLY APPLICABLE TO ONE OF THE VALUE, JUST FLIP THE NUMBER TO OPPOSITE, IF 0 THEN MAKE IT 1, VICE VERSA | e.g. '!a & b' | BINARY VALUE WOULD BE 11110 WHICH WOULD EQUATE TO 30

        //RIGHT AND LEFT SHIFT OPERATOR
        int x = 5; //BINARY: 00000101
        int y = 100; //BINARY: 01100100
        x = x << 1; //SHIFT THE VALUES TO THE LEFT WHICH WOULD RESULT BINARY INTO : 00001010 WHICH IS EQUAL TO 10
        x = x << 1; //x HAS BEEN SHIFTED AGAIN WHICH WOULD RESULT BINARY INTO: 00010100 WHICH IS EQUAL TO 20 *DO YOU SEE THE PATTERN?*
        y = y >> 2; //BINARY CODE WOULD SHIFT TO RIGHT: 00011001 WHICH IS EQUAL TO = 25 *AGAIN, DO YOU SEE THE PATTERN?*
    }

    //LESSON 4.7 - TERNARY CONDITIONAL OPERATOR
    //DON'T USE THIS IT'S UNREADABLE FOR SOME, JUST USE IF STATEMENTS
    void sampleTernaryConditional() {
        int a = 1;
        int b = 2;
        int c, d;
        //IF A > B THEN C = 1, ELSE C = 2
        c = a > b ? 1 : 2;
        //HOW TO ADD ELSE IF:
        //IF A > B THEN D = 1, ELSE IF A == B THEN D = 2, ELSE D = 3
        d = a > b ? 1 : (a == b ? 2 : 3);
    }

    //LESSON 4.9 - TYPECASTING
    void sampleTypeCasting() {
        double abc = 1.234;
        int b;
        b = (int)abc; //a IS A DOUBLE BUT WE'RE EXPLICITLY CONVERTING IT INTO INT WITH TYPECASTING
    }

    //LESSON 4.10 - USING SIZEOF
    void sampleSizeOf() {
        //THIS IS TO GET THE NUMBER OF BYTES A CERTAIN DATATYPE HOLDS
        int a[] = { 1,2,3,4,5,6 };
        double b = 1234.545343;
        int c = sizeof(a) / sizeof(a[0]); //WE ARE GETTING THE OVERALL BYTES OF THE ARRAY THEN DIVIDING IT TO 1 OF ITS DATATYPE BYTE VALUE TO GET THE TOTAL AMOUNT OF ELEMENTS INSIDE THE INDEX
        int d = sizeof(b); //
        printf("the byte size of variable b is %d", d);
    }

    //LESSON 4.11 - USING TYPEID
    //USED TO GET THE DATATYPE OF A VARIABLE | USED FOR COMPARING TWO VARIABLES IF THEY HAD THE SAME DATATYPE
    //STEP 1: ADD #include<typeinfo> AT THE HEADER
    void sampleTypeID() {
        int a, b;

        if (typeid(a).name() == typeid(b).name()) { //CHECK IF THEY HAVE THE SAME DATATYPE
            std::cout << "THIS HAS THE SAME DATATYPE" << std::endl;
        }
        else std::cout << "THIS DOESN'T HAVE THE SAME DATATYPE" << std::endl; //NO BRACKETS IS VALID FOR ONE LINER, BUT I DON'T RECOMMEND USING IT
    }

    //LESSON 4.13 - CHALLENGE (PRIME NUMBERS)

    //LESSON 5.2 - 5.3 (PASSING VALUE TO A FUNCTION)
    void printValue(const int a) { //I MADE IT CONST SINCE IT ONLY PRINTS VALUE AND IT MUST NOT BE CHANGED
        std::cout << "the value is " << a << std::endl;
    }

    void main7() {
        int a = 5;
        printValue(a); //I PASSED THE VALUE OF A INSIDE THE FUNCTION
    }

    //LESSON 5.4 - USING AUTOMATIC AND STATIC VARIABLES
    //auto IS THE DEFAULT FOR EVERY DATATYPES, IT'S ALREADY DEPRECATED AND NO POINT IN USING THEM ANYWAYS
    void sampleFunction() {
        for (int i = 0; i < 10; i++) {
            static int a = 1; //IT'S LIKE PUTTING THIS OUTSIDE THE SCOPE AS A GLOBAL VARIABLE, IT ONLY GETS INITIALIZED ONCE
            //int a = 1; //IF IT'S INITIALIZED LIKE THIS THEN THE a VARIABLE GETS INITIALIZED TO 1 AT EVERY REPEAT OF THE LOOP, THUS PRINT 'The value of a is 1' 10 TIMES
            printf("value of a is %d", a++); //THIS PRINTS FROM 1 - 10
        }
    }

    //LESSON 5.5 - RETURNING VALUES FROM A FUNCTION
    int sampleReturnFunction(const int a, const int b) { //THIS FUNCTION RETURNS AN INTEGER
        int c = a + b;
        return (c); //WHEN YOU CALL THIS FUNCTION IT WOULD RETURN THE RESULT OF ADDING INPUT ARGUMENTS
    }

    //LESSON 5.6 - USING FUNCTION POINTERS
    void main8() {
        int (*pFunction)(int, int) = &sampleReturnFunction; //'&' IS OPTIONAL
        //CALLING THE FUNCTION
        (*pFunction)(12, 5); //'*' IS OPTIONAL
    }

    //LESSON 5.7 - FUNCTION OVERLOADING
    int operation(int a, int b, const char* operation) {
        int c = 0;
        if (operation == "addition") {
            c = a + b;
        }
        return (c);
    }

    int operation(int a, int b, int c, const char* operation) {
        int d=0;
        if (operation == "addition") {
            d = a + b + c;
        }
        return (d);
    }

    int operation(int a, int b, int c, int d, const char* operation) {
        int e=0;
        if (operation == "addition") {
            e = a + b + c + d;
        }
        return (e);
    }

    //LESSON 5.8 - VARIADIC ARGUMENTS 
    //STEP 1: ADD #include <stdarg.h>
    #include <stdarg.h>

    int sampleVariadicFunction(const int count, ...) {
        int total = 1;
        va_list vf; //THIS IS TO CREATE AN OBJECT FOR VA
        va_start(vf, count); //THIS IS A REQUIREMENT, va_start(VA_NAME,HOW_MANY_INPUTS)

        for (int i = 0; i < count; ++i) {
            total += va_arg(vf, int); //TO INITIALIZE THE DATATYPE OF VA
        }
        va_end(vf); //THIS IS ALSO A REQUIREMENT
        return (total);
    }

    void main9() {
        int returnThisOne;
        returnThisOne = sampleVariadicFunction(3, 1, 2, 3);
        std::cout << returnThisOne << std::endl;

    }

    //LESSON 6.2 && 6.4 - DEFINING A CLASS && FUNCTION MEMBERS
    class sampleClass1 {
        //THESE ARE DATA MEMBERS
        int a = 0; //THIS WOULD BE PRIVATE UNLESS YOU SPECIFY THE 'public:' AT THE TOP

    public: //EVERYTHING BELOW WOULD BE PUBLIC

    //THESE ARE FUNCTION MEMBERS
    //IT IS BEST PRACTICE TO INITIALIZE FUNCTION OUTSIDE THE CLASS
        void setValue(int value) {
            a = value;
        }
        void getValue(); //DECLARATION OF FUNCTION THEN INITIALIZING OUTSIDE THE CLASS
    };
    //THIS IS THE BEST PRACTICE FOR FUNCTIONS OF A CLASS | GETTING INITIALIZED OUTSIDE THE CLASS
    void sampleClass1::getValue() { //INITIALIZING FUNCTION OUTSIDE THE CLASS ALWAYS REMEMBER TO USE '::'
        std::cout << "The value is " << a << std::endl;
    }

    void main10() {
        sampleClass1 classYeah; //DECLARE AN OBJECT FOR THIS CLASS
        int a = 10;
        classYeah.setValue(10); //CALL THE OBJECT FIRST BEFORE THE METHOD JUST LIKE THIS
        classYeah.getValue();
    }

    //LESSON 6.3 - DATA MEMBERS
    class sampleDataMembers {
    public:
        int a;
        int b;
        int c;
    };

    void main11() {
        sampleDataMembers dataMembers = { 1,2,3 }; //VALUES OF DATA MEMBERS COULD BE INITIALIZED LIKE THIS BUT IF YOU'RE GONNA DO THIS JUST USE STRUCT INSTEAD OF CLASS
        dataMembers.a = 2; //VALUES OF DATA MEMBERS COULD ALSO BE INITIALIZED LIKE THIS
    }

    //LESSON 6.5 - CONSTRUCTORS AND DESTRUCTORS
    class sampleConstructor {
        int x;

    public:
        //WE COULD DO OVERLOAD CONSTRUCTOR JUST LIKE IN FUNCTIONS | THEY ONLY DIFFERENTIATE IN NO. OF ARGUMENTS AND DATATYPE OF ARGUMENTS JUST LIKE IN FUNCTION
        sampleConstructor() {  //THIS IS THE DEFAULT CONSTRUCTOR, THE VALUES WILL AUTOMATICALLY BE 0 IF NOT EXPLICITLY INITIALIZED, THIS IS AUTOMATICALLY CREATED UNLESS OTHER CONSTRUCTOR WAS CREATED
            x = 0;
        }
        //sampleConstructor () { } //IT COULD ALSO LOOK LIKE THIS
        //IF YOU CREATED A PARAMETERIZED CONSTRUCTOR, DEFAULT CONSTRUCTOR WOULD NOT BE AUTOMATICALLY CREATED ANYMORE
        sampleConstructor(int y) { //THIS IS A PARAMETERIZED CONSTRUCTOR
            x = y;
        }
        //COPY CONSTRUCTOR ARE PASSED BY REFERENCE AS TO AVOID INFINITE RECURSION BECAUSE IF IT IS PASSED BY VALUE IT WOULD LOOK LIKE THIS: sampleConstructor sampleCopy = obj1, WITH THIS SYNTAX WE WOULD CALL THE COPY CONSTRUCTOR THUS START OF RECURSION
        sampleConstructor(const sampleConstructor& sampleCopy) { //THIS IS COPY CONSTRUCTOR, THIS IS AUTOMATICALLY CREATED UNLESS EXPLICITLY STATED | PURPOSE OF COPY CONSTRUCTOR IS TO COPY THE VALUE OF ANOTHER OBJECT
            x = sampleCopy.x;
        }
        void showData() {
            std::cout << "value of x is " << x << std::endl;
        }
        //IT IS NOT A GOOD PRACTICE TO CALL DESTRUCTOR EXPLICITLY
        // ~sampleConstructor () { } ; //THIS IS DESTRUCTOR, IT IS AUTOMATICALLY CREATED BY THE COMPILER, IT MUST CONTAIN NO ARGUMENT, ONLY ONE DESTRUCTOR IS REQUIRED.
        ~sampleConstructor() {
            std::cout << "yes, sample constructor could also do this!" << std::endl;
        }
    };

    void main12() {
        //EACH OBJECT CAN ONLY USE 1 TYPE OF CONSTRUCTOR
        sampleConstructor obj1(50); //HERE WE USES PARAMETERIZED CONSTRUCTOR
        sampleConstructor obj4 = sampleConstructor(50); //OBJECT CAN ALSO BE INITIALIZED LIKE THIS

        sampleConstructor obj2(obj1); //HERE WE USES COPY CONSTRUCTOR, WE COPY THE VALUE OF obj1 INTO obj2
        sampleConstructor obj3 = obj1; //COPY CONSTRUCTOR CAN ALSO BE INITIALIZED LIKE THIS
        obj1.showData();
        obj2.showData();
        obj3.showData();
    }

    //LESSON 6.6 - OVERLOADING OPERATORS (UNARY OPERATOR)
    //THIS OPERATOR OVERLOADING IS SPECIFICALLY CATERED FOR CLASS OBJECTS, WITH int c = a + b, WE'VE GOT NO PROBLEM BUT WHEN YOU DO THIS IN AN OBJECT obj3 = obj1 + obj2, THAT'S WHERE WE'LL USE OPERATOR OVERLOAD SINCE OBJECTS IS DIFF FROM VARIABLES
    struct sampleOverloadingOperatorUnary {
        int x{};
        sampleOverloadingOperatorUnary() { }
        sampleOverloadingOperatorUnary(int x) {
            this->x = x;
        }
        void operator++ () { //OPERATOR OVERLOADING IS JUST LIKE A FUNCTION
            x = x + 1;
        }
    };

    void main13() {
        sampleOverloadingOperatorUnary obj1(50);
        ++obj1;
        std::cout << obj1.x << std::endl; //THIS WOULD RESULT TO 51 SINCE WE DEFINE THE '++' OPERATOR TO ADD +1 ON THE SELECTED DATA MEMBER
    }

    //LESSON 6.6 - OVERLOADING OPERATORS (BINARY OPERATOR)
    class sampleOverloadingOperator {
        int x{};
        int y{};
    public:
        sampleOverloadingOperator() { } //OPERATOR FUNCTION CREATED WILL USE THIS CONSTRUCTOR
        sampleOverloadingOperator(int x, int y) {
            this->x = x;
            this->y = y;
        }
        //OVERLOADING OPERATOR IS LIKE GIVING ANOTHER FUNCTION TO AN OPERATOR, YOU PROVIDE ANOTHER MEANING OR ANOTHER THING TO WHAT  SHOULD THE OPERATOR DO
        //THIS IS THE TOP OF THE ABOVE I MENTIONED -------------------------------------
        sampleOverloadingOperator operator+ (sampleOverloadingOperator obj2) { //CONTENT OF ARGUMENT IS DEFINING AN OBJECT FOR ANOTHER
            sampleOverloadingOperator obj1; //DEFINING AN OBJECT FOR THIS CLASS
        //THE ABOVE BASICALLY MEANS obj1 + obj2 -----------------------------------
            obj1.x = this->x + obj2.x; //HERE WE ARE SAYING TO ADD THE VALUES PROVIDED IN obj1 AND obj2
            obj1.y = this->y + obj2.y; //HERE WE ARE SAYING TO ADD THE VALUES PROVIDED IN obj1 AND obj2
            return (obj1); //IT ALSO HAS RETURN TYPE JUST LIKE A FUNCTION
        }

        void showValues() const {
            std::cout << "value of x is " << x << std::endl << "value of y is " << y << std::endl;
        }
    };

    void main14() {
        sampleOverloadingOperator obj1(20, 40);
        sampleOverloadingOperator obj2 = sampleOverloadingOperator(30, 60);
        sampleOverloadingOperator obj3 = obj1 + obj2; //CAN BE TYPED LIKE THIS obj1.operator+(obj2)
        obj3.showValues();
    }


    //LESSON 7.2 - TEMPLATE FUNCTIONS
    //THIS IS FOR GENERIC PROGRAMMING, WHEN YOU'RE UNCERTAIN WHAT DATATYPE TO USE
    template <typename T, typename T1> //ALWAYS ADD THIS BEFORE DEFINING FUNCTION TO USE TEMPLATE
    T sampleTemplateFunction(T a, T1 b) {
        return (a + b);
    }

    template <typename T>
    T sampleTemplateFunction1(T a) {
        return a;
    }

    void main15() {
        double a = 5.1;
        int b = 6;
        std::cout << sampleTemplateFunction<double, int>(a, b) << std::endl; //ADDING '<datatype>' IS OPTIONAL, BUT IT IS PREFFERED TO IDENTIFY THAT YOU'RE USING A TEMPLATE FUNCTION
        // sampleTemplateFunction<int>(5,b); //ARGUMENTS MUST HAVE THE SAME DATATYPE SINCE IT IS DEFINED AS 'T1' IN THE FUNCTION, WE COULD NOT LEAVE '< >' BLANK HERE SINCE THE RETURN TYPE MUST BE DECLARED
        std::cout << sampleTemplateFunction1(a); //SINCE a AND RETURN TYPE OF THE FUNCTION IS THE SAME WHICH IS 'T', WE COULD LEAVE THE '< >' ANGLE BRACKET BLANKS SINCE THE COMPILER CAN DEDUCE THAT IT IS A FLOAT ACCORDING TO THE ARGUMENT
    }

    //LESSON 7.3 - TEMPLATE CLASSES
    //THIS IS SYNTACTICALLY THE SAME WITH CLASSES
    template <typename TN>
    class sampleTemplateClass {
        TN a, b;

    public:
        sampleTemplateClass(int c, int d) {
            a = c;
            b = d;
        }
        //NO NEED TO DECLARE THE template <typename variable> HERE SINCE WE WILL BE DEFINING IT INSIDE THIS CLASS
        void sampleTemplateFunctionForThisClass() {
            std::cout << a << std::endl;
        }
        void sampleTemplateFunctionOutsideTheClass();
    };

    template <typename TN> //WE WILL BE USING THE SAME TEMPLATE VARIABLE TO DEFINE THIS FUNCTION - USING THE SAME TEMPLATE AS THE CLASS TEMPLATE IS OPTIONAL
    void sampleTemplateClass<TN>::sampleTemplateFunctionOutsideTheClass() { //THIS IS HOW YOU DECLARE TEMPLATE OUTSIDE THE CLASS: TAKE NOTE OF THE SYNTAX
        std::cout << b << std::endl;
    }

    void main16() {
        int y = 10;
        int z = 5;
        sampleTemplateClass<int> obj1(y, z); //' < > ' ANGLE BRACKETS ARE REQUIRED WHEN DEFINING TEMPLATE CLASSES UNLIKE TEMPLATE FUNCTIONS
        obj1.sampleTemplateFunctionOutsideTheClass();
    }


    //STUDY WHERE POINTER IS REALLY LOCATED, STACK OR HEAP?
    //*ANSWER: IT IS LOCATED ON STACK BUT YOU COULD CREATE A POINTER THAT POINTS TO THE HEAP

    //STUDY DESTRUCTOR FOR POINTERS 

    //LEARN HOW TO CREATE SOMETHING THAT YOU COULD PASS TO AN OBJECT

    //LEARN HOW TO USE GOODBOLT.ORG OR COMPILER EXPLORER

    //LESSON A.1 - DIFF BETWEEN CONST CHAR* AND CHAR * CONST
    void sampleDifference() {
        char a = 'a';
        char b = 'b';
        char e = 'e';
        const char* c = &a; //THIS IS POINTING TO ADDRESS OF a
        //*c = 'c'; | THIS IS NOT ALLOWED 
        c = &e; //CHANGING ADDRESS ALLOWED, ONLY DEREFERENCING ISN'T SINCE IT IS CONST

        char* const d = &b; //THIS IS POINTING TO ADDRESS OF b
        //d = &e; | THIS IS NOT ALLOWED
            *d = 'd'; //DEREFERENCING IS ALLOWED, ONLY CHANGING ADDRESS ISN'T ALLOWED
    }

    //LESSON A.2 - USE OF 'this->'
    class sampleThis {
        int x;
    public:
        sampleThis(int x) {
            this->x = x; //THIS MEANS THAT this class' x is equals to the parameter x | THIS IS ONLY USED WHEN CLASS AND INPUT PARAMETER HAS THE SAME NAME
            //x = x; //IT WOULDNT MAKE ANY SENSE IF THIS WAS DONE LIKE THIS, RIGHT?
        }
        void showThis() {
            std::cout << x << std::endl;
        }
    };

    void mainA1() {
        sampleThis obj1 = sampleThis(5);
        obj1.showThis();
    }

    //LESSON A.3 - CREATING A POINTER TO THE HEAP
    void mainA2() {
        int* pVariable = new int; //SYNTAX FOR CREATING A NEW MEMORY SPACE FOR THIS POINTER VARIABLE AT THE HEAP
        *pVariable = 20; //DEREFERENCING
        std::cout << *pVariable << std::endl;
        delete pVariable; //MEMORY SPACES PLACED AT THE HEAP IS NOT AUTOMATICALLY REMOVED, WE NEED TO REMOVE IT EXPLICITLY TO AVOID MEMORY LEAK

        //SYNTAX FOR ARRAYS
        int* pArray = new int[10]; //SYNTAX
        for (int i = 0; i < 10; i++) {
            pArray[i] = i;
            }
        delete[] pArray; //DON'T FORGET TO DELETE TO AVOID MEMORY LEAK
    }

    //LESSON A.4 - FIXING CONFUSION ABOUT ARRAYS AND POINTERS
    void passArray(int x[], int y) { //WHEN ARRAYS ARE GETTING PASSED THE PARAMETER ON FUNCTION IT BECOMES A POINTER, int x[] IS NOW EQUIVALENT TO int* x
        //THE ARGUMENT ABOVE IS EQUAL TO int* x = Array123 OR int* x = &Array123[0]
        int z = sizeof(x); //ALTHOUGH THERE IS AN EXCEPTION ON SIZEOF FOR ARRAY, THIS WOULD PRINT 8 NO MATTER WHAT SINCE THE FIXED SIZE OF POINTER IN BYTES IS 8, ALWAYS REMEMBER THAT WHEN ARRAY AS PASSED IN A FUNCTION IT IS INITIALIZED AS A POINTER
        std::cout << "pass array sizeof value is " << z << std::endl;
        for (int i = 0; i < y; i++) {
            std::cout << x[i] << std::endl;
        }
    }

    void mainA3() {
        const char* pA = "abc"; //STRING "abc" IS FIRST CREATED IN A READ ONLY MEMORY, THEN THE pA HOLDS THE MEMORY ADDRESS OF THAT STRING FROM READ ONLY 
        //*pA[0] = 'd'; //THIS IS NOT ALLOWED ALL STRING LITERALS ARE READ ONLY
        pA = "acd"; //WITH THIS WE ARE NOT MODIFYING ANYTHING WITH THE "abc", THE POINTER JUST NOW POINTS TO ANOTHER NEW STRING LITERAL "acd"
        char pB[] = "abc"; //STRING LITERAL "abc" IS FIRST CREATED IN A READ ONLY MEMORY THEN THE ARRAY CREATES A COPY AND STORE EACH CHARACTER INSIDE THE ARRAY + 1 FOR THE NULL TERMINATOR
        *pB = 'c'; //WE COULD NOW MODIFY SINCE THE array pB LITERALLY HOLDS EACH CHARACTER

        int Array123[] = { 1,2,3,4,5 };
        //Array123 IS EQUAL TO &Array[0] | Array123 + 1 IS EQUAL TO &Array[1] - MEMORY ADDRESS, REMEMBER: ONLY POINTERS CAN HOLD MEMORY ADDRESS
        //*Array123 IS EQUAL TO Array[0] | *(Array123 + 1) IS EQUAL TO Array[1] - VALUE
        //WE CANNOT PASS THE WHOLE ARRAY, BUT WE COULD ALWAYS PASS THE FIRST MEMORY ADDRESS OF THE ELEMENTS

        sizeof(Array123); //THERE IS AN EXCEPTION WHERE Array123 ISN'T CONSIDERED AS THE FIRST INDEX MEMORY ADDRESS, WITH SIZEOF OPERATOR IT ACTUALLY CALCUALTES THE WHOLE SIZE OF THE ARRAY 
        //ABOVE IS EQUIVALENT TO LIKE SAYING sizeof(Array123[0]) + sizeof(Array123[1]) + sizeof(Array123[2]) 

        int a = 1;
        int b = 2;
        int* c = &a;
        c[1]; //WE COULD ALSO DO THIS EVEN THO IT IS NOT AN ARRAY, THE '[]' IS JUST USED TO LOOK AT THE NEXT OR CURRENT INDEX VALUE, WE COULD ALWAYS USE '[]' WHEN WORKING WITH POINTERS AND ARRAYS

        int size = sizeof(Array123) / sizeof(Array123[0]);
        passArray(Array123, size); //WE ARE ONLY PASSING THE FIRST INDEX ADDRESS, WE COULD ALSO PASS &Array123[0] BUT THAT WOULD BE WEIRD
    }

    //LESSON A.5 - ARROW OPERATOR
    //THIS IS USED FOR DEREFERENCING OBJECTS
    class sampleArrowUse {
    public:
        int a;
        int b;
        sampleArrowUse(int a, int b) {
            this->a = a;
            this->b = b;
        }
    };

    void mainA4() {
        sampleArrowUse obj1(10, 20);
        sampleArrowUse* obj2 = &obj1;
        //NOW HERE COMES THE PRACTICAL USE OF ARROW OPERATOR
        std::cout << obj2->a << std::endl; //THIS IS EQUIVALENT TO BELOW
        std::cout << (*obj2).b << std::endl;
    }

    //LESSON A.6 - INHERITANCE
    class sampleBaseClass {
        int a = 5;

    public:
    void printData() {
        std::cout << a << std::endl;
    }
};

class sampleDeriveClass1 : public sampleBaseClass {

};

class sampleDeriveClass2 : private sampleBaseClass {
    void setDataDerived() {
        void setData(); //BASE CLASS HAS THIS FUNCTION AS PUBLIC, SO THIS COULD STILL BE USED HERE
    }
};


class sampleDeriveClass3 : protected sampleBaseClass {

};

void mainA5() {
    sampleDeriveClass1 objDer1; //BY USING THIS, WE SIMPLY INHERITED EVERYTHING WITHOUT CHANGING ACCESS SPECIFIER OF THE DATA MEMBERS AND MEMBER FUNCTIONS IN BASE CLASS
    sampleDeriveClass2 objDer2; //PUBLIC AND PROTECTED SPECIFIER OF DATA MEMBERS AND MEMBER FUNCTION OF BASE CLASS IS CONVERTED INTO PRIVATE IN THE DERIVED CLASS
    sampleDeriveClass3 objDer3; //PUBLIC AND PROTECTED SPECIFIER OF DATA MEMBERS AND MEMBER FUNCTION OF BASE CLASS IS CONVERTED INTO PROTECTED IN THE DERIVED CLASS

}

//LESSON A.7 - DEFINING METHODS AND CONSTRUCTOR OUTSIDE THE CLASS
class sampleDefineOutside {
    int a;

public:

    sampleDefineOutside(int b); //DECLARATION OF CONSTRUCTOR

    void sampleMethodPrint(); //DECLARATION OF METHOD

};

sampleDefineOutside::sampleDefineOutside(int b) {
    a = b;
}

void sampleDefineOutside::sampleMethodPrint() {
    std::cout << "value of a is " << a << std::endl;
    return; //VERY OPTIONAL, DEFINITELY NOT REQUIRED SINCE THIS IS A VOID
}

void mainA6() {
    sampleDefineOutside obj1(100);
    obj1.sampleMethodPrint();
}

//LESSON A.8 - MACROS (IF,ENDIF,FUNCTION)
//THIS IS PREPROCESSED, IT IS BEING READ BEFORE COMPILER DOES IT JOB
//#include <AdsProp.h> //IT LITERALLY JUST COPIES THE CONTENT OF THIS HEADER FILE AND PASTE IT IN THIS SOURCE CODE
#define a 10 //THIS IS EQUAL TO a = 10,
//#define INTEGER int //IT COULD ALSO BE USED LIKE A TYPEDEF
#define func(x,y) ((x > y) ? x : y)  //IT COULD ALSO ACT LIKE A FUNCTION
#define sampleIfDef


void mainA7() {
    int b = 20;
    std::cout << func(a, b) << std::endl; //WE'RE APPLYING THE MACRO FUNCTION HERE

#ifdef sampleIfDef  //IF DEFINED THEN DO THIS, IT IS DEFINED LOOK AT ABOVE
    std::cout << "ifdef is defined" << std::endl;
#else
    std::cout << "ifdef isnt defined" << std::endl;
#endif //END

#ifndef sampleIfNDef//IF NOT DEFINED THEN DO THIS
    std::cout << "sample ifndef isn\'nt working" << std::endl;
#endif // END

}

//LESSON - DATA STRUCTURE 
//creator of c++ said to avoid linked list, just use vector https://www.youtube.com/watch?v=YQs6IC-vgmo, vector is always better than the list
//CHECK MO NALANG SA GOOGLE ANONG BEST CONTAINER ANG MAGANDANG GAMITIN AT SPECIFIC SITUATIONS
//STUDY ONLY THE ABSTRACT CONCEPT, WHEN YOU ARE ABOUT TO USE THEM JUST USE STL IMPLEMENTATION, I USED STL FOR VECTOR, DOUBLY LINKED LIST, AND QUEUE(DEQUEUE) TO LEARN HOW TO USE STL'S IMPLEMENTATION

//LESSON D1 | SINGLY LINKED LIST
struct Node {
    int data;
    Node* next;
};

//CREATE A GLOBAL VARIABLE THAT POINTS TO THE HEAD
//Node* ptrToHead = NULL;

void push(const int x, Node** head) { //SINCE NODE IS POINTER TO ANOTHER POINTER THE SYNTAX IS TO ADD ANOTHER '*'
    Node* newNode = new Node; //CREATE A NEW HEAD NODE
    newNode->data = x;
    newNode->next = (*head); //1 * IN A 2 ** MEANS DEREFERENCING head,WHICH HOLDS THE MEMORY ADDRESS OF THE HEAP IN WHICH THE node1 POINTS TO | THIS IS NOW POINTING TO PREVIOUS HEAD NODE
    (*head) = newNode; //DEREFERENCING THE VALUES WITHIN *head TO STORE THE MEMORY ADDRESS THAT THE newNode HOLDS
}

void append(const int x, Node** head) {
    Node* newNode = new Node; //CREATING NEW NODE FOR A PLACE TO ADD NEW DATA
    Node* last = *head;

    newNode->data = x;
    newNode->next = NULL; //SETTING NULL SINCE THIS WOULD BE THE NEW LAST NODE

    /* 4. if list is empty, new node becomes first node */
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;

    /* 6. Change the next of last node */
    last->next = newNode;
    return;
}

//insert new node after a given node
void insertAfter(int node_data, Node* prev_node)
{
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL)
    {
        std::cout << "the given previous node is required,cannot be NULL"; return;
    }

    /* 2. create and allocate new node */
    Node* newNode = new Node;

    /* 3. assign data to the node */
    newNode->data = node_data;

    /* 4. Make next of new node as next of prev_node */
    newNode->next = prev_node->next;

    /* 5. move the next of prev_node as new_node */
    prev_node->next = newNode;
}

// display linked list contents
void displayList(struct Node* node)
{
    //traverse the list to display each node
    while (node != NULL)
    {
        std::cout << node->data << "-->";
        node = node->next;
    }

    if (node == NULL)
        std::cout << "null";
}

void mainD1() {

    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    //ALLOCATE THESE LINKED LIST IN THE HEAP
    head = new Node;
    second = new Node;
    third = new Node;

    //ASSIGNING VALUES
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    push(10, &head); //INSERT AT BEGINNING
    append(40, &third); //INSERT AT END
    insertAfter(100, head->next);
    push(20, &head);
    displayList(head);

}

//LESSON D2 | DOUBLY LINKED LIST (USING STL TEMPLATE: LIST)
//TO SEE ALL METHODS SUCH AS REVERSE,SORT,INSERT,EMPTY, CHECK THE CPP DOCUMENTATION

#include <list>

using std::list;

void printList(list<int> passList) {
    list<int> ::iterator it; //THIS IS SYNTAX FOR ITERATOR, IT ACTS LIKE A POINTER
    std::cout << "content of list are { ";
    for (it = passList.begin();it != passList.end(); it++) {
        std::cout << *it << " "; //ITERATOR NEEDS TO BE DEREFERENCED JUST LIKE A POINTER
    }
    std::cout << "}\n\n";
}

void mainD2() {
    list<int> objList1;

    objList1.push_front(10); //INSERT OBJECT AT THE FRONT
    objList1.push_back(30); //INSERT OBJECT AT THE BACK
    objList1.push_back(60);
    objList1.push_back(5);
    objList1.push_back(12);
    printList(objList1);

    std::cout << "we would pop the front and back" << std::endl;
    objList1.pop_front(); //REMOVE OBJECT AT THE FRONT
    objList1.pop_back(); //INSERT OBJECT AT THE BACK
    printList(objList1);

    std::cout << "value of first element is: " << objList1.front() << std::endl;
    std::cout << "value of first element is: " << objList1.back() << std::endl;

}

//TIME COMPLEXITY | SPACE COMPLEXITY IS JUST FOR HOW MANY MEMORY SPACE DOES IT OCCUPY, EZ NALANG YON 'DI KO

//NOTE - WHY DO WE ONLY PICK THE ONE WITH THE HIGHEST ORDER FROM AN EQUATION? e.g. T = a(n) + 2, 2 IS CONSTANT AND WOULD BE PLOTTED AS FLAT LINE, WHILE n GROWS AS THE INPUT NUMBER INCREASES, 
//CONTINUATION OF NOTE - REMEMBER THAT WE ONLY GET THE WORST CASE SCENARIO WITH Big O, IF AN INPUT IS 1MILLION, THE CONSTANT WHICH IS 2 WOULD BE IRRELEVANT THUS WE SIMPLIFY IT AND THE FINAL ANSWER WOULD BE O(n)

//LESSON D3 | Big O Notation O(1)
//THE COMPUTATION TIME WOULD ALWAYS BE CONSTANT NO MATTER THE INPUT SIZE OF THE ARRAY, PLOTTED AS FLAT LINE
void sampleBigOConstant(int arr[]) {
    arr[1] = 10;
}

//LESSON D4 | Big O Notation O(n)
//THE COMPUTATION TIME WOULD BE BASED ON THE INPUT SIZE OF THE ARRAY, PLOTTED AS LINEAR, AS THE SIZE INCREASES THE COMPUTATION TIME ALSO INCREASES
void sampleBigOLinear(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << std::endl;
    }
}

//LESSON D5 | Big O Notation O(n(squared))
//THE COMPUTATION TIME WOULD BE BASED ON THE TWO INPUT SIZE OF THE ARRAY, PLOTTED AS CURVE LINE THAT EXPONENTIALLY GROWS
void sampleBigOQuadratic(int **arr, int size1, int size2) { //**arr IS EQUAL TO arr[][10] OR *arr[10] | NUMBER MUST BE CLEARLY SPECIFIED INSIDE '[]'
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            std::cout << arr[i][j] << std::endl;
        }
    }
}

//LESSON D6 | Big O Notation O(logn)

//NOTE FOR ITERATORS - THEY ARE USED TO SELECT THE BEGIN ELEMENT,END,RBEGIN,REND, ETC. WE DON'T USE ITERATORS FOR SIZE,CAPACITY,PUSH,PUSH_BACK, OR INSERTING DATAS, ETC. SYNTAX SAMPLE: list<int> :: iterator it;
//ITERATORS: THEY ARE LIKE POINTERS, SELECTING THE FIRST,LAST ELEMENTS,ETC.

//LESSON D7 | STACK
//LIFO - LAST IN FIRST OUT, A WAY TO ORGANIZE DATA, YOU COULD ALSO USE STL WITH THIS ONE | HAS STATIC SIZE 
#define MAXSIZE 5

class stack {
    int top = -1;

public:
    int arr[MAXSIZE]{};

    bool arrayStackIsEmpty() {
        if (top < 0) return true;
        else return false;
    }

    void arrayStackPush(const int& value) { //YOU COULD ONLY ADD NEW VALUES AT THE TOP,CAN'T PUSH ANYMORE IF FULL SINCE ARRAY HAS STATIC SIZE
        if (top == MAXSIZE - 1) std::cout << "stack is full" << std::endl;
        else {
            top++;
            arr[top] = value;
        }
    }

    void arrayStackPop() { //CAN ONLY REMOVE VALUES FROM TOP| WHEN YOU DO THIS THE DATA ISN'T ACTUALLY REMOVE
        if (arrayStackIsEmpty()) std::cout << "stack is empty, you can't remove anything\n";
        else top--;
    }

    void arrayStackDisplay() {
        if (arrayStackIsEmpty()) {
            std::cout << "stack is empty\n";
        }
        else {
            for (int i = 0; i < top + 1; i++) {
                std::cout << "array[" << i << "]= " << arr[i] << std::endl;
            }
        }
    }
};

void mainD3() {
    stack obj1;

    obj1.arrayStackPush(10);
    obj1.arrayStackPush(20);
    obj1.arrayStackPop();
    obj1.arrayStackDisplay();
}

//LESSON D8 | DEQUEU - WITH DEQUEU YOU COULD INSERT AND REMOVE AT BOTH ENDS
//QUEUE - INSERT AT ONE END AND REMOVE AT ANOTHER END, I WILL NOT BE INCLUDING QUEUE IN THIS PRACTICE
//FIFO - FIRST IN FIRST OUT, OPPOSITE OF STACK
#include <deque>

using std::deque;

void printDeque(deque<int> passDeque) {
    deque<int> ::iterator it; //THIS IS SYNTAX FOR ITERATOR, IT ACTS LIKE A POINTER
    std::cout << "content of deque are { ";
    for (it = passDeque.begin();it != passDeque.end(); it += 1) {
        std::cout << *it << " "; //ITERATOR NEEDS TO BE DEREFERENCED JUST LIKE A POINTER
    }
    std::cout << "}\n\n";
}

void mainD4() {
    deque<int> objDeque1;

    objDeque1.push_front(10); //ASSIGN VALUE TO THE FIRST ELEMENT
    objDeque1.push_back(20);
    objDeque1.push_back(30); //ASSIGN VALUE TO THE LAST ELEMENT
    objDeque1.push_back(40);
    objDeque1.push_back(50);
    printDeque(objDeque1);

    std::cout << "we would pop the front and back" << std::endl;
    objDeque1.pop_front(); //REMOVE VALUE OF THE FIRST ELEMENT
    objDeque1.pop_back(); //REMOVE VALUE OF THE LAST ELEMENT
    printDeque(objDeque1);

}

//LESSON D9 | VECTOR - THIS HAS DYNAMIC SIZE UNLIKE STACK, ALSO CALLED AS DYNAMIC ARRAY, ALMOST THE SAME AS LINKED LIST, 
//LINKED LIST IS GOOD FOR INSERTING AT FRONT AND BACK WHILE VECTOR IS NOT- RESEARCH WHY
#include <vector>

using std::vector;

void printVector(vector<int>& passVector) { //IT IS A GOOD IDEA TO PASS THIS AS REFERENCE AS TO SAVE MEMORY, RATHER THEN MAKING THE COPY CONSTRUCTOR DO THE WORK
    std::cout << "content of vector are { ";
    for (const int& i : passVector) { //AN EXAMPLE OF GOOD USE OF RANGE BASED FOR LOOP
        std::cout << i << " ";
    }
    std::cout << "}\n\n";
}

void mainD5() {
    vector<int> objVector1; //REMEMBER THAT TEMPLATE CLASSES ARE DECLARED LIKE THIS
    int value = 0;
    int count;
    int i = 1;
    int index = 0;

    std::cout << "how many input values do you want to create?" << std::endl;
    std::cin >> count;

    std::cout << "Push Back Values: " << std::endl;
    while (i <= count) {
        std::cout << "enter a value" << std::endl;
        std::cin >> value;
        if (value > 0) {
            objVector1.push_back(value); //INSERTING VALUE AT THE BACK
            i++;
        }
    }
    printVector(objVector1);

    std::cout << "Push Front Values: " << std::endl;
    i = 1;
    while (i <= count) {
        std::cout << "enter a value" << std::endl;
        std::cin >> value;
        if (value >= 0) {
            objVector1.insert(objVector1.begin(), value); //INSERTING VALUES AT THE FRONT
            i++;
        }
    }
    printVector(objVector1);

    //ONLY BE DOING ONCE TOO
    int countInsert = 0;
    std::cout << "Insert Values: " << std::endl;
    while (countInsert <= 0) {
        std::cout << "enter an index" << std::endl;
        std::cin >> index;
        if (index >= 0) {
            std::cout << "enter a value" << std::endl;
            std::cin >> value;
            objVector1.insert(objVector1.begin() + index, value); //INSERTING VALUES AT WHATEVER INDEX YOU WANT
            countInsert++;
        }
    }
    printVector(objVector1);

    //WE'LL ONLY BE DOING THIS ONCE
    countInsert = 0;
    std::cout << "Modify Values: " << std::endl;
    while (countInsert <= 0) {
        std::cout << "enter an index" << std::endl;
        std::cin >> index;
        if (index >= 0) {
            std::cout << "enter a value" << std::endl;
            std::cin >> value;
            objVector1[index] = value; //DEREFERENCING OR MODIFYING THE CONTENT OF THE INDEX
            countInsert++;
        }
    }
    printVector(objVector1);

}

int main() {
    main0();
    main1();
    main2();
    main3();
    main4();
    main5();
    main6();
    main7();
    main8();
    main9();
    main10();
    main11();
    main12();
    main13();
    main14();
    main15();
    main16();

    mainA1();
    mainA2();
    mainA3();
    mainA4();
    mainA5();
    mainA6();
    mainA7();

    mainD1();
    mainD2();
    mainD3();
    mainD4();
    mainD5();
    return 0;
}












