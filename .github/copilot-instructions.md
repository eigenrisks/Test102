# Copilot Instructions

# Copilot Instructions for C++ Development

This document outlines guidelines for writing C++ code to ensure consistency and maintainability when using GitHub Copilot or other AI-assisted coding tools.

## C++ Coding Guidelines

### 1. Class Member Naming Convention
- All C++ class member variables must be suffixed with an underscore (`_`).
- This convention helps distinguish member variables from local variables and parameters, improving code readability.
- Example:
  ```cpp
  class MyClass {
  private:
    int myVariable_;  // Correct: suffixed with _
    std::string name_; // Correct: suffixed with _

  public:
    void setName(const std::string& name) {
      name_ = name; // Clear distinction between member (name_) and parameter (name)
    }
  };