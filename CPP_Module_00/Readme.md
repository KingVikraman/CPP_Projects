##  CPP Module 00

### 1.  Megaphone

• Learned how to include the C++ Standard Input/Output stream using `#include <iostream>`.  
  _(No more `printf` — hello `std::cout`!)_

• Usage of key C++ operators and features:  
  • `<<` → for printing to the console  
  • `std::endl` → for newline and flushing the output buffer  
  • `std::toupper()` → for transforming characters to uppercase  
  • `for` loops → used as nested loops (bye bye `while` )

• Compiling with the flag `-std=c++98` to stick to old-school C++ rules.

---

### 2.  Phonebook

• Learned about **Classes and Objects**:  
  • What classes are and how to create objects that store individual data.

• Mastered **Access Specifiers**:  
  • `private` and `public` — used to control visibility and protect data.  
  • Introduced to the concept of **Encapsulation** (locking variables in a vault ).

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

### 3.  Dream Job

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
