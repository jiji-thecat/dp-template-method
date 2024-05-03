# Design Pattern - Iterator pattern

## Description

![sample](https://private-user-images.githubusercontent.com/104809324/327631687-fe91cdcc-f801-4370-a8b0-7b5432ca1332.gif?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTQ3MDMwMjYsIm5iZiI6MTcxNDcwMjcyNiwicGF0aCI6Ii8xMDQ4MDkzMjQvMzI3NjMxNjg3LWZlOTFjZGNjLWY4MDEtNDM3MC1hOGIwLTdiNTQzMmNhMTMzMi5naWY_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwNTAzJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDUwM1QwMjE4NDZaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT02OTNhYjEzMjdhNWU5NzU5ZGFhNmNkOTE1M2YyMGJkNmI1NmFmYWJlOWU2ODdiNjFlNmFiNjQ3ZDk2YzcyN2UxJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.22HFusFnG-hbd4VMHh6M-j7rZQ6f2boSW9PDNguvylc)

The iterator pattern is a design pattern where the super class serves as the template, and there are subclasses that utilize this template. For instance, imagine a Japanese sweet called taiyaki, which is made using a taiyaki mold. The taiyaki mold acts as the template, allowing for the creation of various flavors of taiyaki.

![Taiyaki](https://private-user-images.githubusercontent.com/104809324/327632211-327fd042-2332-406d-a0e9-0ac8f3ea8cba.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTQ3MDMzNjksIm5iZiI6MTcxNDcwMzA2OSwicGF0aCI6Ii8xMDQ4MDkzMjQvMzI3NjMyMjExLTMyN2ZkMDQyLTIzMzItNDA2ZC1hMGU5LTBhYzhmM2VhOGNiYS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwNTAzJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDUwM1QwMjI0MjlaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT1kOGQ2Y2E2OWM4ZjZiZmUwNDYyMDcyOTFmODdiMDhhZjI3Y2E0YTdmMWY3NjhhM2Y5ZDlhY2I4MDBlYjkyZjdhJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.6inuHZl6yotkr19aJVxl_XMNB7A_beIrXx3ulBIl0o4)

### Class diagram

![class diagram](https://private-user-images.githubusercontent.com/104809324/327632307-fa059023-bbe2-43d1-850b-52023143f9ff.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTQ3MDM0MjAsIm5iZiI6MTcxNDcwMzEyMCwicGF0aCI6Ii8xMDQ4MDkzMjQvMzI3NjMyMzA3LWZhMDU5MDIzLWJiZTItNDNkMS04NTBiLTUyMDIzMTQzZjlmZi5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwNTAzJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDUwM1QwMjI1MjBaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT1lYWM4NjdhZmE2ZDBhZDg1NjRjYmY0YzFhNmM0MTg3NDExNmI4YzAwY2EyNmExNDA4ZGMxODIxZjhiZWYwZDg5JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.05eg1o_5v4uBc7HK38ADLJxZ4Ioobh73reK0GZRpPv0)

The taiyaki mold can be represented as an abstract class containing virtual functions that describe how to make taiyaki, such as `filling()` and `crustColor()`. Concrete classes will then override these functions, following the process of making taiyaki while allowing for variations to produce different types of taiyaki.

## How to Install and Run

Import this project as a QT project.

## How to Use This App

![sample](https://private-user-images.githubusercontent.com/104809324/327631687-fe91cdcc-f801-4370-a8b0-7b5432ca1332.gif?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTQ3MDMwMjYsIm5iZiI6MTcxNDcwMjcyNiwicGF0aCI6Ii8xMDQ4MDkzMjQvMzI3NjMxNjg3LWZlOTFjZGNjLWY4MDEtNDM3MC1hOGIwLTdiNTQzMmNhMTMzMi5naWY_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwNTAzJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDUwM1QwMjE4NDZaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT02OTNhYjEzMjdhNWU5NzU5ZGFhNmNkOTE1M2YyMGJkNmI1NmFmYWJlOWU2ODdiNjFlNmFiNjQ3ZDk2YzcyN2UxJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.22HFusFnG-hbd4VMHh6M-j7rZQ6f2boSW9PDNguvylc)

When the user presses the button, each animal will produce a soup with different ingredients. The process of making the soup will be represented by the abstract class, and each animal will have a subclass that overrides methods such as `putMeat()`, `putVegetables()`, and `putSoupStock()`.

## License

**MIT License**

Copyright © 2024 jiji

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation, the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

\*\*THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
