# LeetCode C++ Solutions

LeetCode-ready C++ solutions, organized by problem number and grouped against the NeetCode 150 topic roadmap.

This repository is intentionally lightweight: each solution file should be easy to find, ready for the LeetCode editor, and free of local harness code that would get in the way of the online judge.

## Goals

- Keep every solution focused on the `class Solution` implementation.
- Make problem lookup predictable through consistent numbering and filenames.
- Track coverage by topic so practice progress is visible over time.
- Preserve explanations and tradeoffs in the README or comments only when they add value.

## Repository Layout

Once populated, solutions should be stored in 100-problem buckets:

```text
.
├── README.md
├── 0001-0099/
│   ├── 0001-two-sum.cpp
│   └── 0042-trapping-rain-water.cpp
├── 0100-0199/
│   └── 0121-best-time-to-buy-and-sell-stock.cpp
└── 0200-0299/
    └── 0217-contains-duplicate.cpp
```

Directory names use inclusive ranges. File names use this format:

```text
<4-digit-problem-id>-<kebab-case-title>.cpp
```

Examples:

- `0001-two-sum.cpp`
- `0049-group-anagrams.cpp`
- `0238-product-of-array-except-self.cpp`

## Solution Format

Each `.cpp` file should contain only the code LeetCode expects in the editor:

```cpp
class Solution {
public:
    // implementation
};
```

Do not commit local-only scaffolding such as:

- `#include` lines
- `using namespace std;`
- `main()`
- debug printing
- local test harnesses

For linked list, tree, graph node, and similar problems, rely on the type definitions provided by LeetCode unless the problem explicitly asks for a custom class.

## Adding a Solution

1. Find the correct 100-problem bucket.
2. Create the solution file using the naming convention above.
3. Add only the accepted LeetCode editor code.
4. Add the problem to the solution catalog below.
5. Include the intended time and space complexity when it is useful.

Suggested catalog row:

```markdown
| 0001 | Two Sum | Easy | Arrays & Hashing | [C++](0001-0099/0001-two-sum.cpp) | O(n) | O(n) |
```

## Topic Roadmap

