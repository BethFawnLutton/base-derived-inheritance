# Base / Derived Inheritance

This program changes the class `Derived` so that it inherits publicly from the class `Base`:

```cpp
class Derived : public Base {
private:
    int y;
public:
    Derived();
};
```

## Build and run

```bash
g++ -std=c++17 -Wall -o inheritance main.cpp
./inheritance
```

Expected output:

```
Base constructor called (x = 0)
Derived constructor called (y = 0)
```
