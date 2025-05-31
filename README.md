# 🎮 Number Guessing Game

A simple console-based number guessing game written in modern C++ (C++20). The computer randomly chooses a number between 1 and 100, and the player tries to guess it with hints provided after each guess.

---

## ✨ Features

- Random number generation between 1 and 100
- User input with feedback: "too high" or "too low"
- Unlimited attempts until the correct guess
- Clean and beginner-friendly codebase

---

## 🧰 Requirements

- C++20 compatible compiler (e.g. GCC 10+, Clang 11+, MSVC 2019+)
- CMake (optional, for cross-platform builds)
- Visual Studio 2022 or any modern C++ IDE

---

## 🚀 How to Build and Run

### 🔵 Using Visual Studio (Windows)

1. Clone the repository:
   ```bash
   git clone https://github.com/ROSSARKO/NumberGuessingGame.git
   cd NumberGuessingGame
   ```

2. Open `NumberGuessingGame.sln` in Visual Studio 2022  
3. Build the project: `Build -> Build Solution (Ctrl+Shift+B)`  
4. Run without debugging: `Debug -> Start Without Debugging (Ctrl+F5)`

---

### 🟢 Using CMake (Cross-platform)

> CMakeLists.txt must be created manually (see below)

1. Clone the repository:
   ```bash
   git clone https://github.com/ROSSARKO/NumberGuessingGame.git
   cd NumberGuessingGame
   ```

2. Create a build directory and run CMake:
   ```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .
   ```

3. Run the program:
   ```bash
   ./NumberGuessingGame
   ```

---

## 📄 Example Output

```text
Welcome to the Number Guessing Game!
I'm thinking of a number between 1 and 100. Can you guess it?

Enter your guess: 50
Too high!

Enter your guess: 25
Too low!

Enter your guess: 37
Congratulations! You guessed the number in 3 tries!
```

---

## 👤 Author

- GitHub: [ROSSARKO](https://github.com/ROSSARKO)
- Language: C++

---

## ⚖️ License

This project is released under the MIT License.  
You are free to use, modify, and distribute it for learning and non-commercial purposes.
