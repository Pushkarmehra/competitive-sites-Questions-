<div align="center">
  
# #1957 Delete Characters to Make Fancy String
### [LeetCode Problem #1957](https://leetcode.com/problems/delete-characters-to-make-fancy-string/?envType=daily-question&envId=2025-07-21)

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge)
![Topics](https://img.shields.io/badge/Topics-String%20Manipulation-blue?style=for-the-badge)

</div>

---

## 📝 Problem Statement

A **fancy string** is a string where no **three consecutive** characters are equal.

Given a string `s`, delete the **minimum** possible number of characters from `s` to make it **fancy**.

Return *the final string after the deletion*. The answer will always be **unique**.

---

## ✨ Examples

<table align="center">
<tr>
<th>🔸 Input</th>
<th>🔸 Output</th>
<th>🔸 Explanation</th>
</tr>
<tr>
<td><code>"leeetcode"</code></td>
<td><code>"leetcode"</code></td>
<td>Remove one <code>e</code> from three consecutive <code>e</code>s</td>
</tr>
<tr>
<td><code>"aaabaaaa"</code></td>
<td><code>"aabaa"</code></td>
<td>Remove three <code>a</code>s to prevent 3+ consecutive</td>
</tr>
<tr>
<td><code>"aab"</code></td>
<td><code>"aab"</code></td>
<td>Already fancy - no changes needed</td>
</tr>
</table>

---

## 🎨 Visualization

<div align="center">
  
### Algorithm Flow Demonstration

<img src="./1957-delete-characters-to-make-fancy-string/image/1957.png" alt="Delete Characters to Make Fancy String - Visual Algorithm" width="80%"/>

**🔗 [View/Edit Visualization](https://excalidraw.com/#json=KkucYifcPXmQOnUR0NNSs,LWNBHqAdbkUOpl2mJxCAsQ)**

</div>

---

## 🚀 Algorithm Approach

### Key Insight
> Keep track of consecutive character count and prevent it from exceeding 2

### Steps:
1. **Initialize** result string with first character
2. **Track frequency** of consecutive identical characters  
3. **For each character:**
   - If same as previous → increment frequency
   - If frequency reaches 3 → remove last added character
   - If different → reset frequency to 1
4. **Return** the fancy string

---

## 📊 Complexity Analysis

| Metric | Complexity |
|--------|------------|
| **Time** | `O(n)` - Single pass through string |
| **Space** | `O(n)` - Result string storage |

---

## 🔧 Constraints

- `1 <= s.length <= 10^5`
- `s` consists only of **lowercase English letters**

---

<div align="center">

### 💡 **Happy Coding!** 💡

[![Stars](https://img.shields.io/github/stars/yourusername/leetcode-solutions?style=social)](https://github.com/pushkarmehra/leetcode-solutions)
[![Follow](https://img.shields.io/github/followers/yourusername?style=social)](https://github.com/pushkarmehra)

</div>
