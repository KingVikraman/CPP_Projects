# CPP Projects (00 — 04)

This is where my C++ journey begins.  
This repository stores my progress, understanding, and learnings throughout the 42 core C++ modules.  
Each project marks a new milestone in my grasp of the language and its paradigms.

---

## 📦 CPP Module 00

### 1. 🗣️ Megaphone

• Learned how to include the C++ Standard Input/Output stream using `#include <iostream>`.  
  _(No more `printf` — hello `std::cout`!)_

• Usage of key C++ operators and features:  
  • `<<` → for printing to the console  
  • `std::endl` → for newline and flushing the output buffer  
  • `std::toupper()` → for transforming characters to uppercase  
  • `for` loops → used as nested loops (bye bye `while` 👋)

• Compiling with the flag `-std=c++98` to stick to old-school C++ rules.

---

### 2. ☎️ Phonebook

• Learned about **Classes and Objects**:  
  • What classes are and how to create objects that store individual data.

• Mastered **Access Specifiers**:  
  • `private` and `public` — used to control visibility and protect data.  
  • Introduced to the concept of **Encapsulation** (locking variables in a vault 🔐).

• Understood file structure:  
  • Splitting declarations (`.hpp`) and definitions (`.cpp`) — industry practice!

• Used `std::string` and `std::getline()` — a modern, safer alternative to `char[]`.

• Implemented **Fixed-Size Object Arrays**:  
  • Built an array of 8 contacts with index tracking and overwriting logic when full.

• Worked with **Multiple Classes**:  
  • Created `Contact` and `PhoneBook` classes and established interaction between them.

• Practiced **Input Validation**:  
  • Prevented crashes on invalid index entries using proper `std::cin` management.

---

### 3. 💼 Dream Job

• Learned to use **static class members** to share data across all instances.

• Built and used **static methods** to access global stats (e.g., number of accounts).

• Applied **constructors and destructors** to log account creation/destruction.

• Used **initialization lists** to efficiently assign values to private members.

• Built a custom **timestamp logger** using `<ctime>` for accurate operation logging.

• Practiced **operation-based logging** (deposit, withdrawal, status updates).

• Implemented **error handling** for withdrawals (e.g., `withdrawal:refused`).

• Used **class-level aggregation logic** to keep track of:  
  • Total accounts  
  • Total balance  
  • Total deposits/withdrawals

---

---
## 🚀 CPP Module 01

This module dives deeper into memory handling, object-oriented design, and dynamic behavior in C++.  
It focuses on **pointers**, **references**, **memory allocation**, and **file handling**, while reinforcing core OOP principles.

---

### 1. 🧟 BraiiiiiiinnnzzzZ (`ex00`)

- Built a `Zombie` class with an `announce()` method.  
  _Practiced **class creation**, **member functions**, and **destructors**._

- Created zombies via:
  - `newZombie()` → dynamically allocates on **heap**
  - `randomChump()` → allocates on **stack**

- Learned the trade-offs between **stack vs heap** objects, and the importance of explicit **destructor behavior**.

---

### 2. 🧟‍♂️ Moar brainz! (`ex01`)

- Created a **zombie horde** using dynamic memory allocation.  
  _Function: `Zombie* zombieHorde(int N, std::string name);`_

- Practiced:
  - Creating arrays with `new[]`
  - Managing memory responsibly with `delete[]`

- Focused on **object lifetime** and **bulk initialization**.

---

### 3. 🧠 HI THIS IS BRAIN (`ex02`)

- Explored **pointers vs references** using a simple string variable.
  - Printed out memory addresses and values using both methods.

- Clarified:
  - How **references differ from pointers**
  - How both access and manipulate memory

- Demystified basic C++ **memory access** concepts.

---

### 4. ⚔️ Unnecessary violence (`ex03`)

- Built a `Weapon` class with `getType()` and `setType()`.

- Created two `Human` classes:
  - `HumanA` → always has a weapon (passed by **reference**)
  - `HumanB` → may or may not have a weapon (assigned via **pointer**)

- Compared:
  - Reference vs pointer behavior in class composition
  - Constructor initialization vs deferred assignment

---

### 5. 📝 Sed is for losers (`ex04`)

- Built a basic **search-and-replace** utility for text files.
  - Reads input from file, replaces all occurrences of `s1` with `s2`, and writes to `<filename>.replace`

- Avoided `std::string::replace()` — instead used manual **string traversal & substitution**.

- Practiced:
  - File handling using `std::ifstream` and `std::ofstream`
  - Robust error handling for file I/O

---

### 6. 🤬 Harl 2.0 (`ex05`)

- Created a `Harl` class that prints out predefined messages based on **log level**:
  - `"DEBUG"`, `"INFO"`, `"WARNING"`, `"ERROR"`

- Implemented `Harl::complain(std::string level)` to call the correct function using **pointers to member functions**.
  - _No if/else chains allowed!_

- Learned:
  - How to use **function pointer arrays**
  - Clean, scalable control flow based on input commands

---


