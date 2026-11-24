#include <iostream>

// Base class
class Base {
private:
    int x;

public:
    Base();
};

// Derived now inherits publicly from Base.
// "public Base" means Base's public members stay public in Derived,
// and Base's protected members stay protected. Base's private
// members (like x) are still part of every Derived object, but
// Derived's own code cannot access them directly.
class Derived : public Base {
private:
    int y;

public:
    Derived();
};

// Constructor definitions
Base::Base() : x(0) {
    std::cout << "Base constructor called (x = " << x << ")\n";
}

// The Base part of a Derived object is constructed first,
// then Derived's own members are initialized.
Derived::Derived() : Base(), y(0) {
    std::cout << "Derived constructor called (y = " << y << ")\n";
}

int main() {
    Derived d;   // Calls Base() first, then Derived()

    // Because the inheritance is public, a Derived "is-a" Base,
    // so a Base pointer can point to a Derived object.
    Base* b = &d;
    (void)b;

    return 0;
}
