# Student Portal

Student Portal is a simple C++ project developed to demonstrate basic Git and GitHub workflow while gradually improving a small student management application.

## Project Purpose

The project represents a legacy student portal that is gradually improved through multiple Git tasks.

The application contains functionality related to:

- Student Login
- Student Profile
- Student Dashboard
- Portal Settings
- Notifications

The purpose of this project is to demonstrate meaningful source-code changes and practical Git and GitHub operations. It is not intended to be a complete production-level student portal.

## Requirements

Before working with the project, install the following software:

- Git
- A C++ compiler such as `g++`
- Git Bash or another terminal
- A text editor such as Visual Studio Code or Notepad

## Setup

Follow the steps below to set up the project locally.

### 1. Clone the Repository

Clone the GitHub repository using:

```bash
git clone https://github.com/ShreyaDebnath31/2026201052_A1.git
```

### 2. Move into the Project Directory

Navigate to the cloned repository:

```bash
cd 2026201052_A1
```

### 3. Check the Repository Status

Verify the repository status:

```bash
git status
```

## Project Structure

The main source files are organized inside the `src` directory.

The primary application source file is located at:

```text
src/code/student_portal.cpp
```

Additional feature source files are located in the `src` directory.

## Build / Compilation

From the project root directory, compile the application using:

```bash
g++ src/code/student_portal.cpp -o student-portal
```

If the compilation is successful, an executable named `student-portal` will be created in the project root directory.

## Code Execution

After successful compilation, run the application using:

```bash
./student-portal
```

On Windows, the generated executable can also be run as:

```bash
./student-portal.exe
```

## Complete Setup and Execution

For a fresh clone, the basic setup and execution sequence is:

```bash
git clone https://github.com/ShreyaDebnath31/2026201052_A1.git
cd 2026201052_A1
git status
g++ src/code/student_portal.cpp -o student-portal
./student-portal
```

## Git Workflow

This project uses Git and GitHub to demonstrate practical version-control operations, including:

- Creating and working with feature branches
- Making incremental commits
- Using descriptive commit messages
- Merging feature branches
- Resolving merge conflicts
- Renaming and moving files
- Deleting and restoring files
- Maintaining Git history
- Recovering changes using Git tools
- Creating an annotated release tag

## Troubleshooting

### Git Command Is Not Recognized

Make sure Git is installed correctly and is available in the system PATH.

Verify the installation using:

```bash
git --version
```

### C++ Compiler Is Not Recognized

Make sure a C++ compiler such as `g++` is installed and available in the system PATH.

Verify the compiler installation using:

```bash
g++ --version
```

### Compilation Fails

Make sure you are in the project root directory:

```bash
cd 2026201052_A1
```

Then compile the source file using:

```bash
g++ src/code/student_portal.cpp -o student-portal
```

### Repository Shows Unexpected Files

Check the current repository status:

```bash
git status
```

Also check the `.gitignore` file to make sure generated build files and other unnecessary files are not being tracked.

## Repository

GitHub Repository:

https://github.com/ShreyaDebnath31/2026201052_A1