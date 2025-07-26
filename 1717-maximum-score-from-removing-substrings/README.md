<div align="center">

# #1717 Maximum Score From Removing Substrings

### [LeetCode Problem #1717](https://leetcode.com/problems/maximum-score-from-removing-substrings)

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange?style=for-the-badge)
![Topics](https://img.shields.io/badge/Topics-String%2C%20Stack%2C%20Greedy-blue?style=for-the-badge)

</div>

---

## 📝 Problem Statement

You are given a string `s` and two integers `x` and `y`. You can perform two types of operations any number of times.

- Remove substring `"ab"` and gain `x` points.
  - For example, when removing `"ab"` from `"c**ab**xbae"` it becomes `"cxbae"`.

- Remove substring `"ba"` and gain `y` points.
  - For example, when removing `"ba"` from `"cabx**ba**e"` it becomes `"cabxe"`.

Return *the maximum points you can gain after applying the above operations on* `s`.

---

## ✨ Examples

<table align="center">
<tr>
<th>🔸 Input</th>
<th>🔸 Output</th>
<th>🔸 Explanation</th>
</tr>
<tr>
<td><code>s = "cdbcbbaaabab", x = 4, y = 5</code></td>
<td><code>19</code></td>
<td>
- Remove "ba" from "cdbcbbaaa<u>ba</u>b" → "cdbcbbaaab" (+5)<br>
- Remove "ab" from "cdbcbbaa<u>ab</u>" → "cdbcbbaa" (+4)<br>
- Remove "ba" from "cdbcb<u>ba</u>a" → "cdbcba" (+5)<br>
- Remove "ba" from "cdbc<u>ba</u>" → "cdbc" (+5)<br>
Total: 5 + 4 + 5 + 5 = 19
</td>
</tr>
<tr>
<td><code>s = "aabbaaxybbaabb", x = 5, y = 4</code></td>
<td><code>20</code></td>
<td>Remove higher scoring patterns first</td>
</tr>
</table>

---

## 🚀 Algorithm Approach

### Key Insight
> Greedy approach: Always remove the higher-scoring substring first to maximize points

### Strategy
1. **Determine Priority**: Compare `x` and `y` to decide which substring to remove first
2. **Two-Pass Removal**:
   - First pass: Remove the higher-scoring substring using stack/greedy approach
   - Second pass: Remove the lower-scoring substring from the remaining string
3. **Stack-based Implementation**: Use stack to efficiently track and remove substrings

### Implementation Steps
1. If `x >= y`: Remove "ab" first, then "ba"
2. If `y > x`: Remove "ba" first, then "ab"
3. For each pass:
   - Use stack to build string while removing target substrings
   - When target pattern found, pop from stack and add points

---

## 🎨 Visualization

```
Example: s = "cdbcbbaaabab", x = 4, y = 5

Since y > x, remove "ba" first:

Step 1: Remove all "ba" patterns
"cdbcbbaaabab" → "cdbcbbaaab" → "cdbcbbaa" → "cdbcba" → "cdbc"
Points from "ba": 5 + 5 + 5 = 15

Step 2: Remove all "ab" patterns from remaining string "cdbc"
No "ab" patterns found.
Points from "ab": 0

Total: 15 + 0 = 15 ❌

Wait! Let's trace the optimal solution:
Remove "ba": "cdbcbbaaa**ba**b" → 5 points
Remove "ab": "cdbcbbaa**ab**" → 4 points  
Remove "ba": "cdbcb**ba**a" → 5 points
Remove "ba": "cdbc**ba**" → 5 points
Total: 19 ✅
```

---

## 📊 Complexity Analysis

| Aspect | Complexity |
|--------|------------|
| **Time** | O(n) |
| **Space** | O(n) |

Where n is the length of the input string.

---

## 🔧 Constraints

- `1 <= s.length <= 10⁵`
- `1 <= x, y <= 10⁴`
- `s` consists of lowercase English letters

---

## 💡 Key Insights

1. **Greedy Choice**: Always prioritize removing the substring with higher points
2. **Stack Usage**: Efficient way to build result while removing patterns
3. **Two-Pass Strategy**: First remove higher-scoring, then lower-scoring patterns
4. **Order Matters**: The sequence of removals affects the final score

---

## 🔍 Follow-up Questions

- What if we had more than two substrings to remove?
- How would the algorithm change with different scoring systems?
- Can we solve this problem using dynamic programming?

---

<div align="center">
💡 **Pro Tip**: This problem demonstrates the power of greedy algorithms in string manipulation!
</div>
