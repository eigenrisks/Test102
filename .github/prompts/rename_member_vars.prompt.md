---
mode: 'chat'
description: 'Convert C++ class member variables to use trailing underscore suffix'
---

**Task**:  
Modify all C++ class member variables to append an underscore (`_`) suffix while preserving code functionality.

**Instructions**:  
1. Identify all class member variables in the current file/workspace.  
2. Append an underscore (`_`) to each member variable name (e.g., `int count` → `int count_`).  
3. Skip variables already ending with `_` to avoid duplication.  
4. Update references to these variables in class methods accordingly.  
5. Ensure consistency across header and implementation files.  

**Example**:  
```cpp
class Example {
private:
    int value;  // Before
    int value_; // After
};