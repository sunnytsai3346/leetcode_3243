# leetcode_3243
#3243. Shortest Distance After Road Addition Queries I
You are given an integer n and a 2D integer array queries.

There are n cities numbered from 0 to n - 1. Initially, there is a unidirectional road from city i to city i + 1 for all 0 <= i < n - 1.

queries[i] = [ui, vi] represents the addition of a new unidirectional road from city ui to city vi. After each query, you need to find the length of the shortest path from city 0 to city n - 1.

Return an array answer where for each i in the range [0, queries.length - 1], answer[i] is the length of the shortest path from city 0 to city n - 1 after processing the first i + 1 queries.

 

Example 1:

Input: n = 5, queries = [[2,4],[0,2],[0,4]]

Output: [3,2,1]

Explanation:

![image](https://github.com/user-attachments/assets/d3abdba3-b26f-4564-b0a9-4096a47e9f70)


After the addition of the road from 2 to 4, the length of the shortest path from 0 to 4 is 3.

![image](https://github.com/user-attachments/assets/1bbf9e44-81e6-461a-b403-5b707eae86b7)


After the addition of the road from 0 to 2, the length of the shortest path from 0 to 4 is 2.

![image](https://github.com/user-attachments/assets/827a3f3f-34c9-4326-9bcb-f70a1bcd6bf2)


After the addition of the road from 0 to 4, the length of the shortest path from 0 to 4 is 1.
