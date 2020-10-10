---
theme: gaia
_class: lead
paginate: true
backgroundColor: #fff
backgroundImage: url('https://marp.app/assets/hero-background.jpg')
marp: true
---

![bg left:45% 80%](https://images.pexels.com/photos/247763/pexels-photo-247763.jpeg?auto=compress&cs=tinysrgb&dpr=2&h=950&w=1240)

# **Abstract Factory**

Implementation in C++

Author: Kasper Biegun

---

# Short introduction

Abstract factory is a creational design pattern that lets you produce families of related objects without specifying their concrete classes.

According to [Refactoring Guru](https://refactoring.guru/design-patterns/abstract-factory/cpp/example) this pattern is a bit complex, but very popular, so it will be worth to know it.
<!-- ```cpp
#include <memory>

int a = 5

std::cout << a << std::endl;

``` -->
---
# Pros
* You can be sure that the products you’re getting from a factory are compatible with each other. <!-- .element: class="fragment fade-in" --> 
* You avoid tight coupling between concrete products and client code. <!-- .element: class="fragment fade-in" -->
* Single Responsibility Principle. You can extract the product creation code into one place, making the code easier to support.<!-- .element: class="fragment fade-in" -->
* Open/Closed Principle. You can introduce new variants of products without breaking existing client code. <!-- .element: class="fragment fade-in" -->
---
# Cons
* The code may become more complicated than it should be, since a lot of new interfaces and classes are introduced along with the pattern. <!-- .element: class="fragment fade-in" -->
---
# Example

As an example, I prepared simulation of smartphone order by client and its production by one of the three factories. You will see two versions of code, without and with design pattern usage.

Both examples are available in my GitHub [repository](https://github.com/Kasperice/abstract-factory-presentation).


---
# More information
If you want to gain some more knowledge of Abstract Factory I suggest you to visit:

[Refactoring Guru](https://refactoring.guru/design-patterns/abstract-factory)
[Source Making](https://sourcemaking.com/design_patterns/abstract_factory)

And especially for Python, Orks and Goblins fans :wink: :

[DEV Akimbo](https://devakimbo.com/abstract-factory-design-pattern-python-for-web-developers/)


---
# 

## Thank you!
