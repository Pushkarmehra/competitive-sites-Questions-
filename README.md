# 🚀 LeetCode Solutions by Pushkar Mehra

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Language: C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![LeetCode](https://img.shields.io/badge/LeetCode-Solutions-orange.svg)](https://leetcode.com/)
[![GitHub followers](https://img.shields.io/github/followers/Pushkarmehra?style=social)](https://github.com/Pushkarmehra)

> A comprehensive collection of optimized LeetCode problem solutions with detailed explanations and multiple approaches by a passionate developer who loves creating amazing experiences and exploring new technologies!

---

## 📚 Table of Contents

- [Problems Solved](#-problems-solved)
- [Getting Started](#-getting-started)
- [Solution Structure](#-solution-structure)
- [Complexity Analysis](#-complexity-analysis)
- [Contributing](#-contributing)
- [Contact](#-contact)

---

## 🎯 Problems Solved

| # | Problem | Difficulty | Topics | Solution |
|---|---------|------------|--------|----------|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | ![Easy](https://img.shields.io/badge/Easy-brightgreen) | Array, Hash Table | [C++](./solutions/001_two_sum.cpp) |
| 9 | [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | ![Easy](https://img.shields.io/badge/Easy-brightgreen) | Math | [C++](./solutions/009_palindrome_number.cpp) |
| 1957 | [Delete Characters to Make Fancy String](https://leetcode.com/problems/delete-characters-to-make-fancy-string/) | ![Easy](https://img.shields.io/badge/Easy-brightgreen) | String | [C++](./solutions/1957_fancy_string.cpp) |

---

## 🚀 Getting Started

### Prerequisites
- C++ compiler (GCC 7.0+ or Clang 5.0+)
- Basic understanding of data structures and algorithms

### Quick Start
```bash
# Clone the repository
git clone https://github.com/Pushkarmehra/leetcode-solutions.git

# Navigate to the project directory
cd leetcode-solutions

# Compile and run a solution
g++ -o solution solutions/001_two_sum.cpp
./solution
```

---

## 🏗️ Solution Structure

Each solution follows a consistent structure:

```cpp
// Problem description and constraints
class Solution {
public:
    // Optimized solution - O(best_time) time, O(best_space) space
    ReturnType optimizedSolution(parameters) {
        // Implementation
    }
    
    // Alternative approach (if applicable)
    ReturnType alternativeSolution(parameters) {
        // Implementation
    }
};

// Test cases and examples included as comments
```

---

## 📊 Complexity Analysis

### Problem #1: Two Sum
| Approach | Time Complexity | Space Complexity | Description |
|----------|----------------|------------------|-------------|
| Brute Force | O(n²) | O(1) | Nested loops to check all pairs |
| Hash Map | O(n) | O(n) | Single pass with complement lookup |

**Recommended:** Hash Map approach for optimal performance

### Problem #9: Palindrome Number
| Approach | Time Complexity | Space Complexity | Description |
|----------|----------------|------------------|-------------|
| String Conversion | O(log n) | O(log n) | Convert to string and compare |
| Integer Reversal | O(log n) | O(1) | Reverse integer and compare with original |

**Recommended:** Integer Reversal approach for optimal space complexity

### Problem #1957: Delete Characters to Make Fancy String
| Approach | Time Complexity | Space Complexity | Description |
|----------|----------------|------------------|-------------|
| Direct Check | O(n) | O(n) | Check last 2 characters before adding |
| Counter Method | O(n) | O(n) | Track consecutive character count |

**Recommended:** Direct Check approach for cleaner logic

---

## 🎨 Key Features

- ✅ **Multiple Approaches** - Brute force and optimized solutions
- ✅ **Detailed Comments** - Clear explanations for each step
- ✅ **Complexity Analysis** - Time and space complexity for each approach
- ✅ **Test Cases** - Example inputs and expected outputs
- ✅ **Clean Code** - Following C++ best practices
- ✅ **Memory Optimization** - Efficient memory usage where applicable

---

## 📈 Progress Tracking

```
Total Problems: 3
├── Easy: 3 ████████████████████ 100%
├── Medium: 0 ░░░░░░░░░░░░░░░░░░░░ 0%
└── Hard: 0 ░░░░░░░░░░░░░░░░░░░░ 0%

Topics Covered:
├── Array ████████████████████ 1
├── Hash Table ████████████████████ 1  
├── String ████████████████████ 1
├── Math ████████████████████ 1
└── Two Pointers ░░░░░░░░░░░░░░░░░░░░ 0
```

---

## 🛠️ Tools & Technologies

- **Language:** C++17
- **Compiler:** GCC/Clang
- **IDE:** VS Code, CLion
- **Version Control:** Git
- **Documentation:** Markdown

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. **Fork** the repository
2. **Create** a feature branch (`git checkout -b feature/new-solution`)
3. **Add** your solution with proper documentation
4. **Commit** your changes (`git commit -m 'Add solution for problem XYZ'`)
5. **Push** to the branch (`git push origin feature/new-solution`)
6. **Open** a Pull Request

### Contribution Guidelines
- Follow the existing code structure
- Include complexity analysis
- Add test cases in comments
- Use descriptive variable names
- Optimize for both time and space when possible

---

## 📝 Notes

- All solutions are tested against LeetCode's test cases
- Focus on optimal solutions while providing alternative approaches
- Code follows modern C++ standards and best practices
- Regular updates with new problems and optimizations

---

## 📞 Connect With Me

<div align="center">

[![GitHub](https://img.shields.io/badge/GitHub-Pushkarmehra-181717?style=for-the-badge&logo=github)](https://github.com/Pushkarmehra)
[![Email](https://img.shields.io/badge/Email-pushkarjeemain%40gmail.com-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:pushkarjeemain@gmail.com)
[![LeetCode](https://img.shields.io/badge/LeetCode-Profile-FFA116?style=for-the-badge&logo=leetcode&logoColor=white)](https://leetcode.com/Pushkarmehra)

</div>

---

## 🎯 About Me

I'm a passionate developer who loves to create amazing web experiences and explore new technologies. Always learning, always growing! This repository showcases my journey through algorithmic problem-solving and data structures mastery.

**🔥 What drives me:**
- Creating efficient and elegant solutions
- Exploring cutting-edge technologies  
- Building amazing web experiences
- Continuous learning and growth

---

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

<div align="center">

**⭐ Star this repository if you find it helpful!**

Made with ❤️ by [Pushkar Mehra](https://github.com/Pushkarmehra) for the coding community

*"Always learning, always growing!"* 🚀

</div>
