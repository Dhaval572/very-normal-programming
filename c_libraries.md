# C Standard Libraries Documentation

## 1. Standard Input/Output (`stdio.h`)
- **Purpose:** Handles input/output operations.
- **Common Functions:**
  - `printf()`, `scanf()` – Print and read input.
  - `fopen()`, `fclose()` – File handling.
  - `fprintf()`, `fscanf()` – Formatted file I/O.

---

## 2. Standard Library (`stdlib.h`)
- **Purpose:** Memory management, conversion, process control.
- **Common Functions:**
  - `malloc()`, `calloc()`, `free()` – Dynamic memory allocation.
  - `rand()`, `srand()` – Random number generation.
  - `exit()`, `atoi()`, `qsort()`, `bsearch()` – Process control, sorting.

---

## 3. String Handling (`string.h`)
- **Purpose:** String manipulation functions.
- **Common Functions:**
  - `strcpy()`, `strncpy()` – Copy strings.
  - `strlen()` – Get string length.
  - `strcmp()`, `strcat()`, `strstr()` – Compare and concatenate strings.

---

## 4. Math Library (`math.h`)
- **Purpose:** Mathematical operations.
- **Common Functions:**
  - `sqrt()`, `pow()` – Square root and power.
  - `sin()`, `cos()`, `tan()` – Trigonometric functions.
  - `log()`, `ceil()`, `floor()` – Logarithm and rounding.

---

## 5. Time Handling (`time.h`)
- **Purpose:** Time and date operations.
- **Common Functions:**
  - `time()`, `clock()` – Get system time.
  - `difftime()` – Calculate time difference.
  - `sleep()`, `strftime()` – Sleep and format time.

---

## 6. Character Handling (`ctype.h`)
- **Purpose:** Character classification and conversion.
- **Common Functions:**
  - `isdigit()`, `isalpha()`, `isalnum()` – Check character types.
  - `tolower()`, `toupper()` – Convert character case.

---

## 7. File Control (`fcntl.h`)
- **Purpose:** Low-level file operations.
- **Common Functions:**
  - `open()`, `close()`, `fcntl()` – File descriptor control.
  - `read()`, `write()` – Read and write operations.

---

## 8. Signal Handling (`signal.h`)
- **Purpose:** Manage system signals.
- **Common Functions:**
  - `signal()`, `raise()`, `kill()` – Handle and send signals.
  - `alarm()`, `pause()` – Set alarms and wait.

---

## 9. Error Handling (`errno.h`)
- **Purpose:** Error reporting in system calls.
- **Common Functions:**
  - `perror()` – Print error message.
  - `strerror()` – Convert error code to message.
  - `errno` – Global error number.

---

## 10. Threading (`pthread.h`) *(POSIX Threads - Unix/Linux)*
- **Purpose:** Multithreading support.
- **Common Functions:**
  - `pthread_create()`, `pthread_join()` – Create and manage threads.
  - `pthread_mutex_lock()`, `pthread_mutex_unlock()` – Synchronization.

---

### Conclusion
These libraries form the core of C programming, providing essential utilities for handling I/O, memory, files, time, and threading. Mastering these libraries will make development more efficient and powerful.
