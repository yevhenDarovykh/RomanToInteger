# RomanToInteger
### LeetCode task - Roman to Integer:
![IMG_1797](https://github.com/user-attachments/assets/fcccec21-c7ec-4ca4-92a8-5e68cac98844)
### This task was solved by a method for finding and summing all Roman numerals as well as all possible combinations of subtractions:
**Step one:** save all possible Roman numerals with Arabic numerals parities and Roman numerals subtraction combinations with Arabic numerals parities.

**Step two:** find all Roman numerals subtraction combinations one by one and change them with two non-numeric characters in the original string (in my implementation it’s a '-' characters). When you find a new Roman numerals subtraction combination add it Arabic numerals parity to the previous one creating a total sum.

**Step three:** find all Roman numerals one by one and change them with non-numeric characters in the original string (in my implementation it’s a '-' character). When you find a new number add it Arabic numerals parity to the previous one or sum of all Roman numerals creating a total sum.

**Step four:** return created total sum which is an Arabic parity to given Roman number.
### The results:
![image](https://github.com/user-attachments/assets/cd4ecfab-48ec-4221-8435-a4770659e79f)

Time complexity is O(n^2).

Space complexity is O(1).
### Conclution:

This is deffinately a good idea to go with this method but there is better one. I used map, but not unordered_map implementation. Took what C++ created by default. It obviously requires some additional resources to sort map. Which made my code slower. And I didn't think about just substract numbers that are smaller than next number after it. So I made a second map with all that subtraction combinations like "IV" for example. This made my code slower too because it needs extra loops to find this second map elements. If you change the code as described above, it will become most effective.
