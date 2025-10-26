
❰ Exercise 00 ❱ 
 🟢 ( Mommy When I grow up i want to be a  bureaucrat.)

-> Ex00 of CPP_Module_05 is about building the smallest unit in 
	the small bureacracy simulation.

-> Thus, what are the Class responsibilities? In simple terms, what
	are we trying to do here?
	
	- " A bureaucrat has a name that is fixed and has a grade that
		can change only through controlled promotions or demotions. If anyone tries to create or modify it with an invalid grade(out of 1 - 150), the class must stop that immediately. "

	- This would be the first exposure to encapsulation + invariant
		protection. We will be designing a class that refusus to
		exist in a broken state.

-> Grade meaning: 
	
	➤ 1   -> the highest possible rank.
	➤ 150 -> the lowest possible rank.

So incrementing the grade actually lowers the numbers. This
reverses the intuative direction, more like a trick in the project.




	➤
	➤