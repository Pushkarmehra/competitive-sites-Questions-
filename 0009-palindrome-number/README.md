<div align="center">
  
# #9 Palindrome Number
### [LeetCode Problem #9](https://leetcode.com/problems/palindrome-number/)
![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Topics](https://img.shields.io/badge/Topics-Math%2C%20Two%20Pointers-blue?style=for-the-badge)
</div>

---

## 📝 Problem Statement
Given an integer `x`, return `true` **if** `x` **is a palindrome**, and `false` **otherwise**.

A **palindrome** is a number that reads the same forward and backward.

---

## ✨ Examples
<table align="center">
<tr>
<th>🔸 Input</th>
<th>🔸 Output</th>
<th>🔸 Explanation</th>
</tr>
<tr>
<td><code>x = 121</code></td>
<td><code>true</code></td>
<td>121 reads as 121 from left to right and from right to left</td>
</tr>
<tr>
<td><code>x = -121</code></td>
<td><code>false</code></td>
<td>From left to right: -121. From right to left: 121-. Not a palindrome</td>
</tr>
<tr>
<td><code>x = 10</code></td>
<td><code>false</code></td>
<td>Reads 01 from right to left. Not a palindrome</td>
</tr>
</table>

---

## 🚀 Algorithm Approach

### Key Insight
> We can solve this without converting to string by reversing only half the number

### **Approach 1: String Conversion**
1. **Convert** integer to string
2. **Use two pointers** from start and end
3. **Compare characters** moving inward
4. **Time:** O(log n), **Space:** O(log n)

### **Approach 2: Mathematical Reversal (Optimal)**
1. **Handle edge cases:** negative numbers and multiples of 10 (except 0)
2. **Reverse half the number:**
   - Extract digits from right using modulo
   - Build reversed number
   - Stop when original ≤ reversed
3. **Check palindrome:**
   - Even digits: `original == reversed`
   - Odd digits: `original == reversed / 10`
4. **Time:** O(log n), **Space:** O(1)

### **Approach 3: Full Number Reversal**
1. **Reverse entire number** mathematically
2. **Compare** with original
3. **Handle overflow** carefully
4. **Time:** O(log n), **Space:** O(1)

---

## 🎨 Visualization

<div align="center">
  
### Half-Reversal Algorithm Demonstration
```
Example: x = 1221

Step 1: x = 1221, reversed = 0
Step 2: x = 122,  reversed = 1    (1221 % 10 = 1)
Step 3: x = 12,   reversed = 12   (122 % 10 = 2)
Step 4: x = 1,    reversed = 121  (12 % 10 = 2)

Since x (1) < reversed (121), we stop.
For even digits: x should equal reversed / 10
1 == 121 / 10 = 12? No → 1 == 12? No

Wait, let me recalculate:
x = 1221, reversed = 0
x = 122, reversed = 1
x = 12, reversed = 12  
Now x (12) == reversed (12) → Palindrome!
```

</div>

---

## 📊 Complexity Analysis
| Approach | Time Complexity | Space Complexity |
|----------|----------------|------------------|
| **String Conversion** | `O(log n)` | `O(log n)` |
| **Half Reversal** | `O(log n)` | `O(1)` |
| **Full Reversal** | `O(log n)` | `O(1)` |

*Note: log n represents the number of digits in the number*

---

## 🔧 Constraints
- `-2³¹ <= x <= 2³¹ - 1`

---

## 💡 Follow-up
**Could you solve it without converting the integer to a string?**

*Answer: Yes! Use the mathematical half-reversal approach to achieve O(1) space complexity while maintaining O(log n) time complexity.*

---

## 🧠 Key Insights
- **Negative numbers** are never palindromes (due to the minus sign)
- **Numbers ending in 0** (except 0 itself) are never palindromes
- **Single digit numbers** are always palindromes
- **Half-reversal technique** is more efficient than full reversal

---

<div align="center">

**💫 Happy Coding! 💫**

</div>
