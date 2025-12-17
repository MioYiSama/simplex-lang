# Simplex Lang

## Syntax

### Comment

```text
// Line Comment

/*
    Block Comment
*/
```

### Declaration

```text
var x = 0
const y = 0
def z = 0

var x: Int = 0
```

### Type System

Structural Typing

- Primitive Type

```text
var x: Byte = 0B
var x: Int = 0
var x: Int64 = 0L
var x: UInt = 0U
var x: UInt64 = 0UL

var x: Float = 0.0
var x: Float64 = 0.0L

var x: Char = 'x' // Unicode Codepoint
var x: String = "Hello" // UTF-8

var x: Void = void
var x: Bool = true // or false
```

- Compound Type

```text
var array: [Int] = [1, 2, 3]
var map: [Int:Char] = [1: '1', 2: '2', 3: '3']
var struct: (x: Int, y: Int) = (x: 1, y: 2)
var tuple: (Int, Int) = (1, 2)
```

- Type Expression

```text
// Type Alias
def Point = type (x: Int, y: Int)

// Union Type
def Number = type Int | Float

// Intersection Type (struct only)
def User = type (name: String) & (age: Int)
```

- Enum

```text
def Color = enum { Red, Green, Blue }
```

### Function & Lambda

```text
def f = { (x: Int, y: Int) => x + y }

def f = { (x: Int, y: Int) => Int
    return x + y
}

def Func = type (x: Int, y: Int) => Int
```

### Generic

```text
def Array<T> = type [T]
var x: Array<Int> = [1, 2, 3]

def add<T> = { (x: T, y: T) => x + y }
add<Int>(1, 2)
```

### Interface

```text
def Add<T> = interface {
    add: (rhs: T) => T
}

def Int impl Add<Int> {
    add = { (rhs: Int) => Int
        self + rhs
    }
}
```

### Module System

- import

```text
def foo = @import("foo.sx")
foo.bar()

def (bar) = @import("foo.sx")
```

- export

```text
export def f = { () => void }
```

### Memory

Reference Counting

```text
var x: Int& = new 1
var y: Int? = weak x
```

### Statements

- if

```text
if x > y {

} elif x == y  {

} else {

}
```

- match

```text
match x {
    1 {
    }
    when x > 0 {
    }
    is Float {
    }
    when x < 0 and is Float {
    }
}
```

- for

```text
for {

}

for x < 10 {
    x += 1
}

for x in [1, 2, 3] {
    
}
```