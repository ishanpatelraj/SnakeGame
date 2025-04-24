# SnakeGame
A Snake Game made completely using C++

Sure! Here's a neatly formatted GitHub README for your Snake Game project using Markdown with some enhanced styling using HTML for better headings and readability:


---

<h1 align="center" style="color: green;">🐍 Snake Game in C++</h1>

<p align="center">
    A simple yet interactive Snake Game implemented using <b>Object-Oriented Programming</b> in <b>C++</b>, designed for the Windows console with real-time arrow key control and basic ASCII graphics.
</p>

---

## 🎮 Features

- Real-time snake movement with arrow key control
- Console-based UI with smooth visuals
- Food generation and score tracking
- Collision detection with wall and self
- Game over prompt and score display
- Clean and modular structure using C++ OOP

---

## 🧠 OOP Concepts Used

| Concept         | Description                                            | File(s) Involved         |
|----------------|--------------------------------------------------------|--------------------------|
| *Encapsulation* | Wrapping of snake, food, and game logic in classes | Snake.h/cpp, Food.h/cpp, Game.h/cpp |
| *Abstraction*   | Hiding implementation details of movement and logic | Same as above            |
| *Inheritance*   | (If applicable in extended versions)                | (Not used in current basic version) |
| *Polymorphism*  | Operator overloading in Point class      | Point.h/cpp        |

---

## ⚙ How to Run

1. Open your terminal or PowerShell.
2. Navigate to the folder containing the .cpp files.
3. Compile with:
   bash
   g++ main.cpp Game.cpp Snake.cpp Food.cpp -o SnakeGame

4. Run the game:

./SnakeGame




---

📂 Project Structure

SnakeGame/
├── main.cpp
├── Game.cpp / Game.h
├── Snake.cpp / Snake.h
├── Food.cpp / Food.h
├── Point.h
├── utils.h / utils.cpp
└── README.md


---
🧾 Flowchart

![Gameplay Screenshot](Resources/flow_chart.png)


---

🧾 Screenshots
<p align="center">
  <img src="Resources/Screenshot_2025-04-05_150044.png" alt="Game Start" width="200" length="500"/>
  <img src="Resources/Screenshot_2025-04-12_002552.png" alt="Food Collected" width="200"/>
  <img src="Resources/Screenshot_2025-04-12_002650.png" alt="Near Collision" width="200"/>
</p>

<p align="center">
  <img src="Resources/Screenshot_2025-04-12_003155.png" alt="Game Over" width="200"/>
  <img src="Resources/Screenshot_2025-04-12_003320.png" alt="Final Score" width="200"/>
</p>


---

📌 Future Improvements

Add sound effects using windows.h and Beep()

Implement leaderboard for multiple users

Dynamic screen resizing support

Pause and resume game feature

Add color to snake and UI for better visuals



---

📘 License

This project is open-source and licensed under the MIT License.


---

<h4 align="center">Made with 💻 in C++</h4>

---
