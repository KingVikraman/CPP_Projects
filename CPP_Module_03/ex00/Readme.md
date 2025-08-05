# CPP Module 03 – ex00  
### Aaaaaaaand... OPEN!

This exercise introduces the `Bureaucrat` class and focuses on mastering:
- Encapsulation
- Canonical form (Orthodox)
- Exception handling
- Operator overloading

---

##  1. Understanding the Project

You are required to build a class called:

### `Bur`

| Feature            | Details                                                                        |
|--------------------|--------------------------------------------------------------------------------|
| `name`             | `const std::string`, cannot be changed after construction                      |
| `grade`            | `int`, must be in range **1 (highest)** to **150 (lowest)**                    |
| Canonical form     | Default constructor, copy constructor, assignment operator, destructor         |
| Grade validation   | If out of range, throw custom exceptions                                       |
| Operator `<<`      | Stream insertion for pretty printing                                           |
| `incrementGrade()` | Moves grade **closer to 1** (higher authority)                                 |
| `decrementGrade()` | Moves grade **closer to 150** (lower authority)                                |
| Custom exceptions  | `GradeTooHighException`, `GradeTooLowException` inherited from `std::exception`|

---

##  2. Prerequisites – What You Should Already Know

Before starting this project, you should be familiar with:

- How to define and implement a class in C++
- How to implement:
  - Constructors (default and parameterized)
  - Destructor
  - Copy constructor
  - Copy assignment operator
- How to throw and catch exceptions in C++
- How to overload the `<<` operator for streams

---

##  3. Thought Process / Plan of Execution

| Step | Task                                                   |
|------|--------------------------------------------------------|
| 1️    | Create the header file `Bureaucrat.hpp`                |
| 2️    | Declare private members: `name` and `grade`            |
| 3️    | Add all public methods, including canonical functions  |
| 4️    | Declare exception classes inside `Bureaucrat`          |
| 5️    | Implement the `.cpp` file step-by-step                 |
| 6️    | Write a `main.cpp` file to test your class thoroughly  |
| 7️    | Add operator overloading for `<<`                      |
| 8️    | Stress-test your grade logic and exception handling    |

---

##  4. Key Rules to Remember

| Rule                     | Explanation                                                   |
|--------------------------|---------------------------------------------------------------|
|  `name` is `const`       | You cannot modify the name after the object is constructed    |
|  Grade range is strict   | 1 is the **highest** grade, 150 is the **lowest**             |
|  Throw exceptions        | When the grade goes out of range                              |
|  Use canonical form      | Must implement all 4 special functions                        |
|  Keep attributes private | Only access them through `getName()` and `getGrade()`         |

---

##  Deliverables

- `Bureaucrat.hpp` — header file with full declarations
- `Bureaucrat.cpp` — implementation of all methods
- `main.cpp` — test file demonstrating proper behavior and exception handling
