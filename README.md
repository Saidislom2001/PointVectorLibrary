# Point & Vector Library (C++)

A simple C++ project that implements **Point** and **Vector** classes for performing common 3D geometry operations. This project was built to practice Object-Oriented Programming (OOP) concepts and serves as a foundation for future projects in computational engineering, computer graphics, and the Finite Element Method (FEM).

---

## Features

### Point Class

* Create 3D points
* Compute the distance between two points

### Vector Class

* Create 3D vectors
* Compute vector magnitude
* Normalize vectors
* Calculate the dot product
* Calculate the cross product
* Vector addition
* Vector subtraction
* Scalar multiplication

---

## Project Structure

```text
PointVectorLibrary/
│
├── Point.h
├── Point.cpp
│
├── Vector.h
├── Vector.cpp
│
├── main.cpp
└── README.md
```

---

## Concepts Practiced

* Object-Oriented Programming (OOP)
* Classes and Objects
* Constructors
* Encapsulation
* Member Functions
* Operator Overloading
* Header and Source File Separation
* Mathematical Computations
* C++ Standard Library (`<cmath>`)

---

## How to Compile

Using **g++**:

```bash
g++ main.cpp Point.cpp Vector.cpp -o Program
```

---

## How to Run

### Linux / macOS

```bash
./Program
```

### Windows (MinGW)

```bash
Program.exe
```

---

## Example Output

```text
Distance between points: 5.19615

Magnitude of vector v1: 3.74166

Normalized vector:
(0.267261, 0.534522, 0.801784)

Dot product:
32

Cross product:
(-3, 6, -3)

Vector addition:
(5, 7, 9)

Vector subtraction:
(-3, -3, -3)

Scalar multiplication:
(2, 4, 6)
```

---

## Mathematical Operations

### Distance Between Two Points

[
d=\sqrt{(x_2-x_1)^2+(y_2-y_1)^2+(z_2-z_1)^2}
]

### Vector Magnitude

[
|v|=\sqrt{x^2+y^2+z^2}
]

### Dot Product

[
a\cdot b=axbx+ayby+azbz
]

### Cross Product

[
a\times b=
(aybz-azby,;
azbx-axbz,;
axby-aybx)
]

---

## Future Improvements

* Output (`<<`) operator overloading
* Equality (`==`) operator
* Vector angle calculation
* Projection of one vector onto another
* 2D vector support
* Matrix class
* Unit tests
* CMake build support

---

## Author

**Saidislom Anvarkhujaev**

Master's Student in Computational Engineering

Learning modern C++ through hands-on mini projects with the goal of building numerical methods and Finite Element Method (FEM) software.
