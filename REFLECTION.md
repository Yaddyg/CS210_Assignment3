# REFLECTION QUESTIONS 

# 1.) 
In LinkedList::deleteFront(), why does it take two separate delete calls instead of one?
Name exactly what each one frees, and name the two new calls back in the program responsible
for putting them on the heap in the first place.

A:
The deleteFront function must call delete twice separately in order to fully free up the memory occupied by the new calls. 

delete doomed->data actually deletes the thing data is pointed towards, and the next line delete doomed frees the node. 
One of the new calls is in main which is deleted first and the other new call is in the addFront function that points to a value. 

# 2.) 
    ArrayList never had a destructor before today. Explain, in your own words, why switching
    from T data[CAPACITY] to T* data [CAPACITY] is what made a destructor necessary, and what
    would happen if you forgot to write one. Would you get a compiler error? Why or why not?

A: 

C++ does not have garbage collector like Java so a destructor is necessary to free the pointer from memory.
Since the compiler does not delete anything that comes with the new keyword, it will not notice and will not throw any errors. 
Without a destructor, in a long term running application that does not employ destructors you will get memory leakage. 

# 3. )
    search() and addFront() both take a T*, but they treat that pointer completely differently.
    Explain the difference in terms of ownership: which one is allowed to delete what you hand it,
    and which one is never allowed to?

A:

earch() is only allowed to look and perform its duties, while addFront() takes ownership of the pointer and is allowed to delete 
whenever called. For example in main, we use search to query and see if there is a found or not found meanwhile we use addFront to add a new data value to the roster. 






# 4.)
    You swapped LinkedList<T> for ArrayList<T> inside makeList() and reran main.cpp without
    changing a single line there. What two mechanisms, by name, made that possible?

A:

The virtual keyword allows the version to be determined at runtime based on what the object actually is. This 
allows the program to know which version. Additionally in main, list is declared as of the abstract type List< T > which allows for it to take any form. 




# 5.)
    Pick one keyword from the Key Terms glossary that you either had to add today or wouldn’t have
    thought to add on your own (explicit, override, virtual, const, or any other). Describe, in
    your own words and without copying the guide’s wording, the smallest example you can think
    of where leaving it out would cause a real problem.
A:
I actually learned many new things today from these keywords. For example, I had always heard or seen override but never knew what it did. 
And the virtual keyword I had never heard off. It was interesting to learn how this keyword allows the program to determine which version of a function to run at runtime. 

I thnk leaving out the virtual keyword will make the program not able to determine the type of object it has.
In our program if we leave out virtual, the program will not know which print implementation to call. 