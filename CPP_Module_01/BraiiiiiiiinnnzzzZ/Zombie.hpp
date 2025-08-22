#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string name); // Constructor 
		~Zombie(); // Destructor 

		void announce() const;
};

#endif


/*
Zombie(); -> Constructor, but created for just a 
 			 zombie and not to give it a name.
			 Default Constructor(makes zombies with
			 no name).

Zombie(std::string name); 
		  -> This constructor will take the argument (name)
		  	 , and set the private member variable inside the
			  the object to that value. Parameterized consturctor
			  (makes a zombie with a specific name).

The ~Zombie() is indeed the destructor.
It will be called automatically when a Zombie object goes out of
scope or is destroyed. Even if you don’t explicitly write one, the
compiler will generate a default destructor for you (which just destroys
all members in order). You only really need to write a destructor yourself
when you’re manually managing resources like memory, files, or sockets.
*/