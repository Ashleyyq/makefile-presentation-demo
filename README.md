# Make and Makefile in C - Presentation Demo

This repository contains the practical demonstration examples for the "Make and Makefile in C" presentation by Ran Fukazawa and Yongqi (Ashley) Ou for CS 5008.

## Overview

This project demonstrates the use of Make and Makefiles for C project automation. It serves as a practical example to the presentation slides on Makefile concepts and best practices.

## Project Structure

```
project/
├── bin/         # Directory for compiled executable files
├── include/     # Header files
├── obj/         # Object files generated during compilation
├── src/         # Source code files
└── Makefile     # The main Makefile that automates the build process
```

## Makefile Features

This Makefile demonstrates several important concepts:

- **Automatic Variables**: Using variables like `CC`, `CFLAGS`, and `OBJS` to make the Makefile more maintainable
- **Pattern Rules**: Using pattern rules (%) to simplify compilation instructions
- **Directory Structure**: Organizing a project with separate directories for source, headers, objects, and binaries
- **Phony Targets**: Implementation of targets like `clean` that don't represent actual files
- **Dependency Management**: Properly tracking dependencies to ensure efficient rebuilds

## How to Use

Here are some Common Make Commands:

- `make`: Build the project
- `make run`: Build and execute the program
- `make clean`: Remove compiled files
- `make DEBUG=1`: Build with debugging flags enabled

## Learning Resources

For more information about Make and Makefiles:

- [GNU Make Manual](https://www.gnu.org/software/make/manual/make.html)
- [Makefile Tutorial](https://makefiletutorial.com/)

## Authors

- Ran Fukazawa
- Yongqi (Ashley) Ou

## Reference

[1] Schmidt Sciences, “Stuart Feldman,” [Online]. Available: https://www.schmidtsciences.org/person/stuart-feldman/. [Accessed: Apr. 15, 2025].
[2] A. Maxwell, "Makefile Tutorial," Colby College, 2018. [Online]. Available: https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/. [Accessed: Apr. 4, 2025].
[3] Coding Explorations, "From Novice to Expert: A Guide to Advanced Makefiles," Coding Explorations Blog, 2023. [Online]. Available: https://www.codingexplorations.com/blog/from-novice-to-expert-a-guide-to-advanced-makefiles. [Accessed: Apr. 4, 2025].
[4] K. Siig, "Using Makefile Wildcards," Earthly Blog, 2023. [Online]. Available: https://earthly.dev/blog/using-makefile-wildcards/. [Accessed: Apr. 4, 2025].
[5] Free Software Foundation, "Wildcard Function," GNU Make Manual, 2023. [Online]. Available: https://www.gnu.org/software/make/manual/html_node/Wildcard-Function.html. [Accessed: Apr. 4, 2025].
[6] Chase Lambert, "Conditional Part of Makefiles," Makefile Tutorial, 2021. [Online]. Available: https://makefiletutorial.com/#conditional-part-of-makefiles. [Accessed: Apr. 4, 2025].
[7] Free Software Foundation, "GNU Make Manual," GNU Project, 2022. [Online]. Available: https://www.gnu.org/software/make/manual/make.html. [Accessed: Apr. 4, 2025].
[8] S. Patil, "What is a Makefile and How Does it Work?," opensource.com, Aug. 2018. [Online]. Available: https://opensource.com/article/18/8/what-how-makefile. [Accessed: Apr. 4, 2025].
[9] OSDev Wiki, "Makefile," OSDev.org, Jul. 2023. [Online]. Available: https://wiki.osdev.org/Makefile. [Accessed: Apr. 4, 2025].
[10] A. Das, "Makefiles from the Ground Up," Medium, May 2021. [Online]. Available: https://medium.com/@avik.das/makefiles-from-the-ground-up-cf3c1bb52f2. [Accessed: Apr. 4, 2025].
[11] C. Wellons, "Auto-generate Deps for Make with GCC," nullprogram.com, Aug. 2017. [Online]. Available: https://nullprogram.com/blog/2017/08/20/. [Accessed: Apr. 4, 2025].
