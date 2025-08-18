# 48. Rotate Image

## Problem Description

You are given an `n x n` 2D `matrix` representing an image, rotate the image by **90** degrees (clockwise).

You have to rotate the image **in-place**, which means you have to modify the input 2D matrix directly. **DO NOT** allocate another 2D matrix and do the rotation.

## Examples

### Example 1:
![Matrix Rotation Example 1](https://assets.leetcode.com/uploads/2020/08/28/mat1.jpg)

**Input:** `matrix = [[1,2,3],[4,5,6],[7,8,9]]`

**Output:** `[[7,4,1],[8,5,2],[9,6,3]]`

### Example 2:
![Matrix Rotation Example 2](https://assets.leetcode.com/uploads/2020/08/28/mat2.jpg)

**Input:** `matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]`

**Output:** `[[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]`

## Constraints

- `n == matrix.length == matrix[i].length`
- `1 <= n <= 20`
- `-1000 <= matrix[i][j] <= 1000`

## Solution Approach

![Rotate Image](rotate%20image.png)

	
	
The key insight is to perform the rotation in two steps:
1. **Transpose** the matrix (swap rows and columns)
2. **Reverse** each row

### Algorithm Steps:
1. Transpose the matrix: `matrix[i][j] = matrix[j][i]`
2. Reverse each row: reverse `matrix[i]`

## Code Solutions



```
Original Matrix:    After Transpose:    After Row Reverse:
[1, 2, 3]          [1, 4, 7]           [7, 4, 1]
[4, 5, 6]    →     [2, 5, 8]     →     [8, 5, 2]
[7, 8, 9]          [3, 6, 9]           [9, 6, 3]
```

## Complexity Analysis

- **Time Complexity:** O(n²) - We visit each element twice
- **Space Complexity:** O(1) - Only using constant extra space

## Alternative Approach: Layer by Layer Rotation

```python
def rotate_layers(matrix):
    """
    Alternative approach: Rotate layer by layer
    """
    n = len(matrix)
    
    for layer in range(n // 2):
        first = layer
        last = n - 1 - layer
        
        for i in range(first, last):
            offset = i - first
            
            # Save top element
            top = matrix[first][i]
            
            # Top = Left
            matrix[first][i] = matrix[last - offset][first]
            
            # Left = Bottom
            matrix[last - offset][first] = matrix[last][last - offset]
            
            # Bottom = Right
            matrix[last][last - offset] = matrix[i][last]
            
            # Right = Top
            matrix[i][last] = top
```

## Key Insights

1. **Transpose + Reverse** is more intuitive than direct rotation
2. The pattern works for any `n x n` matrix
3. In-place operation saves memory
4. Both approaches have the same time complexity

## Related Problems

- [Rotate Array](https://leetcode.com/problems/rotate-array/)
- [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)
- [Transpose Matrix](https://leetcode.com/problems/transpose-matrix/)

---

**Difficulty:** Medium  
**Topics:** Array, Math, Matrix  
**Companies:** Amazon, Microsoft, Google, Facebook
