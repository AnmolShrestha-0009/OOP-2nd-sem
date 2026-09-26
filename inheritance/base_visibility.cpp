#include <iostream>

// ==========================================
// BASE CLASS
// ==========================================
class Base {
public:
    int publicVar = 1;     // Visible to everyone
protected:
    int protectedVar = 2;  // Visible to child classes
private:
    int privateVar = 3;    // Visible ONLY to Base
};

// ==========================================
// 1. PUBLIC INHERITANCE
// ==========================================
class PublicDerived : public Base {
public:
    void display() {
        std::cout << publicVar << "\n";     // ✅ Allowed (remains public)
        std::cout << protectedVar << "\n";  // ✅ Allowed (remains protected)
        // std::cout << privateVar << "\n";  // ❌ ERROR: privateVar is hidden
    }
};

// ==========================================
// 2. PROTECTED INHERITANCE
// ==========================================
class ProtectedDerived : protected Base {
public:
    void display() {
        std::cout << publicVar << "\n";     // ✅ Allowed (demoted to protected)
        std::cout << protectedVar << "\n";  // ✅ Allowed (remains protected)
        // std::cout << privateVar << "\n";  // ❌ ERROR: privateVar is hidden
    }
};

class GrandchildOfProtected : public ProtectedDerived {
public:
    void test() {
        std::cout << publicVar << "\n";     // ✅ Allowed (it is protected in ProtectedDerived)
    }
};

// ==========================================
// 3. PRIVATE INHERITANCE
// ==========================================
class PrivateDerived : private Base {
public:
    void display() {
        std::cout << publicVar << "\n";     // ✅ Allowed (demoted to private)
        std::cout << protectedVar << "\n";  // ✅ Allowed (demoted to private)
        // std::cout << privateVar << "\n";  // ❌ ERROR: privateVar is hidden
    }
};

class GrandchildOfPrivate : public PrivateDerived {
public:
    void test() {
        // std::cout << publicVar << "\n";  // ❌ ERROR: publicVar is now private inside PrivateDerived
    }
};

// ==========================================
// MAIN FUNCTION (External Access Test)
// ==========================================
int main() {
    PublicDerived pubObj;
    ProtectedDerived protObj;
    PrivateDerived privObj;

    // Testing access from outside the classes:
    std::cout << pubObj.publicVar << "\n";  // ✅ Allowed (publicVar is still public)

    // std::cout << protObj.publicVar << "\n"; // ❌ ERROR: publicVar became protected
    // std::cout << privObj.publicVar << "\n"; // ❌ ERROR: publicVar became private

    return 0;
}

