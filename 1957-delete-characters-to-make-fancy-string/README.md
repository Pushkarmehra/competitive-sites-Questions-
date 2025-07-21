<h2 align="center">
  <a href="https://leetcode.com/problems/delete-characters-to-make-fancy-string/?envType=daily-question&envId=2025-07-21">
    1957. Delete Characters to Make Fancy String
  </a>
</h2>

<p align="center">
  <strong>Easy • String Manipulation • Two-Pointer</strong>
</p>

---

### 📝 Problem Statement
A **fancy string** is a string where no **three consecutive** characters are equal.

Given a string `s`, delete the **minimum** possible number of characters from `s` to make it **fancy**.

Return *the final string after the deletion*.  
The answer will always be **unique**.

---

### ✅ Examples

| **Input** | **Output** | **Explanation** |
|-----------|-----------|-----------------|
| `s = "leeetcode"` | `"leetcode"` | Removed one `e` |
| `s = "aaabaaaa"` | `"aabaa"` | Removed three `a`s |
| `s = "aab"` | `"aab"` | Already fancy |

---

### 📌 Visualization

<p align="center">
  <a href="https://excalidraw.com/#json=KkucYifcPXmQOnUR0NNSs,LWNBHqAdbkUOpl2mJxCAsQ">
    <img src="./1957-delete-characters-to-make-fancy-string/image/1957.png
" alt="Fancy String Excalidraw" width="500"/>
  </a>
</p>


🔗 **[Click here to edit/view in Excalidraw](./1957-delete-characters-to-make-fancy-string/image/1957.png
)**

---

### 🔥 Constraints
- `1 <= s.length <= 10^5`
- `s` consists only of lowercase English letters.
