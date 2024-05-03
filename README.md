# Design Pattern - Template pattern

## Description

![template-method-app](https://github.com/jiji-thecat/dp-template-method/assets/104809324/fe91cdcc-f801-4370-a8b0-7b5432ca1332)

The iterator pattern is a design pattern where the super class serves as the template, and there are subclasses that utilize this template. For instance, imagine a Japanese sweet called taiyaki, which is made using a taiyaki mold. The taiyaki mold acts as the template, allowing for the creation of various flavors of taiyaki.

![fishcakeex](https://github.com/jiji-thecat/dp-template-method/assets/104809324/327fd042-2332-406d-a0e9-0ac8f3ea8cba)

### Class diagram

![class diagram](https://github.com/jiji-thecat/dp-template-method/assets/104809324/fa059023-bbe2-43d1-850b-52023143f9ff)
[wiki](https://ja.wikipedia.org/wiki/Template_Method_%E3%83%91%E3%82%BF%E3%83%BC%E3%83%B3)

The taiyaki mold can be represented as an abstract class containing virtual functions that describe how to make taiyaki, such as `filling()` and `crustColor()`. Concrete classes will then override these functions, following the process of making taiyaki while allowing for variations to produce different types of taiyaki.

## How to Install and Run

Import this project as a QT project.

## How to Use This App

![template-method-app](https://github.com/jiji-thecat/dp-template-method/assets/104809324/fe91cdcc-f801-4370-a8b0-7b5432ca1332)

When the user presses the button, each animal will produce a soup with different ingredients. The process of making the soup will be represented by the abstract class, and each animal will have a subclass that overrides methods such as `putMeat()`, `putVegetables()`, and `putSoupStock()`.

## License

**MIT License**

Copyright © 2024 jiji

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation, the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

\*\*THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
