# 🧩 COC Sudoku Grid Validator

A **C programming capstone project** from **Clash of Coders**, built to validate completed 9×9 Sudoku grids using loops, functions, and conditional logic.  
Demonstrates matrix traversal, modular design, and analytical reasoning in C.

---

## 🎓 What Is a Capstone Project?

A **Capstone Project** is the final hands-on task that demonstrates everything you’ve learned during your course.  
It tests your ability to apply multiple concepts — from loops and arrays to functions and logic — in a single, real-world problem.

In this project, you apply:
- **Nested loops** to traverse a matrix  
- **Functions** for modular design  
- **If–else statements** for logical validation  

---

## 🧱 Project Description

```
 Name        : coc_sudoku_grid_validator.c
 Author      : Sachin
 Description : Sudoku Grid Validator in C
```

This program checks whether a **completed 9×9 Sudoku grid** is a valid solution.

It follows the **three Sudoku rules**:

1. Each **row** must contain the numbers `1–9` exactly once.  
2. Each **column** must contain the numbers `1–9` exactly once.  
3. Each **3×3 subgrid** must contain the numbers `1–9` exactly once.  

If all three conditions are satisfied, the program prints:
```
VALID SOLUTION
```
Otherwise, it prints:
```
INVALID SOLUTION
```

---

## 🧠 Key Concepts Used

- **2D Arrays** — for Sudoku grid storage  
- **Nested Loops** — for checking rows, columns, and boxes  
- **Functions** — (`check_rows()`, `check_columns()`, `check_subgrids()`) for modular design  
- **If–Else Logic** — to determine validity  
- **Pointers (by reference)** — arrays are passed to functions efficiently  

---

## ⚙️ How the Program Works

| Function | Description |
|-----------|--------------|
| `check_rows()` | Loops through each row and verifies that all digits from 1–9 appear exactly once. |
| `check_columns()` | Loops through each column and checks the same condition. |
| `check_subgrids()` | Uses four nested loops to validate all 3×3 subgrids. |
| `main()` | Calls all three functions and prints the final verdict (`VALID` or `INVALID`). |

---

## 💻 Compilation and Execution

### 🔧 Compile Command

**Linux / macOS**
```bash
gcc -std=c11 -Wall -Wextra coc_sudoku_grid_validator.c -o coc_sudoku_grid_validator
```

**Windows (MinGW)**
```bash
gcc -std=c11 -Wall -Wextra coc_sudoku_grid_validator.c -o coc_sudoku_grid_validator.exe
```

### ▶️ Run Command

**Linux / macOS**
```bash
./coc_sudoku_grid_validator
```

**Windows**
```bash
coc_sudoku_grid_validator.exe
```

---

## 🧩 Example Output

### ✅ Valid Sudoku Grid
```
VALID SOLUTION
```

### ❌ Invalid Sudoku Grid
```
INVALID SOLUTION
```
