
1-init_dog.c
- data struture is similar to OOP. whenever we assign using dot..for exaomple(dog.name = "poppy"; dog.age = "1"), we are making a copy of that strutcure.
- when declearing a data structure, we do (struct dog [variable struct name]). struct dog inside main.c after definding it in dog.h is like in other variables like int, float. etc..
- we can make multiple copies using differnt variable names like (struct dog my_dog) or (struct dog his_dog) etc.
- pointer to strutrer is just like pointer to an array except pointer to structure points to each member of the data structure
- Also just like in arrays, the addrss of the any data struture (i.e &my_dog) points to its first member.
- the reason we have (char *name) is beacuse a name is a string which is a seris of charachters and it is iterated by that pointer.
- to acess and manipulate each member, we use the (->) symbol which is equvelent to the derefrancing symbol (*).
- for example, to derefrance the dog's name, we use (d -> name = "poppy") where d is the pointer to struct. 
