# Practice 05 Submission Instructions (GitHub Classroom + Codespaces)

You will complete this practice through **GitHub Classroom** and work inside a **Codespace**.
👉 \[Insert GitHub Classroom Assignment Link Here]

### Workflow

1. Accept the GitHub Classroom assignment using the link above.

   * This will create your private repository named similar to this:
     `https://github.com/Seward-Classes/practice-05-username`
2. Open the repository in **Codespaces** (recommended).
3. Work inside Codespaces and **commit + sync often** to make sure your progress is saved to GitHub.

   * Use **Commit** when you’ve made changes.
   * Use **Sync** (push) to ensure the commits are stored on GitHub.

### Submission

* On your end, you must **submit the link to your repository in Blackboard** for grading.
* Example: `https://github.com/Seward-Classes/practice-05-username`

### File Naming

* Each program should use the exact file names below.
* All files must be placed **at the root of your repository** (not in a subfolder).
* Example: `/problem1a.cpp`

---

# Prompts

Do **A or B from each group** (you will complete 3 programs total).

---

## Group 1: Default Parameters

### **Prompt 1a — Temperature Converter**

**File:** `problem1a.cpp`

**Specification:**
Write a single function:

```cpp
double convertTemperature(double temp, char scale = 'F');
```

* If `scale == 'F'`: Converts Celsius → Fahrenheit
* If `scale == 'C'`: Converts Fahrenheit → Celsius

The menu should let the user choose conversion direction. Both paths call the same function.

**Example Run:**

```
1. Convert Celsius to Fahrenheit
2. Convert Fahrenheit to Celsius
Choose an option: 1
Enter temperature: 100
Converted: 212.00°F
```

```
1. Convert Celsius to Fahrenheit
2. Convert Fahrenheit to Celsius
Choose an option: 2
Enter temperature: 212
Converted: 100.00°C
```

---

### **Prompt 1b — Greet System**

**File:** `problem1b.cpp`

**Specification:**
Write a function:

```cpp
void greet(std::string name = "Guest", std::string prefix = "Hello");
```

Menu options:

1. Default greeting (`Hello, Guest!`)
2. Greet by name (user enters name, prefix stays "Hello")
3. Custom greeting (user enters name + custom prefix)

**Example Run:**

```
1. Default Greeting
2. Greet by Name
3. Custom Greeting
Choose an option: 2
Enter name: Alice
Hello, Alice!
```

```
1. Default Greeting
2. Greet by Name
3. Custom Greeting
Choose an option: 3
Enter greeting prefix: Welcome
Enter name: Bob
Welcome, Bob!
```

---

## Group 2: Templates

### **Prompt 2a — Calculator**

**File:** `problem2a.cpp`

**Specification:**
Write a templated function `calculate<T>` that works for both `int` and `double`.

* If user enters only whole numbers, use `int`.
* If user enters decimals, use `double`.

**Example Run:**

```
Enter first number: 5
Enter second number: 2
Enter operation (+, -, *, /): *
Result: 10
```

```
Enter first number: 5.5
Enter second number: 2
Enter operation (+, -, *, /): *
Result: 11.00
```

---

### **Prompt 2b — Max Finder**

**File:** `problem2b.cpp`

**Specification:**
Write a templated function:

```cpp
template <typename T>
T findMax(T a, T b, T c);
```

Menu lets user pick comparing numbers or strings.

**Example Run:**

```
Compare (1) Numbers or (2) Strings? 1
Enter first value: 10
Enter second value: 25
Enter third value: 15
Max value: 25
```

```
Compare (1) Numbers or (2) Strings? 2
Enter first value: apple
Enter second value: banana
Enter third value: cherry
Max value: cherry
```

---

## Group 3: STL Containers

### **Prompt 3a — Task Manager (std::list)**

**File:** `problem3a.cpp`

**Specification:**
Use `std::list<std::string>` to manage tasks with options:

1. Add a task
2. Remove a task
3. Show tasks
4. Exit

**Example Run:**

```
1. Add Task
2. Remove Task
3. Show Tasks
4. Exit
Choice: 1
Enter task: Finish C++ assignment
Task added!
```

```
1. Add Task
2. Remove Task
3. Show Tasks
4. Exit
Choice: 3
Tasks:
1. Finish C++ assignment
```

```
1. Add Task
2. Remove Task
3. Show Tasks
4. Exit
Choice: 2
Enter task number to remove: 1
Task removed!
```

---

### **Prompt 3b — Undoable Text Editor (std::deque)**

**File:** `problem3b.cpp`

**Specification:**
Use `std::deque<std::string>` to support undo. Options:

1. Add text
2. Undo last edit
3. Show content
4. Exit

**Example Run:**

```
1. Add Text
2. Undo Last Edit
3. Show Content
4. Exit
Choice: 1
Enter text: Hello
```

```
1. Add Text
2. Undo Last Edit
3. Show Content
4. Exit
Choice: 1
Enter text: world!
```

```
1. Add Text
2. Undo Last Edit
3. Show Content
4. Exit
Choice: 3
Current Content: Hello world!
```

```
1. Add Text
2. Undo Last Edit
3. Show Content
4. Exit
Choice: 2
Undo successful!
```