Topics follow the [NeetCode 150 Roadmap](https://neetcode.io/practice/practice/neetcode150).

| # | Topic | Status |
|---:|---|---|
| 1 | Arrays & Hashing | In progress |
| 2 | Two Pointers | In progress |
| 3 | Sliding Window | In progress |
| 4 | Stack | In progress |
| 5 | Binary Search | In progress |
| 6 | Linked List | In progress |
| 7 | Trees | Not started |
| 8 | Tries | Not started |
| 9 | Heap / Priority Queue | Not started |
| 10 | Backtracking | Not started |
| 11 | Graphs | Not started |
| 12 | Advanced Graphs | Not started |
| 13 | 1-D Dynamic Programming | Not started |
| 14 | 2-D Dynamic Programming | Not started |
| 15 | Greedy | Not started |
| 16 | Intervals | Not started |
| 17 | Math & Geometry | Not started |
| 18 | Bit Manipulation | Not started |

## Solution Catalog

| # | Problem | Difficulty | Topic | Solution | Time | Space |
|---:|---|---|---|---|---|---|
| 0001 | Two Sum | Easy | Arrays & Hashing | [C++](0001-0099/0001-two-sum.cpp) | O(n) | O(n) |
| 0002 | Add Two Numbers | Medium | Linked List | [C++](0001-0099/0002-add-two-numbers.cpp) | O(max(n, m)) | O(1) |
| 0003 | Longest Substring Without Repeating Characters | Medium | Sliding Window | [C++](0001-0099/0003-longest-substring-without-repeating-characters.cpp) | O(n) | O(1) |
| 0011 | Container With Most Water | Medium | Two Pointers | [C++](0001-0099/0011-container-with-most-water.cpp) | O(n) | O(1) |
| 0015 | 3Sum | Medium | Two Pointers | [C++](0001-0099/0015-3sum.cpp) | O(n^2) | O(log n) |
| 0019 | Remove Nth Node From End of List | Medium | Linked List | [C++](0001-0099/0019-remove-nth-node-from-end-of-list.cpp) | O(n) | O(1) |
| 0020 | Valid Parentheses | Easy | Stack | [C++](0001-0099/0020-valid-parentheses.cpp) | O(n) | O(n) |
| 0021 | Merge Two Sorted Lists | Easy | Linked List | [C++](0001-0099/0021-merge-two-sorted-lists.cpp) | O(n + m) | O(1) |
| 0033 | Search in Rotated Sorted Array | Medium | Binary Search | [C++](0001-0099/0033-search-in-rotated-sorted-array.cpp) | O(log n) | O(1) |
| 0036 | Valid Sudoku | Medium | Arrays & Hashing | [C++](0001-0099/0036-valid-sudoku.cpp) | O(1) | O(1) |
| 0049 | Group Anagrams | Medium | Arrays & Hashing | [C++](0001-0099/0049-group-anagrams.cpp) | O(n * k) | O(n * k) |
| 0074 | Search a 2D Matrix | Medium | Binary Search | [C++](0001-0099/0074-search-a-2d-matrix.cpp) | O(log(m * n)) | O(1) |
| 0121 | Best Time to Buy and Sell Stock | Easy | Sliding Window | [C++](0100-0199/0121-best-time-to-buy-and-sell-stock.cpp) | O(n) | O(1) |
| 0125 | Valid Palindrome | Easy | Two Pointers | [C++](0100-0199/0125-valid-palindrome.cpp) | O(n) | O(1) |
| 0128 | Longest Consecutive Sequence | Medium | Arrays & Hashing | [C++](0100-0199/0128-longest-consecutive-sequence.cpp) | O(n) | O(n) |
| 0138 | Copy List with Random Pointer | Medium | Linked List | [C++](0100-0199/0138-copy-list-with-random-pointer.cpp) | O(n) | O(n) |
| 0141 | Linked List Cycle | Easy | Linked List | [C++](0100-0199/0141-linked-list-cycle.cpp) | O(n) | O(1) |
| 0143 | Reorder List | Medium | Linked List | [C++](0100-0199/0143-reorder-list.cpp) | O(n) | O(1) |
| 0150 | Evaluate Reverse Polish Notation | Medium | Stack | [C++](0100-0199/0150-evaluate-reverse-polish-notation.cpp) | O(n) | O(n) |
| 0153 | Find Minimum in Rotated Sorted Array | Medium | Binary Search | [C++](0100-0199/0153-find-minimum-in-rotated-sorted-array.cpp) | O(log n) | O(1) |
| 0155 | Min Stack | Medium | Stack | [C++](0100-0199/0155-min-stack.cpp) | O(1) | O(n) |
| 0167 | Two Sum II - Input Array Is Sorted | Medium | Two Pointers | [C++](0100-0199/0167-two-sum-ii-input-array-is-sorted.cpp) | O(n) | O(1) |
| 0206 | Reverse Linked List | Easy | Linked List | [C++](0200-0299/0206-reverse-linked-list.cpp) | O(n) | O(1) |
| 0217 | Contains Duplicate | Easy | Arrays & Hashing | [C++](0200-0299/0217-contains-duplicate.cpp) | O(n) | O(n) |
| 0238 | Product of Array Except Self | Medium | Arrays & Hashing | [C++](0200-0299/0238-product-of-array-except-self.cpp) | O(n) | O(1) |
| 0242 | Valid Anagram | Easy | Arrays & Hashing | [C++](0200-0299/0242-valid-anagram.cpp) | O(n) | O(1) |
| 0347 | Top K Frequent Elements | Medium | Arrays & Hashing | [C++](0300-0399/0347-top-k-frequent-elements.cpp) | O(n) | O(n) |
| 0424 | Longest Repeating Character Replacement | Medium | Sliding Window | [C++](0400-0499/0424-longest-repeating-character-replacement.cpp) | O(n) | O(1) |
| 0567 | Permutation in String | Medium | Sliding Window | [C++](0500-0599/0567-permutation-in-string.cpp) | O(n) | O(1) |
| 0704 | Binary Search | Easy | Binary Search | [C++](0700-0799/0704-binary-search.cpp) | O(log n) | O(1) |
| 0739 | Daily Temperatures | Medium | Stack | [C++](0700-0799/0739-daily-temperatures.cpp) | O(n) | O(n) |
| 0853 | Car Fleet | Medium | Stack | [C++](0800-0899/0853-car-fleet.cpp) | O(n log n) | O(n) |
| 0875 | Koko Eating Bananas | Medium | Binary Search | [C++](0800-0899/0875-koko-eating-bananas.cpp) | O(n log m) | O(1) |
| 0981 | Time Based Key-Value Store | Medium | Binary Search | [C++](0900-0999/0981-time-based-key-value-store.cpp) | set: O(1), get: O(log n) | O(n) |
| 3936 | Minimum Swaps to Move Zeros to End | Easy | Arrays & Hashing | [C++](3900-3999/3936-minimum-swaps-to-move-zeros-to-end.cpp) | O(n) | O(1) |
| 3937 | Minimum Operations to Make Array Modulo Alternating I | Medium | Arrays & Hashing | [C++](3900-3999/3937-minimum-operations-to-make-array-modulo-alternating-i.cpp) | O(n * k + k^2) | O(k) |
| 3950 | Exactly One Consecutive Set Bits Pair | Easy | Bit Manipulation | [C++](3900-3999/3950-exactly-one-consecutive-set-bits-pair.cpp) | O(log n) | O(1) |
| 3951 | Minimum Energy to Maintain Brightness | Medium | Intervals | [C++](3900-3999/3951-minimum-energy-to-maintain-brightness.cpp) | O(m log m) | O(log m) |

## Local Testing

The committed solution files are optimized for LeetCode's editor, not for direct local compilation. If local testing is needed, create a temporary scratch file with includes, helper definitions, and a `main()` function. Files named `scratch*` are ignored by Git.

## Conventions

- Prefer clear, accepted solutions over overly compressed code.
- Use standard LeetCode class and method signatures exactly as provided.
- Keep comments short and focused on non-obvious reasoning.
- Name helper functions and variables descriptively enough to make future review easy.
- Avoid committing multiple competing approaches for the same problem unless the tradeoff is meaningful.
