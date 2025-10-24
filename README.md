# CPP Projects (00 — 04)

This is where my C++ journey begins.  
This repository stores my progress, understanding, and learnings throughout the 42 core C++ modules.  
Each project marks a new milestone in my grasp of the language and its paradigms.

---

---
##  CPP Module 01

This module dives deeper into memory handling, object-oriented design, and dynamic behavior in C++.  
It focuses on **pointers**, **references**, **memory allocation**, and **file handling**, while reinforcing core OOP principles.

---

### 1.  BraiiiiiiinnnzzzZ (`ex00`)

- Built a `Zombie` class with an `announce()` method.  
  _Practiced **class creation**, **member functions**, and **destructors**._

- Created zombies via:
  - `newZombie()` → dynamically allocates on **heap**
  - `randomChump()` → allocates on **stack**

- Learned the trade-offs between **stack vs heap** objects, and the importance of explicit **destructor behavior**.

---

### 2.  Moar brainz! (`ex01`)

- Created a **zombie horde** using dynamic memory allocation.  
  _Function: `Zombie* zombieHorde(int N, std::string name);`_

- Practiced:
  - Creating arrays with `new[]`
  - Managing memory responsibly with `delete[]`

- Focused on **object lifetime** and **bulk initialization**.

---

### 3.  HI THIS IS BRAIN (`ex02`)

- Explored **pointers vs references** using a simple string variable.
  - Printed out memory addresses and values using both methods.

- Clarified:
  - How **references differ from pointers**
  - How both access and manipulate memory

- Demystified basic C++ **memory access** concepts.

---

### 4.  Unnecessary violence (`ex03`)

- Built a `Weapon` class with `getType()` and `setType()`.

- Created two `Human` classes:
  - `HumanA` → always has a weapon (passed by **reference**)
  - `HumanB` → may or may not have a weapon (assigned via **pointer**)

- Compared:
  - Reference vs pointer behavior in class composition
  - Constructor initialization vs deferred assignment

---

### 5.  Sed is for losers (`ex04`)

- Built a basic **search-and-replace** utility for text files.
  - Reads input from file, replaces all occurrences of `s1` with `s2`, and writes to `<filename>.replace`

- Avoided `std::string::replace()` — instead used manual **string traversal & substitution**.

- Practiced:
  - File handling using `std::ifstream` and `std::ofstream`
  - Robust error handling for file I/O

---

### 6.  Harl 2.0 (`ex05`)

- Created a `Harl` class that prints out predefined messages based on **log level**:
  - `"DEBUG"`, `"INFO"`, `"WARNING"`, `"ERROR"`

- Implemented `Harl::complain(std::string level)` to call the correct function using **pointers to member functions**.
  - _No if/else chains allowed!_

- Learned:
  - How to use **function pointer arrays**
  - Clean, scalable control flow based on input commands

---


