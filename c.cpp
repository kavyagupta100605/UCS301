#include<iostream>
using namespace std;//Bsae class and derived class ke function mein function overloading nhi hoti
class A
{
    int a;
    public:
    // virtual void show()
    // {
    //     cout<<"hi";
    // }
    void show(int a)
    {
        cout<<"fgdf";
    }
};
class B:public A
{
    int b;
    public:
    void show()
    {
        cout<<"hello";
    }
};
int main()
{
    B ob;
    // ob.show(2);
}
//name hidding 
// Excellent — this is a good example to understand the **difference between function overloading and overriding** and how **name hiding** works in inheritance.

// Let’s go through your code step by step 👇

// ---

// ### 🧩 Code:

// ```cpp
// #include<iostream>
// using namespace std;

// class A
// {
//     int a;
// public:
//     void show(int a)
//     {
//         cout << "fgdf";
//     }
// };

// class B : public A
// {
//     int b;
// public:
//     void show()
//     {
//         cout << "hello";
//     }
// };

// int main()
// {
//     B ob;
//     ob.show(2);
// }
// ```

// ---

// ### 🧠 What You Might Expect

// You might think that since `class B` is derived from `class A`, the object `ob` of class `B` should be able to call both versions of `show()` —

// * `show()` (from `B`) and
// * `show(int)` (from `A`).

// However, **that’s not what happens**.

// ---

// ### ⚙️ What Actually Happens

// When you compile this program, you’ll get an **error** like:

// ```
// error: no matching function for call to 'B::show(int)'
// ```

// ---

// ### 🚨 Why the Error Happens

// Because **function overloading does not happen across base and derived classes** by default.
// Instead, the `show()` function in the **derived class B** **hides** all versions of `show()` in the **base class A**, even if the parameter list is different.

// This is called **name hiding** (or **function hiding**), not overriding or overloading.

// So in this code:

// * `A` has a function `show(int)`
// * `B` defines a new function `show()`
//   → `B::show()` **hides** `A::show(int)`

// Therefore, inside `B` (and its objects), the compiler **only sees `B::show()`** — it doesn’t look at `A::show(int)` anymore.

// ---

// ### ✅ How to Fix It

// If you still want to access `A`’s version of `show()`, you can **bring it into the derived class scope** using the **`using`** keyword:

// ```cpp
// class B : public A
// {
// public:
//     using A::show;   // makes A::show(int) visible in B
//     void show()
//     {
//         cout << "hello";
//     }
// };
// ```

// Now this will compile and run successfully.

// **Output:**

// ```
// fgdf
// ```

// (because `ob.show(2)` calls `A::show(int)`)

// And if you call `ob.show();`, it will print:

// ```
// hello
// ```

// ---

// ### ⚡ Summary

// | Concept         | Explanation                                                                                                                                                  |
// | --------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------ |
// | **Overloading** | Same function name, different parameters, in the same class.                                                                                                 |
// | **Overriding**  | Same function signature in base and derived class (requires `virtual` for runtime binding).                                                                  |
// | **Name hiding** | When a derived class defines a function with the same name as one in the base class (even with different parameters), the base class version becomes hidden. |

// ---

// Would you like me to modify your code to **demonstrate proper function overriding** (using `virtual` functions and runtime polymorphism)?
