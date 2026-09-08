# c-beginner-programs

## 📖 Overview
This repository contains beginner-friendly C console projects for practicing core programming concepts through small and practical exercises.

Focus areas:
- Input and output
- Conditional logic (`if/else`, `switch`)
- Loops
- Basic calculations and validation

---

## ⚙️ How This Repository Works
- Each `.c` file is an independent mini project.
- Every project has a matching explanation file in [`project-readmes/`](./project-readmes/).
- Each project README follows the same format:
  - Overview
  - How It Works
  - Requirements
  - Compile & Run

---

## 📂 Projects and Detailed READMEs
1. [Voting Eligibility Checker](./project-readmes/Voting_Eligibility_Checker.md)

---

## 🧱 Consistent Project Structure

```text
repo-root/
├── README.md
├── LICENSE
├── <Program_Name>.c
└── project-readmes/
    ├── <Program_Name>.md
    └── ...
```

Consistency rules:
- Keep source file names in `Pascal_Case_With_Underscores`.
- Keep project README file names matching source names.
- Add each new project link in the root README project list.
- Keep the same 4-section template in every project README.

---

## ➕ Adding a New Project (Checklist)
1. Add a new source file (`.c` in this repo).
2. Add its documentation in `project-readmes/<Program_Name>.md`.
3. Follow the standard 4-section README format.
4. Add the project link to the root README list.

---

## 🛠️ Requirements
- A C compiler (for example, `gcc`)
- Terminal / command prompt

---

## ▶️ How to Run Any Project
1. Clone the repository:
   ```bash
   git clone https://github.com/yash-kumar-18/c-beginner-programs.git
   cd c-beginner-programs
   ```
2. Compile a project (example: `Voting_Eligibility_Checker.c`):
   ```bash
   gcc Voting_Eligibility_Checker.c -o Voting_Eligibility_Checker
   ```
3. Run it:
   ```bash
   ./Voting_Eligibility_Checker
   ```

> Repeat the same compile-and-run process for any other `.c` file.

---

## 📄 License
This project is licensed under the **MIT License**.  
See [`LICENSE`](./LICENSE) for full details.

---

## 🎯 Goal
Build strong C basics with project-based learning.
