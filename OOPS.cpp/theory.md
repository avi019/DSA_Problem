
-----------------------------------------------------------OOPs------------------------------------------------------------------------------------
Class--
        It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A class is like a blueprint for an object.
        We can say that a Class in C++ is a blueprint representing a group of objects which shares some common properties and behaviors.
For Example: 
        Consider the Class of Cars. There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. So here, the Car is the class, and wheels, speed limits, and mileage are their properties.
          
object--
        An Object is an identifiable entity with some characteristics and behavior. An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
Why OOPs are used---       
        We use OOP to organize code into reusable, modular components (classes), making it easier to manage, understand, and extend. It helps model real-world entities, promotes code reuse, and improves maintainability.
        It's most important benifit is using this we can make our own (userdefine) datatype.
----------------------------------------------Access Specifier-------------------------------------------------------------------------------------
1.Private--
        Private access specifier means that the member function or data member can only be accessed by other member functions of the same class.
2.Public--
        Public access specifier means that the member function or data member can be accessed by any code.
3.Protected--
        A protected access specifier means that the member function or data member can be accessed by other member functions of the same class or by derived classes.
-----------------------------------------------Constructor-----------------------------------------------------------------------------------------
Constructor:
        Constructor in C++ is a special method that is invoked automatically at the time an object of a class is created. It is used to initialize the data members of new objects generally. The constructor in C++ has the same name as the class or structure. It constructs the values 
        i.e. provides data for the object which is why it is known as a constructor.
Type of Constructor:
    1.Default Constructo:
        They are used to create an object with default values.
    2.Parameterized Constructor:
        Takes parameters. Used to create an object with specific initial values.
    3.Copy Constructor
        Takes a reference to another object of the same class. Used to create a copy of an object.


----------------------------------------------Four Pillar Of OOPs----------------------------------------------------------------------------------
Encapsulation--
        In normal terms, Encapsulation is defined as wrapping up data and information under a single unit. In Object-Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them.
Real world applicatio--
        Consider a real-life example of encapsulation, in a company, there are different sections like the accounts section, finance section, sales section, etc. The finance section handles all the financial transactions and keeps records of all the data related to finance. Similarly, the sales section handles all the sales-related activities and keeps records of all the sales. Now there may arise a situation when for some reason an official from the finance section needs all the data about sales in a particular month. In this case, he is not allowed to directly access the data of the sales section. He will first have to contact some other officer in the sales section and then request him to give the particular data. This is what encapsulation is. Here the data of the sales section and the employees that can manipulate them are wrapped under a single name “sales section”.
Two feature of Encapsulation
    1.Data protection
    2.Data hidding 
--------------------------------------------------Inheritance-------------------------------------------------------------------------------------


