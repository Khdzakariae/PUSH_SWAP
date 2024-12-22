# PUSH_SWAP

## 📝 Description
PUSH_SWAP is a sorting algorithm project that challenges you to sort a stack of integers using a limited set of operations. The project focuses on optimizing algorithmic thinking and implementing efficient sorting techniques.

## 🛠️ Installation

### Prerequisites
- GCC compiler
- Make

### Build Steps
```sh
git clone https://github.com/Khdzakariae/PUSH_SWAP.git
cd PUSH_SWAP
make
```

## 💻 Usage
```sh
./push_swap [list of integers]
```

### Example
```sh
./push_swap 3 2 5 1 4
```

## 🔄 Available Operations

| Operation | Description |
|-----------|-------------|
| `sa` | Swap the first two elements of stack A |
| `sb` | Swap the first two elements of stack B |
| `ss` | Swap the first two elements of both stacks A and B |
| `pa` | Push the top element from stack B to stack A |
| `pb` | Push the top element from stack A to stack B |
| `ra` | Rotate stack A (first element becomes last) |
| `rb` | Rotate stack B (first element becomes last) |
| `rr` | Rotate both stacks A and B |
| `rra` | Reverse rotate stack A (last element becomes first) |
| `rrb` | Reverse rotate stack B (last element becomes first) |
| `rrr` | Reverse rotate both stacks A and B |

## 🔍 Algorithm Overview

### Data Structures
| Structure | Purpose |
|-----------|---------|
| Stack A | Main stack for sorting |
| Stack B | Helper stack for operations |
| Array (tab) | Reference array for sorted values |

### Sorting Process

#### Small Sets
| Number of Elements | Function Used |
|-------------------|---------------|
| 2 elements | `sort_2numbers_in_stack` |
| 3 elements | `sort_3numbers_in_stack` |
| 5 elements | `sort_5numbers_in_stack` |

#### General Sorting Algorithm Steps
1. **Initialization**
   - Parse input integers
   - Create stack A
   - Create and sort reference array

2. **Sorting Process**
   - Divide numbers into chunks
   - Sort each chunk using both stacks
   - Use optimized operations based on position

3. **Final Steps**
   - Move elements back to stack A
   - Ensure final order is correct

### Implementation Files

| File Name | Purpose |
|-----------|---------|
| `push_swap_main.c` | Main program logic |
| `sort_functions.c` | Core sorting implementations |
| `number_sorting.c` | Number manipulation functions |

## 🤝 Contributing
Contributions are welcome! Please follow these steps:
1. Fork the repository
2. Create your feature branch
3. Commit your changes
4. Push to the branch
5. Create a Pull Request

## 📄 License
This project is licensed under the MIT License.

## 📊 Performance

| Input Size | Maximum Operations |
|------------|-------------------|
| 3 numbers  | ≤ 3 operations   |
| 5 numbers  | ≤ 12 operations  |
| 100 numbers| ≤ 700 operations |
| 500 numbers| ≤ 5500 operations|

---
*Feel free to star ⭐ the repository if you find it helpful!*
